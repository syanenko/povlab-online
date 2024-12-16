// Surface 6
// Created by: yesbird65@gmail.com
// Inspired by: https://povlab.yesbird.online/isotutorial
// #version 3.8;
#include "functions.inc"
#include "scenes/samples/common/colormaps.inc"

// Camera
camera
  {
    //orthographic
    perspective // Try it

    //stereo // Try it too
    //distance (clock <0 ? -0:0 )
    //parallaxe atan2 (13*clock,300)

    location <5,5,5>  * 1.0  // Zoom factor: more - faster
    look_at   <0,0.1,0>
    angle 55
    right x * image_width / image_height
  }

// background { color <0, 0, 0> } // By desire

// Lights: tune them
#declare luminosity = 1.7;

light_source {<0,  10, 0>, rgb <1,1,1> * luminosity shadowless}
//light_source {<0, -10, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {< 10, 0, 0>, rgb <1,1,1> * luminosity shadowless}
//light_source {<-10, 0, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {<0, 0,  10>, rgb <1,1,1> * luminosity shadowless}
//light_source {<0, 0, -10>, rgb <1,1,1> * luminosity shadowless}

// Colormap: select it
// #declare cm = make_colormap (viridis,          0.4, 0);
// #declare cm = make_colormap (spring,           0.6, 0);
// #declare cm = make_colormap (summer,           0.8, 0);
// #declare cm = make_colormap (autumn,           0.8, 0);
// #declare cm = make_colormap (winter,           0.5, 0);
// #declare cm = make_colormap (cool,             0.5, 0);
// #declare cm = make_colormap (hot,              0.8, 0);
// #declare cm = make_colormap (smooth_cool_warm, 0.8, 0);
// #declare cm = make_colormap (hsv,              0.8, 0);
// #declare cm = make_colormap (parula,           0.8, 0);
// #declare cm = make_colormap (jet,              0.8, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);
#declare cm = make_colormap (plasma,           0.6, 0);
// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (kindlmann,        0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);

// Surface: play with params
isosurface {

  function{
   f_sphere(x, y, z, 1.8) - (-f_snoise3d(x*1.5, y*1, z*1)*2.25) 

  }
  contained_by { sphere {<0,0,0>, -3.3 } }
  accuracy 0.003
  max_gradient 5

  texture{ 
    pigment { gradient -y
              color_map {cm}
              translate y * 1.5
              scale 5.8 }} 

  scale 0.7
  translate <-0.3, 0.1, 0>
}
