<?php
/**
 * rand() 関数のランダム具合を画像で確認する
 */

$width = 1000;
$height = 1000;

$im = imagecreate($width, $height) or die("Cannot Initialize new GD image stream");;

header("Content-Type: image/png");

$background_color = imagecolorallocate($im, 0, 40, 40);
$white_color = imagecolorallocate($im, 255, 255, 255);
$text_color = imagecolorallocate($im, 233, 14, 91);

for ($i=0; $i < $width; $i++) {
    for ($j=0; $j < $height; $j++) {
        if (rand() % 2) {
            $color = $white_color;
        } else {
            $color = $background_color;
        }
        imageline($im, $i, $j, $i, $j, $color);
    }
}

imagepng($im);
imagedestroy($im);


