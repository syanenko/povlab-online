//
// Density as isosurface
// Created by: yesbird65@gmail.com
// Inspired by: https://www.linuxjournal.com/article/7486
#version 3.8;
global_settings { assumed_gamma 1 }

camera {
  location <160,120,115>
  angle 65
  sky <0,0,-1>
  look_at <0,0,25>
  right x * image_width / image_height
}

light_source {
  <160,120,70>
  color rgb <1,1,1> * 0.8
  shadowless
}

// background { color <0, 0, 0> } // By desire

#declare F=function
{
    pattern
    {
        density_file df3 "data/volume/mri.df3"
        interpolate 10 // Play with it
    }
}

isosurface {
  function { 0.45 - F(x,y,z) }
  contained_by {box {<-1,-1,-1> * 1.5, <1,1,1> * 1.5}}
  threshold 0.07 // Play with it
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
              scale 1.6 }
    finish {
        ambient 0.01
        diffuse 1
        brilliance 1.0
        reflection 0.01
        phong 0.1
        phong_size 10
    }
   } 

  rotate<0,0,0>
  scale 100
}
