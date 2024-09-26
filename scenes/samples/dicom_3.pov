// DICOM data visualization
// Created by: yesbird and jr
// Contacts: https://news.povray.org/groups/

#version 3.8;
global_settings { 
  ambient_light <1,1,1> 
  assumed_gamma 1
}

camera {
  perspective 
  // orthographic
  //stereo
  //distance (clock <0 ? -0:0 )
  //parallaxe atan2 (13*clock,300)

  angle 45
  location <0,-410,100>
  look_at <0,0,0>
  right x * image_width / image_height
}

/* Default colormap
#declare cm = color_map {
        [0.00 rgb <0,0,0>]
        [0.005 rgb <0 0.4 0.50>]
        [0.005 rgb <0 1 0>]
        [0.007 rgb <0 0 1>]
        [0.01 rgb <0 0 1>]
        [0.30 rgb <0,1,0>]
        [0.50 rgb <1,0,0>]
        [1.00 rgb <1,0,0>] }
*/

/* Alternate colormap
#declare cm = color_map {
        [0.00 rgb <0,0,0>]
        [0.01 rgb <0 0.1 0>]
        [0.20 rgb <0,0.7,0.2>]
        [0.30 rgb <0,1,0>]
        [0.40 rgb <0.7,0.5,0>]
        [0.50 rgb <1,0,1,0>]
        [1.00 rgb <1,1,0>] }
*/

// Standard colormaps
#include "scenes/samples/common/colormaps.inc"
// #declare cm = make_colormap (plasma,           0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);
#declare cm = make_colormap (kindlmann,        0.8, 0);
// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (viridis,          0.4, 0);
// #declare cm = make_colormap (spring,           0.6, 0);
// #declare cm = make_colormap (summer,           0.8, 0);
// #declare cm = make_colormap (autumn,           0.8, 0);
// #declare cm = make_colormap (winter,           0.9, 0);
// #declare cm = make_colormap (cool,             0.5, 0);
// #declare cm = make_colormap (hot,              0.8, 0);
// #declare cm = make_colormap (smooth_cool_warm, 0.8, 0);
// #declare cm = make_colormap (hsv,              0.8, 0);
// #declare cm = make_colormap (parula,           0.8, 0);
// #declare cm = make_colormap (jet,              0.8, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);

#declare theinterior = interior {
  media{
    samples 100
    emission 1/2
    absorption 0
    scattering {1, -0.3}
    density {
      density_file df3 "data/volume/dicom_test.df3"
      color_map { cm }
    }
  }
}

background { color <0, 0, 0> }

box {
  // <0,0,0>, <1,1,1>
  // Slices - adjust media's emission/absorption to increase brightness
  // <0,0.6,0>, <1,0.61,1>
  <0,0,0.5>, <1,1,0.51>
  pigment { rgbf 1 }
  interior { theinterior }
  hollow
  translate <-0.5,-0.5,-0.5>
  scale <200,200,200>
  rotate <80,0,0>  
}
