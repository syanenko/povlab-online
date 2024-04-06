#include "common/colormaps.inc"
#include "functions.inc"

// Camera
camera
  {
    perspective

    // Try it
    // orthographic
  
    // Try it too
    //stereo distance (clock <0 ? -0:0 )
    //parallaxe atan2 (13*clock,300)

    location <5,5,5>
    look_at   <0,0.3,0>
    angle 55
    right x * image_width / image_height // Preserve scpect ratio
  }

// Lights
#declare luminosity = 1.7;

light_source {<0,  10, 0>, rgb <1,1,1> * luminosity shadowless}
// light_source {<0, -10, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {< 10, 0, 0>, rgb <1,1,1> * luminosity shadowless}
// light_source {<-10, 0, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {<0, 0,  10>, rgb <1,1,1> * luminosity shadowless}
// light_source {<0, 0, -10>, rgb <1,1,1> * luminosity shadowless}


//
// Colormap - select it
//
// #declare cm = make_colormap (jet,              0.8, 0);
// #declare cm = make_colormap (spring,           0.8, 0);
// #declare cm = make_colormap (hot,              0.8, 0);
#declare cm = make_colormap (winter,           0.8, 0);
// #declare cm = make_colormap (hsv,              0.8, 0);
// #declare cm = make_colormap (autumn,           0.8, 0);
// #declare cm = make_colormap (parula,           0.8, 0);
// #declare cm = make_colormap (summer,           0.8, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);
// #declare cm = make_colormap (cool,             0.8, 0);
// #declare cm = make_colormap (viridis,          0.8, 0);
// #declare cm = make_colormap (smooth_cool_warm, 0.8, 0);
// #declare cm = make_colormap (plasma,           0.8, 0);
// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (kindlmann,        0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);

//--- Surface -----------------------------------------------------------------------------

#declare f = function (x,y,z) { cos(x) + cos(y) + cos(z) }

isosurface {
   function { sqrt (x*x+y*y+z*z)/8 - f(x, y, z)}

   threshold 0
   accuracy 0.0001
   max_gradient 1.6
   open
   contained_by {box {-4, +4}}

   // Appliying colormaps - play with it
   pigment { gradient -y
            color_map  { cm }
            scale 7 
            translate 1.00001}
  scale 0.5
}


//--- Surface -----------------------------------------------------------------------------
/*
#declare f = function { f_sphere(x,y,z,0.8) - pow(f_noise3d(x,y,z),2) } // Ok
//#declare f = function { f_sphere(x,y,z,0.8) + pow(f_noise3d(x,y,z), 3) * 1.3}
//#declare f = function { f_sphere(x,y,z,0.2) - (cos(x) - cos(y) + sin(z)) }
isosurface {
  function { f(x,y - (y/4),z) }
   pigment { gradient -y
             color_map  { cm }
             scale 2
             translate 1}

  scale 2 }

*/  
//--- Surface -----------------------------------------------------------------------------

/*
#declare f = function { f_sphere(x,y,z,0.9) - pow(f_noise3d(x,y,z), 3) } // Ok

isosurface {
  function { f(x,y,z) }

  pigment { gradient -y
            color_map  { cm }
            scale 2.1
            translate -y * 1.01}

  scale 2 }
*/
