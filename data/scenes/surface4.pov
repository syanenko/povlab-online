#declare luminosity = 1.7;
#include "playground.inc"

#include "colormaps.inc"
#include "functions.inc"

// Axis
//axis (3,3,3,0.02)

camera
{ 
  location <4, 3, 7> * 1.6
  look_at <0.00, 0.30, 0.00>
  angle 35
 }


// Camera
/*
camera
{ stereo distance (clock <0 ? -0:0 )
  parallaxe atan2 (13*clock,300)

  location <5, 5, 5> * 1.6
  right  <-1.33, 0.00, 0.000> rotate<90,0,0>
  look_at <0.00, 0.30, 0.00>
  angle 35
 }

light_source{<-10.0, -17.0, 7.0> rgb <2.50, 2.50, 2.50> shadowless}
light_source{<100.0, 200.0, 300.0> rgb <1.00, 1.00, 1.00> shadowless}
light_source{<100.0, 200.0, -300.0> rgb <0.7, 0.7, 0.7> shadowless}
*/

//
// Colormap
//
// #declare cm = make_colormap (spring, 0.4, 0);
// #declare cm = make_colormap (hot, 0.8, 0);
#declare cm = make_colormap (parula, 0.8, 0);
// #declare cm = make_colormap (jet, 0.8, 0);


//--- Surface -----------------------------------------------------------------------------
#declare f = function (x,y,z) { cos(x) + cos(y) + cos(z) }

isosurface {
   function { sqrt (x*x+y*y+z*z)/8 - f(x, y, z)}

   threshold 0
   accuracy 0.0001
   max_gradient 1.6
   open
   contained_by {box {-4, +4}}

   pigment { gradient -y
             color_map  { cm }
             scale 4.5 
             translate 1.000001}
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
             translate 1.0001}

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