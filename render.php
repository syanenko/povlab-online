<?php
header('Access-Control-Allow-Origin: *');

putenv("LD_LIBRARY_PATH=povray/bin");

$TEMP_DIR = sha1_file($_FILES['scene']['tmp_name']);
$UPLOADS_DIR = 'uploads/' . $TEMP_DIR . '/';

if(!is_dir($UPLOADS_DIR))
{
  mkdir($UPLOADS_DIR);
}

$model_path = $UPLOADS_DIR . $_FILES['scene']['name'];
move_uploaded_file($_FILES['scene']["tmp_name"], $model_path);

$pov_keys = ' povray/etc/povray/3.8/povray_1280x720.ini ';
if (isset($_GET['res'])) {
   $res = $_GET['res'];
   if($res == '1024x1024') {
     $pov_keys = ' povray/etc/povray/3.8/povray_1024x1024.ini ';
   } else if($res == '4096x2048') {
     $pov_keys = ' povray/etc/povray/3.8/povray_4096x2048.ini ';
   } else if($res == '1024x512') {
     $pov_keys = ' povray/etc/povray/3.8/povray_1024x512.ini ';
   } else if($res == '512x512') {
     $pov_keys = ' povray/etc/povray/3.8/povray_512x512.ini ';
   } else if($res == '1280x720') {
     $pov_keys = ' povray/etc/povray/3.8/povray_1280x720.ini ';
   } else if($res == '640x480') {
     $pov_keys = ' povray/etc/povray/3.8/povray_640x480.ini ';
   }
}
// error_log("res: " . $_GET['res']);
// error_log("pov_keys: " . $pov_keys);

$pov_in   = $UPLOADS_DIR . $_FILES['scene']['name'];
$command='povray/bin/povray -i' . $pov_in . ' -o' . $pov_out . $pov_keys . '2>&1';

$output=null;
$retval=null;

$start = microtime(true);
exec($command, $output, $retval);
$end = microtime(true);

$pov_out  = array(number_format($end - $start, 2), $UPLOADS_DIR . 'scene.png');
echo json_encode($pov_out);
?>
