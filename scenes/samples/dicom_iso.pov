// DICOM data as isosurface
// Inspired by: https://www.linuxjournal.com/article/7486
// Created by: yesbird and jr
// Contacts: https://news.povray.org/groups/

#version 3.8;
global_settings { assumed_gamma 1 }

camera {
  location <160,120,0> * 1.2
  angle 65
  sky <0,0,-1>
  look_at <-10,0,75>
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
        density_file df3 "data/volume/dicom_test.df3"
        interpolate 6 // Play with it
    }
}

isosurface {
  function { 0.50 - F(x,y,z) } // Play with it
  contained_by {box {<-1,-1,-1> * 1.5, <1,1,1> * 1.5}}
  threshold 0.2 // Play with it
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
              translate z * -0.02
              scale 2.2 }
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
