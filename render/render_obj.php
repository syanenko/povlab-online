<?php
header('Access-Control-Allow-Origin: *');

$TEMP_DIR = sha1_file($_FILES['model']['tmp_name']);
$UPLOADS_DIR = 'uploads/' . $TEMP_DIR . '/';

if(!is_dir($UPLOADS_DIR))
{
  mkdir($UPLOADS_DIR);
}

$model_path = $UPLOADS_DIR . $_FILES['model']['name'];
move_uploaded_file($_FILES['model']["tmp_name"], $model_path);

if (empty($_FILES["texture"])) {
  $texture_path = "";
} else {
  $texture_path = $UPLOADS_DIR . $_FILES['texture']['name'];
  move_uploaded_file($_FILES['texture']["tmp_name"], $texture_path);
}

if (empty($_FILES["normals"])) {
  $normals_path = "";
} else  {
  $normals_path = $UPLOADS_DIR . $_FILES['normals']['name'];
  move_uploaded_file($_FILES['normals']["tmp_name"], $normals_path);
}

echo json_encode(['model' => $model_path, 'texture' => $texture_path, 'normals' => $normals_path]);
?>