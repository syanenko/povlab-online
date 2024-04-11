//
// Density as isosurface example
// Created by: yesbird65@gmail.com
// Inspired by: https://www.linuxjournal.com/article/7486
#version 3.8;
global_settings { assumed_gamma 1 }

#declare TWOPI = 6.283185307179586476925287;
#declare RADIUS = 1;
#declare NX = 200;
#declare NY = 160;
#declare NZ = 160;

#declare DD = <NX,NY,NZ>;
#declare CC = DD / 2;
#declare VP = <160,120,155>;

camera {
  location VP
  angle 60
  sky <0,0,-1>
  look_at <0,0,0>
  right x * image_width / image_height
}

light_source {
  VP + <0, 0, NZ / 1.5>
  color rgb <1,1,1>
  media_interaction on
  media_attenuation on
  shadowless
}

background { color <0, 0, 0> }

#declare F=function
{
    pattern
    {
        density_file df3 "data/volume/mri.df3"
        interpolate 10
    }
}

isosurface {
  function { 0.45 - F(x,y,z) }
  contained_by {box {<-1,-1,-1> * 1.5, <1,1,1> * 1.5}}
  threshold 0
  max_gradient 18
  
  texture{ 
    pigment { gradient z
              color_map {
                [0.00 rgb <0,0,0>]
                [0.01 rgb <0 0 1>]
                [0.30 rgb <0,1,0>]
                [0.50 rgb <1,0,0>]
                [1.00 rgb <1,0,0>]
              }

              translate z * 0.09
              scale 1.8 }} 

  rotate<0,0,0>
  scale 100
}
