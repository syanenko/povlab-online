// m.miller 11.09.23
#version 3.8;

// -----------------------------------------------------------------------------------------
//                     I N C L U D E S
//------------------------------------------------------------------------------------------
#include "shapes.inc"
#include "shapes2.inc"
#include "materials.inc" 
#include "macro_mapped_box.inc"

#declare quality                = 0;     //  0 = no radiosity
#declare light_quality          = 0;     //  0 = 3x3   1 = 20x20
#declare light_mat_emission     = 10;    //  val = emission strength of can and box lights 
#declare light_mat_off          = 1;     //  val = emission strength of can and box lights for aa
#declare ext_light_strength     = 10;    //  val = exterior light strenth  

#declare show_lights            = 1;     //  0 = hide lights
#declare show_materials         = 1;     //  0 = swaps all materials to default 
#declare show_glass_shadows     = 0;     //  0 = turns off shadow casting on curtain glass
#declare show_sky               = 1;     //  0 = hide sky sphere
#declare show_room              = 1;     //  0 = hide room 
#declare show_sample_sphere     = 1;     //  0 = hide sample sphere
#declare show_sample_gizmo      = 0;     //  0 = hide sample gizmo

// radiosity settings
#declare rad_count            = 1000;   //  val = ray count
#declare rad_low_error_factor = 0.5;    //  val = low_error_factor
#declare rad_nearest_count    = 5.0;    //  val = nearest_count   
#declare rad_error_bound      = 2;      //  val = error_bound  
#declare rad_recursion_limit  = 2;      //  val = nearest_count
#declare rad_gray_threshold   = 0.3;    //  val = gray_threshold
#declare rad_subsurface       = 0  ;    //  true/false subsurface 

//-----------------------------------------------------------------------------------------
//                    M A T E R I A L S 
//-----------------------------------------------------------------------------------------

#declare mat_default    = material {M_pearl_satin} ;
#declare M_light_glow   = material {texture{ pigment {C_white} finish {emission light_mat_emission}}}; 
#declare M_light_off    = material {texture{ pigment {C_white} finish {emission light_mat_off}}}; 
#declare sample_mat     = material {M_wood_B scale <15,15,15> rotate <0,0,0>};

#if (show_materials)      
    #declare mat_mull           = material{M_gray70_gloss} ;
    #declare mat_wall           = material{M_pearl_satin} ;
    #declare mat_glass_A        = material{M_glass} ; 
    #declare mat_glass_B        = material{M_glass_gold   } ;  
    #declare mat_glass_gasket   = material{M_black_gloss} ;
    #declare mat_ceiling        = material{M_white_matt} ;
    #declare mat_gray50_satin   = material{M_gray50_satin} ; 
    #declare mat_gray20_gloss   = material{M_gray20_gloss} ; 
    #declare mat_gray20_satin   = material{M_gray20_satin} ;
    #declare mat_gray10_satin   = material{M_gray10_satin} ; 
    #declare mat_gray_screen    = material{M_gray_screen    scale <1,1,1> rotate <0,0,0>} ; 
    #declare mat_wood_A         = material{M_wood_A         scale <15,15,15> rotate <0,90,0>} ; 
    #declare mat_wood_B         = material{M_wood_B         scale <15,15,15> rotate <0,0,0> } ; 
    #declare mat_carpet         = material{M_carpet_A       scale <100,100,100>} ; 
    #declare mat_concrete       = material{M_concrete_A     scale <10,10,10>} ; 
    #declare mat_concrete_C     = material{M_concrete_C     scale <30,30,30>} ; 
#else
    #declare mat_mull           = material{mat_default} ;
    #declare mat_wall           = material{mat_default} ;
    #declare mat_glass_A        = material{mat_default} ; 
    #declare mat_glass_B        = material{mat_default} ;
    #declare mat_glass_gasket   = material{mat_default} ;
    #declare mat_ceiling        = material{mat_default} ;
    #declare mat_gray50_satin   = material{mat_default} ; 
    #declare mat_gray20_gloss   = material{mat_default} ; 
    #declare mat_gray20_satin   = material{mat_default} ;
    #declare mat_gray10_satin   = material{mat_default} ;  
    #declare mat_gray_screen    = material{mat_default} ; 
    #declare mat_wood_A         = material{mat_default} ;  
    #declare mat_wood_B         = material{mat_default} ;
    #declare mat_carpet         = material{mat_default} ;
    #declare mat_concrete       = material{mat_default} ;
    #declare mat_concrete_C     = material{mat_default} ; 
#end




//-----------------------------------------------------------------------------------------
//                    R O O M 
//-----------------------------------------------------------------------------------------
#if (show_room)
    #include "room.inc"
    object { curtain_walls rotate <0,0,0> translate <0,0,175> }
    object { curtain_walls rotate <0,0,0> translate <0,0,-175> }
    object { curtain_walls rotate <0,90,0> translate <-175,0,0> }
    object { curtain_walls rotate <0,90,0> translate <175,0,0> }
    object { soffit }
    object { center_wall }
    object { room_floor }
    object { room_ceiling }
    object { corner_pier }
#end

