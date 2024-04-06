    #include "colors.inc"
    #include "glass.inc"
    #include "golds.inc"
    #include "metals.inc"
    #include "stones.inc"
    #include "woods.inc"
    #include "textures.inc"
    #include "functions.inc"

// radiosity (global illumination) settings
#default{ finish{ ambient 0 diffuse 1 }} 

global_settings {
  radiosity {
    pretrace_start 0.08           // start pretrace at this size
    pretrace_end   0.04           // end pretrace at this size
    count 35                      // higher -> higher quality (1..1600) [35]

    nearest_count 5               // higher -> higher quality (1..10) [5]
    error_bound 1.8               // higher -> smoother, less accurate [1.8]
    recursion_limit 3             // how much interreflections are calculated (1..5+) [3]

    low_error_factor .5           // reduce error_bound during last pretrace step
    gray_threshold 0.0            // increase for weakening colors (0..1) [0]
    minimum_reuse 0.015           // reuse of old radiosity samples [0.015]
    brightness 1                  // brightness of radiosity effects (0..1) [1]

    adc_bailout 0.01/2
    //normal on                   // take surface normals into account [off]
    //media on                    // take media into account [off]
    //save_file "file_name"       // save radiosity data
    //load_file "file_name"       // load saved radiosity data
    //always_sample off           // turn sampling in final trace off [on]
    //max_sample 1.0              // maximum brightness of samples
  }
}



    camera {
      sky <0,0,1>
      right x * image_width / image_height
      direction <-1,0,0>
      location <30,10,2>
      look_at <0,0,2>
      angle 15
    }

    global_settings { ambient_light color rgb< 1.0, 1.0, 1.0> }

    light_source {
      <10,-10,20>
      color rgb< 1.0, 1.0, 1.0> * 2
    }


    light_source {
      <-10, 10, 0>
      color rgb< 1.0, 1.0, 1.0> * 2
    }

/*
    background { color <0,0,0> }
    plane {
      <0,0,1>, 0
      texture { pigment{ color rgb<0.4, 0.4, 0.4> }
               finish { phong 1 reflection 0.00}
             }
    }
*/ 


//--------------------------------------------------------- 
//---------------------------------------------------------
//------------------ random functions standard include file
#include "rand.inc"
#declare Random_1 = seed (12433);
//---------------------------------------------------------

blob{ threshold 1
 #local Nr = 0;
 #local EndNr = 200;
 #while (Nr< EndNr)
   sphere{ <0,0,0>, 0.185 , 1.5
           translate VRand_On_Sphere(Random_1)
           texture{ Polished_Chrome
                    pigment{ color rgb< 1.2, 0.5, 0.1> }
                    finish { phong 1 reflection{ 0.35 metallic 0.5 } }
                  } // end of texture
         } // end of object

 #local Nr = Nr + 1;  // next Nr
 #end

scale 2
rotate<0,60,0>
translate<0,0,2>
}

sphere { <0,0,0>, 1

         texture{ pigment{ color rgbt< 0.4, .15, 0.30, 0.86>}
                  normal { bumps 1.25 scale 0.02 }
                  finish { phong 0.75  }
                }

          scale 2  rotate<0,0,0>  translate <0,0,2>
       }



