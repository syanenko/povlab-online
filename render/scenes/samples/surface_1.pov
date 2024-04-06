// Surface 1
// Estimated rendering time with default params: 4 seconds
// Created by: yesbird65@gmail.com
// Date: 07.04.24
// Inspired by: https://povlab.online/isotutorial
// #version 3.8;
#include "functions.inc"
#include "scenes/samples/common/colormaps.inc"

// Camera
camera
  {
    orthographic
    //perspective // Try it

    //stereo // Try it too
    //distance (clock <0 ? -0:0 )
    //parallaxe atan2 (13*clock,300)

    location <5,5,5> * 1.5 // Zoom factor: more - faster
    look_at   <0,0.3,0>
    angle 55

    right x * image_width / image_height
  }

// By desire
// background { color <0, 0, 0> }

// Lights: tune them
#declare luminosity = 1.7;
//light_source {<0,  10, 0>, rgb <1,1,1> * luminosity shadowless}
//light_source {<0, -10, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {< 10, 0, 0>, rgb <1,1,1> * luminosity shadowless}
//light_source {<-10, 0, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {<0, 0,  10>, rgb <1,1,1> * luminosity shadowless}
// light_source {<0, 0, -10>, rgb <1,1,1> * luminosity shadowless}

// Colormap: select it
// #declare cm = make_colormap (viridis,          0.4, 0);
// #declare cm = make_colormap (spring,           0.6, 0);
// #declare cm = make_colormap (summer,           0.8, 0);
// #declare cm = make_colormap (autumn,           0.8, 0);
// #declare cm = make_colormap (winter,           0.9, 0);
// #declare cm = make_colormap (cool,             0.5, 0);
// #declare cm = make_colormap (hot,              0.8, 0);
// #declare cm = make_colormap (smooth_cool_warm, 0.8, 0);
// #declare cm = make_colormap (hsv,              0.8, 0);
#declare cm = make_colormap (parula,           0.6, 0);
// #declare cm = make_colormap (jet,              0.8, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);
// #declare cm = make_colormap (plasma,           0.8, 0);
// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (kindlmann,        0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);

// Surface: play with params
#declare f = function (x,y,z) { cos(x) + cos(y) + cos(z) }
isosurface {
   function { sqrt (x*x+y*y+z*z)/8 - f(x, y, z)}

   threshold 0
   accuracy 0.0001
   max_gradient 1.6
   open
   contained_by {box {-4.4, +4.4}}

   // Appliy colormap here
   pigment { gradient -y
            color_map  { cm }
            scale 7 
            translate -2.5}
  scale 0.5
}
