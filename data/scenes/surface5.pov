#declare luminosity = 2.5;
#include "playground.inc"

#include "colormaps.inc"
#include "functions.inc"

// Axis
// axis (8,8,8,0.05)


// Camera
/*
camera
{ 
  location <-3, 3.5, 4> * 4
  look_at <0, -0.5, 0>
  rotate x * 90
  angle 35
 }
*/

// Camera stereo
camera
{ stereo distance (clock <0 ? -0:0 )
  parallaxe atan2 (13*clock,300)

  location <-4, 4, 4> * 6.5
  right  <-1.33, 0.00, 0.000>
  rotate<90,0,0>
  look_at <0, -0.5, 0>
  angle 35
 }

//light_source{<-10.0, -17.0, 7.0> rgb <2.50, 2.50, 2.50> shadowless}
//light_source{<100.0, 200.0, 300.0> rgb <1.00, 1.00, 1.00> shadowless}
light_source{<0, 10, 0> rgb <1, 1 , 1> * 3 }

//
// Colormap
//
// #declare cm = make_colormap (spring, 0.4, 0);
// #declare cm = make_colormap (hot, 0.8, 0);
// #declare cm = make_colormap (hot, 0, 0);
// #declare cm = make_colormap (parula, 0.8, 0);
#declare cm = make_colormap (parula, 0.4, 0);
// #declare cm = make_colormap (jet, 0.8, 0);


#declare r = function { sqrt(x*x + y*y) * 2.3}
#declare f = function { sin (r(x,y,z)) * 4 / r(x,y,z) - z }

isosurface {
   function { f(x,y,z) }

   threshold 0
   accuracy 0.00001
   max_gradient 4.5
   open
   contained_by {box {-5, +5}}

   pigment { gradient z
             color_map  { cm }
             scale 5
             translate 4
   }

   scale 1
   rotate z * 25
}

