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

$pov_in   =  '/home/s/syanenzc/povlab.online/public_html/render/scenes/test/sphere.pov';
$pov_out  = $UPLOADS_DIR . 'scene.png';
$pov_keys = ' -W640 -H480 ';
$command='./povray -i' . $pov_in . ' -o' . $pov_out . $pov_keys . '2>&1';
// echo json_encode($command);
$output=null;
$retval=null;
exec($command, $output, $retval);
echo json_encode($pov_out);
?>
