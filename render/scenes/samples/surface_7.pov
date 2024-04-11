//
// Surface 7
// Created by: yesbird65@gmail.com
// Inspired by: https://povlab.online/isotutorial
#version 3.8;
#include "functions.inc"
#include "scenes/samples/common/colormaps.inc"
#include "scenes/samples/common/param.inc"

// Camera
camera
  {
    //orthographic
    perspective // Try it

    //stereo // Try it too
    //distance (clock <0 ? -0:0 )
    //parallaxe atan2 (13*clock,300)

    location  <0, 6, -20> * 1.2  // Zoom factor: more - faster
    look_at <-1, -3.7, 0>
    angle 34
    right x * image_width / image_height
  }

background { color <0, 0, 0> } // By desire

// Lights: tune them
#declare luminosity = 1.2;

light_source {<0,  10, 0>, rgb <1,1,1> * luminosity}
//light_source {<0, -10, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {< 10, 0, 0>, rgb <1,1,1> * luminosity}
//light_source {<-10, 0, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {<0, 0,  10>, rgb <1,1,1> * luminosity}
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
#declare cm = make_colormap (jet,              0.6, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);
// #declare cm = make_colormap (plasma,           0.8, 0);
// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (kindlmann,        0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);

// Surface: play with params
#declare N=5.6;  // number of turns
#declare H=3.5;  // height
#declare P=2;    // power
#declare L=4;    // Controls spike length
#declare K=9;    // Controls spike sharpness

#declare W = function(u){pow(u/(2*pi),P)}

#declare Fx = function(u,v){W(u)*cos(N*u)*(1+cos(v))}
#declare Fy = function(u,v){W(u)*sin(N*u)*(1+cos(v))}
#declare Fz = function(u,v){W(u)*(sin(v)+pow(sin(v/2),K)*L)  + H*pow(u/(2*pi),P+1)}

object{
    Parametric(
       Fx, Fy, Fz,
       <FromU(0),0>,<2*pi,2*pi>,
       250,50,""
    )

    pigment { gradient -y
              color_map  { cm }
              scale 12
              translate 5.000001}

    finish {
      phong 0.5
      phong_size 10
      reflection 0.1
      }
  no_shadow
  rotate x*120
}
