//
// Molecular structure imported from Mol* (https://molstar.org)
// Converted to POV scene by PoseRay v3.13 (https://sites.google.com/site/poseray/)
//
#local Temp_version = version;
#version 3.71;

global_settings {
   max_trace_level 15
   adc_bailout 0.001
   assumed_gamma 1
}

#include "textures.inc"

// Camera
camera {
        perspective
        right x * image_width / image_height
        location <45,45,45>
        look_at <0,5,0>
        }

// Light
light_source {
              <1.66533453693773E-16,2.22044604925031E-16,209.883201090511>
              color rgb <1,1,1> * 2.6
              parallel
              point_at <1.66533453693773E-16,2.22044604925031E-16,0>
              rotate <0,0,8.88181116169501>  //roll
              rotate <-34.8074608325083,0,0> //elevation
              rotate <0,27.3548787349505,0>  //rotation
             }

background { color srgb <0,0,0>  } // By desire

// Materials
#declare Base =
texture {
    pigment { rgb <0.2, 0.2, 0.2> }
    finish {
        ambient 0.1
        diffuse 0.7
        brilliance 6.0
        reflection 0.0
        phong 0.8
        phong_size 120
    }
}

#declare _0x1b9e771_=
#declare PR_DIFFUSE=pigment {color srgb <0.11,0.62,0.2> transmit 0/100 }
#declare T1 = texture{ Base
                       pigment{uv_mapping PR_DIFFUSE }
                     }
material{ texture{ T1 }}


#declare _0x4259ff1_=
#declare PR_DIFFUSE=pigment {color srgb <0.26,0.35,1.00> transmit 0/100 }
#declare T1=texture{ Base
                     pigment{uv_mapping PR_DIFFUSE }
                    }
material {texture{ T1 }}

#declare _0xff26181_=
#declare PR_DIFFUSE=pigment {color srgb <1.00,0.15,0.09> transmit 0/100 }
#declare T1=texture{ Base
                     pigment{uv_mapping PR_DIFFUSE }
                    }
material {texture{ T1 }}


#declare _0xffff3e1_=
#declare PR_DIFFUSE=pigment {color srgb <1.00,1.00,0.24> transmit 0/100 }
#declare T1=texture{ Base
                     pigment{uv_mapping PR_DIFFUSE }
                    }
material {texture{ T1 }}

#declare _0xeb703c1_=
#declare PR_DIFFUSE=pigment {color srgb <0.92,0.44,0.24> transmit 0/100 }

#declare T1=texture{ Base
                     pigment{uv_mapping PR_DIFFUSE }
                    }
material{ texture{ T1 }}

#declare _0xff26180_6_=
#declare PR_DIFFUSE=pigment {color srgb <1.00,0.15,0.09> transmit 40/100 }
#declare T1=texture{ Base
                     pigment{uv_mapping PR_DIFFUSE }
                    }
material { texture{ T1 }}

//Geometry
#include "scenes/samples/1TQN/1TQN_POV_geom.inc"

object{ _1TQN_ }
#version Temp_version;