//-----------------------------------------------------------------------------------------
//                    S A M P L E
//-----------------------------------------------------------------------------------------
#if (show_sample_sphere)
     object {sphere {<0,0,0>, 1} scale <30,30,30> material {sample_mat} translate <0,30,85>} 
#end

#if (show_sample_gizmo)
    #declare gizmo =
    union { 
        merge{              
            difference {
                sphere {<0,0,0>, 1 translate <0,1,0>}
                plane {<0,-1,0>,0 translate <0,1,0>}   
                } 
            torus { .95,.05 translate <0,1,0>}    
            cylinder {<0,0,0>,<0,.05,0>,.95 translate <0,1,0>}    
            difference {
                sphere {<0,0,0>, .8 translate <0,1,0>}
                plane {<0,0,1>,0 translate <0,0,0>}   
                }
            torus { .75,.05 rotate <90,0,0> translate <0,1,0>}
            cylinder {<0,0,-.05>,<0,0,0>,.75 translate <0,1,0>} 
            sphere {<0,0,0>, .5 translate <0,1,0>}  
        } 
    }
    object {gizmo scale <30,30,30> rotate <0,-35,0>  material {sample_mat} translate <0,0,85>} 
#end


//-----------------------------------------------------------------------------------------
//                    G L O B A L S
//-----------------------------------------------------------------------------------------
background { color rgb <.1,.1,.1> }

#switch (quality)
#case (0)
    global_settings {    
        max_trace_level 5
        ambient_light <.013,.01,.01> * .1
        assumed_gamma 1                 
    }
#break
#case (1)
    #local p_start		=	64/image_width;
    #local p_end_tune	=	4/image_width;
    #local p_end_final	=	2/image_width;
   
    global_settings { 
        ambient_light <.013,.01,.01> * .1
        max_trace_level 7
        assumed_gamma 1   
        subsurface {}
        radiosity {    
            pretrace_start p_start 
            pretrace_end   p_end_tune  
            count rad_count                 
            nearest_count rad_nearest_count           
            error_bound rad_error_bound             
            recursion_limit rad_recursion_limit 
            low_error_factor rad_low_error_factor          
            gray_threshold rad_gray_threshold         
            subsurface rad_subsurface
        }  
    }   
#break
#else
    global_settings {    
        max_trace_level 3
        ambient_light <.013,.01,.01> * .1
        assumed_gamma 1                 
    }
#end

//-----------------------------------------------------------------------------------------
//                    S K Y
//-----------------------------------------------------------------------------------------
#declare img            = "maps/panorama.jpg"
#declare sky_size       = <10000,10000,10000> ;
#declare sky_scale      = <-1,1,1> ;
#declare sky_pos        = <0,100,0>;
#declare sky_rot_Y      = -100 ;
#declare sky_emmision   = .5 ;

#declare bg_sphere =
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
        emission sky_emmision
        }
      scale sky_size  
      rotate <0, sky_rot_Y, 0>  
      translate sky_pos
      }
      scale sky_scale 
}  

#if (show_sky) 
    object { bg_sphere } 
#end

// -----------------------------------------------------------------------------------------
//                      C A M E R A 
//------------------------------------------------------------------------------------------ 
#declare cam_A =
    camera {
        up <0, 1, 0>  
        angle 80    
        location <173,58,30 > 
        look_at <-100,42,150>
    } 

camera {cam_A}

// -----------------------------------------------------------------------------------------
//                      L I G H T S
//------------------------------------------------------------------------------------------ 
#if (show_lights)
    #if (light_quality=1)
        //--- main
        #declare light_A =
        light_source {
            <0,0,0> 
            #declare light_color = color red 1 green 1 blue 1 ;                      
            light_color * ext_light_strength                  
            area_light
            <500, 0, 0> <0, 500, 0>         
            20,20                         
            adaptive 10                    
            jitter                        
            circular                      
            orient                     
            fade_distance 300
            fade_power 2     
            translate <200,400,1000>
        }   
        light_A
        
        // low light to simulate floor bounce 
        #declare light_B =
        light_source {
            <0,0,0> 
            #declare light_color = color red .1 green .1 blue .1 ;                      
            light_color * ext_light_strength             
            area_light
            <300, 0, 0> <0, 0, 300>         
            8,8                         
            adaptive 10                    
            jitter                        
            circular                      
            orient   
            fade_distance 600
            fade_power 2     
            translate <-100,-300,400>
        }   
        light_B         
           
    #else    
        #declare light_A =
        light_source {
            <0,0,0> 
            #declare light_color = color red 1 green 1 blue 1 ;                      
            light_color * ext_light_strength                  
            area_light
            <500, 0, 0> <0, 500, 0>         
            3,3                         
            adaptive 10                    
            jitter                        
            circular                      
            orient                     
            fade_distance 300
            fade_power 2     
            translate <200,400,1000>
        }   
        light_A 
         
        // low light to simulate floor bounce 
        #declare light_B =
        light_source {
            <0,0,0> 
            #declare light_color = color red .1 green .1 blue .1 ;                      
            light_color * 4              
            area_light
            <300, 0, 0> <0, 0, 300>         
            6,6                         
            adaptive 10                    
            jitter                        
            circular                      
            orient   
            fade_distance 600
            fade_power 2     
            translate <-100,-300,400>
        }   
        light_B  
         
    #end 
#end
