//
// Surface 4
// Created by: yesbird65@gmail.com
// Inspired by: https://povlab.online/isotutorial
// Estimated rendering time with default params: 4 seconds
#version 3.8;
#include "functions.inc"
#include "scenes/samples/common/colormaps.inc"
global_settings { assumed_gamma 1 }

// Camera
camera
  {
    //orthographic
    perspective // Try it

    //stereo // Try it too
    //distance (clock <0 ? -0:0 )
    //parallaxe atan2 (13*clock,300)

    location <5,5,5>  * 1.0  // Zoom factor: more - faster
    look_at   <0,-0.3,0>
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
#declare cm = make_colormap (parula,           0.6, 0);
// #declare cm = make_colormap (jet,              0.8, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);
// #declare cm = make_colormap (plasma,           0.8, 0);
// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (kindlmann,        0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);

// Surface: play with params
isosurface {

  function{
    f_flange_cover(
       x,y,z,
       0.004, // spikiness,
       10,    // inverse size,
       0.53,  // flange, (1 = off)
       1      // threshold
       )                                                                       
  }

  contained_by {sphere {0,1.5}}
  threshold 0.01 
  accuracy 0.00001
  max_gradient 5
  
  texture{ 
    pigment { gradient -y
              color_map {cm}
              translate y * 1.5
              scale 2.7 }} 
  
  rotate<35,35,35>
  scale 2
  translate< 0,0,0>
}
