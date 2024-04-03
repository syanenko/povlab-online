<?php
header('Access-Control-Allow-Origin: *');

$TEMP_DIR = sha1_file($_FILES['scene']['tmp_name']);
$UPLOADS_DIR = 'uploads/' . $TEMP_DIR . '/';

if(!is_dir($UPLOADS_DIR))
{
  mkdir($UPLOADS_DIR);
}

$model_path = $UPLOADS_DIR . $_FILES['scene']['name'];
move_uploaded_file($_FILES['scene']["tmp_name"], $model_path);

$pov_in   = $UPLOADS_DIR . $_FILES['scene']['name'];
$pov_out  = $UPLOADS_DIR . 'scene.png';
$pov_keys = ' -W1024 -H768 +A0.3 +J +R4 ';
$command='./povray -i' . $pov_in . ' -o' . $pov_out . $pov_keys . '2>&1';
// echo json_encode($command);
$output=null;
$retval=null;
exec($command, $output, $retval);
echo json_encode($pov_out);
?>
