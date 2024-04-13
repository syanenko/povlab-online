// build a sample array of objects using materials from mat_array 
// shifts samples along the x based on 'current_sample'

#include "shapes.inc"
#include "shapes2.inc"

#declare C_gray20 =             rgb <0.2, 0.2, 0.2> ; 
#declare C_off_white =          rgb <0.99, 0.92, 0.78> ;

#declare F_glow =
    finish {
    ambient 1
    diffuse 1
    emission 1.5
    phong 0
    roughness 1
    }
    
// gizmo 
#declare gizmo = 
merge {
    difference {
        sphere { <0,0,0>, 1 }
        plane { <0,-1,0>, 0 translate <0,0,0> }
        } 
     cylinder {<0,0,0>,<0,.05,0>,.95}
     torus {.95,.05} 
     sphere {<0,0,0>,.7}  
     
    difference {
        sphere { <0,0,0>, .9 }
        plane { <0,0,1>, 0 translate <0,0,0> }
    }
    
    torus {.85,.05 rotate <90,0,0>}
    cylinder {<0,0,-.05>,<0,0,0>,.85} 
    scale <.5,.5,.5>
} 


// -----------------------------------------------------------------------------------------
//                      U I   S H A D O W S
//------------------------------------------------------------------------------------------  
//--- fake shadow
#declare imgDiffuse = "ui_shadows.png" 
#declare T_ui_shadow =
texture {
   pigment { 
        image_map {
            png imgDiffuse     
            map_type 0
            interpolate 4 
         } 
    }
    finish {  emission .02 }
    scale <1,1,1> 
}

#declare M_ui_shadows = material{ texture{T_ui_shadow}}
#declare ui_shadows = plane {<0,0,-1>,0 material{M_ui_shadows scale <16,16,1>} }
object { ui_shadows translate <-8,-7.5,7> no_shadow }

  
// -----------------------------------------------------------------------------------------
//                      S A M P L E    A R R A Y
//------------------------------------------------------------------------------------------  

#declare gap = 3;
#declare sample =       sphere {<0,0,0> .5 no_shadow} ; 
#declare sample_cube  = object { Round_Box (<-.5,-.5,-.5>,<.5,.5,.5>,.05,1 ) no_shadow} ;
#declare sample_flat  = box { <-.5,-.5,-.5>,<.5,.5,.5> scale <1,1,1> no_shadow}

#declare pos_X = -current_sample*gap ;
#declare T_box =  texture{ pigment{ C_gray20 } finish {F_glow}}
#declare T_anno = texture{ pigment{ C_off_white } finish {F_glow}}

#declare all_samples =
union {
    #for (i,1,mat_count-1)
        object { sample       material {mat_array[i][1]} scale <2,2,2> translate <i*gap,0,0>}   
    #end
    translate <pos_X,0,0>
}

// -- add names
#declare all_text =
#for (i,1,mat_count-1)
    text { ttf "arial.ttf", mat_array[i][0], .01 , 0 
           texture{ T_anno }
           scale<.20,.20,.20>
           translate <(pos_X + (i*gap))-.75,-1.55,-1>
          } 
#end  

all_samples

//--- frame
object {
    difference {
        object { cylinder {<0,0,0>,<0,0,.01>,1.25} } 
        object { cylinder {<0,0,-1>,<0,0,.11>,1.23} }
        texture{ T_box } 
    }
    translate <0,0,0> 
    
}

object { gizmo material {mat_array[current_sample][1] } scale <4.1,4.1,4.1> rotate <0,-30,0> rotate <-30,0,0> translate <-4.75,-4.0,0> }
object { sample_cube  material {mat_array[current_sample][1]} scale <2.7,2.7,2.7> rotate <0,45,0> rotate <-30,0,0>  translate <0,-4.2,0>  }
object { sample_flat  material {mat_array[current_sample][1]} scale <3.8,3.8,.01> rotate <20,0,0> translate <4.95,-4.2,5>}

text { ttf "arial.ttf", concat("sample: ", str(current_sample,0,0), "   ", mat_array[current_sample][0]), .01 , 0 
       texture{ T_anno }
       scale<.18,.18,.18>
       translate <-7,-6.65,-1>
      }


// -----------------------------------------------------------------------------------------
//                      C A M E R A 
//------------------------------------------------------------------------------------------ 
#declare cam_front =
    camera {
        up <0, 1, 0>  
        angle 8.25    
        location <0,-2.75,-105> 
        look_at  <0,-2.75,0>
    } 
camera {cam_front}   

 
 
 
// -----------------------------------------------------------------------------------------
//                      L I G H T S
//------------------------------------------------------------------------------------------ 

#declare light_left =
light_source {
    <0,0,0> 
    #declare light_color = color red 1 green 1 blue 1 ;                      
    light_color * .5                  
    area_light
    <50, 0, 0> <0, 0, 50>         
    4, 4                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                     
    fade_distance 600
    fade_power 2     
    translate <-200,100,150>
}   
//light_left


#declare light_right =
light_source {
    <0,0,0> 
    #declare light_color = color red 1 green 1 blue 1 ;                      
    light_color * 1                  
    area_light
    <50, 0, 0> <0, 0, 50>         
    4, 4                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                     
    fade_distance 400
    fade_power 2     
    translate <200,200,-150>
}   
light_right 


#declare light_under =
light_source {
    <0,0,0> 
    #declare light_color = color red 1 green 1 blue 1 ;                      
    light_color * .2                  
    area_light
    <50, 0, 0> <0, 0, 50>         
    4, 4                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                     
    fade_distance 400
    fade_power 2     
    translate <-100,-100,0> 
    shadowless 
}   
light_under 






    
// -----------------------------------------------------------------------------------------
//                      S K Y
//------------------------------------------------------------------------------------------ 
background { rgb <0.12, 0.11, 0.1> * .2 }
#declare img = "studio_2k.jpg" 
#macro bg_sphere (sc, pos, rot) 
object {
    sphere  
        { 0 1 
        hollow
        pigment{
            image_map{ 
                jpeg img          
                map_type 1 
                interpolate 4 
                }
      }        
      finish { 
        ambient  1.0 
        diffuse  1 
        emission 1.5
        }
      scale sc  
      translate pos
      rotate <0, rot, 0>  
      } 
}  
#end
object { bg_sphere (<4000,4000,4000>, <0,100,0>, 275) scale <-1,1,1> }