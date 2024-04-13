//  default materials - non image mapped
//  m.miller 05.24.2023



// -----------------------------------------------------------------------------------------
//                      C O L O R S
//------------------------------------------------------------------------------------------ 
     
#declare C_clear =              rgbt <0.0, 0.0, 0.0,   1> ;
#declare C_tint20 =             rgbt <0.0, 0.0, 0.0,   .2> ; 
#declare C_tint50 =             rgbt <0.0, 0.0, 0.0,   .5> ;
#declare C_tint80 =             rgbt <0.0, 0.0, 0.0,   .8> ; 
#declare C_milk =               rgbt <1.0, 1.0, 1.0,   .5> ; 
#declare C_blue25 =             rgbt <0.0, 0.6, 1.0,   .25> ;  
#declare C_blue75 =             rgbt <0.0, 0.6, 1.0,   .75> ;
#declare C_green75 =            rgb <0.0, 0.45, 0.0,   .75> ;
#declare C_purple25 =           rgb <0.3, 0.0, 0.6,    .25> ; 
#declare C_purple75 =           rgb <0.3, 0.0, 0.6,    .75> ; 
#declare C_white =              rgb <1.0, 1.0, 1.0> ; 
#declare C_black =              rgb <0.0, 0.0, 0.0> ; 
#declare C_red =                rgb <1, 0.0, 0.0> ; 
#declare C_light_red =          rgb <1.0, 0.28, 0.25> ; 
#declare C_dark_red =           rgb <0.3, 0.0, 0.0> ; 
#declare C_scarlet_red =        rgb <0.65, 0.0, 0.0> ; 
#declare C_vermilion =          rgb <0.5, 0.04, 0.05> ; 
#declare C_blood_red =          rgb <0.25, 0.028, 0.02> ; 
#declare C_crimson_red =        rgb <0.2, 0.0, 0.0> ; 
#declare C_midnight =           rgb <0.05, 0.0, 0.0> ; 
#declare C_salmon =             rgb <1.00,0.30,0.20> ; 
#declare C_rose =               rgb <1.00, 0.02, 0.05> ; 
#declare C_dusty_rose =         rgb <0.8, 0.4, 0.3> ; 
#declare C_pink =               rgb <1.00,0.50,0.58> ; 
#declare C_coral =              rgb <1.00,0.30,0.30> ; 
#declare C_cyan =               rgb <0.0, 1.0, 1.0> ; 
#declare C_light_cyan =         rgb <0.7, 1.0, 1.0> ; 
#declare C_dark_cyan =          rgb <0.0, 0.2, 0.25> ; 
#declare C_blue =               rgb <0.0, 0.0, 1.0> ; 
#declare C_light_blue =         rgb <0.70, 0.97, 1.0> ; 
#declare C_dark_blue =          rgb <0.0, 0.09, 0.25> ; 
#declare C_dark_gray_blue =     rgb <0.05, 0.08, 0.13> ; 
#declare C_charcoal_blue =      rgb <0.011, 0.018, 0.02> ; 
#declare C_navy_blue =          rgb <0.01, 0.02, 0.3> ; 
#declare C_horizon_blue =       rgb <0.4, 0.75, 1.0> ; 
#declare C_sky_blue =           rgb <0.2, 0.7, 1.0> ; 
#declare C_cornflower_blue =    rgb <0.2, 0.55, 1.0> ; 
#declare C_powder_blue =        rgb <0.8, 0.95, 1.0> ; 
#declare C_midnight_blue =      rgb <0.005, 0.01, 0.05> ; 
#declare C_cobalt_blue =        rgb <0.0, 0.03, 0.25> ; 
#declare C_teal =               rgb <0.0, 0.5, 0.5> ; 
#declare C_purple =             rgb <0.3, 0.0, 0.6> ;  
#declare C_light_purple =       rgb <0.5, 0.2, 1.0> ; 
#declare C_dark_purple =        rgb <0.2, 0.0, 0.4> ; 
#declare C_maroon =             rgb <0.50,0.00,0.35> ; 
#declare C_purple_maroon =      rgb <0.25, 0.0, 0.23> ; 
#declare C_mauve =              rgb <0.15, 0.1, 0.13> ; 
#declare C_dark_mauve =         rgb <0.1, 0.06, 0.08> ; 
#declare C_plum =               rgb <0.25, 0.05, 0.19> ; 
#declare C_lavender =           rgb <0.67, 0.51, 1.0> ; 
#declare C_cranberry =          rgb <0.25, 0.0, 0.07> ; 
#declare C_magenta =            rgb <0.9, 0.0, 0.6> ; 
#declare C_violet =             rgb <0.74, 0.2, 1.0> ; 
#declare C_lilac =              rgb <0.85, 0.6, 1.0> ; 
#declare C_grape =              rgb <0.40, 0.2, .75> ; 
#declare C_green =              rgb <0.0, 0.45, 0.0> ; 
#declare C_dark_green =         rgb <0.0, 0.2, 0.0> ; 
#declare C_light_green =        rgb <0.15, 0.9, 0.15> ; 
#declare C_emerald_green =      rgb <0.0, 0.4, 0.25> ; 
#declare C_lime_green =         rgb <0.6, 1.0, 0.2> ; 
#declare C_green_apple =        rgb <0.50, 1.0, 0.3> ; 
#declare C_pea_green =          rgb <0.7, 1.0, 0.4> ; 
#declare C_forest_green =       rgb <0.0, 0.1, 0.02> ; 
#declare C_olive_green =        rgb <0.35, 0.4, 0.05> ; 
#declare C_yellow_green =       rgb <0.75, 1.0, 0.3> ; 
#declare C_kelly_green =        rgb <0.1, 0.65, 0.3> ; 
#declare C_chartreuse =         rgb <0.3, 1.0, 0.3> ; 
#declare C_mint_green =         rgb <0.5, 1.0, 0.5>  ; 
#declare C_sea_green =          rgb <0.4, 1.0, 0.75> ;
#declare C_khaki_green =        rgb <0.45, 0.5, 0.2> ; 
#declare C_turquoise =          rgb <0.0, 0.30, 0.25> ; 
#declare C_yellow =             rgb <1.0, 1.0, 0.0> ; 
#declare C_light_yellow =       rgb <1.0, 1.0, 0.4> ;
#declare C_mustard_yellow =     rgb <0.8, 0.6, 0.0> ; 
#declare C_canary_yellow =      rgb <1.0, 0.9, 0.1> ;
#declare C_safty_yellow =       rgb <0.8, 0.5, 0.0> ; 
#declare C_golden_yellow =      rgb <0.80, 0.55, 0.05> ; 
#declare C_goldenrod =          rgb <0.60, 0.3, 0.05> ; 
#declare C_orange =             rgb <1.0, 0.25, 0.0> ; 
#declare C_light_orange =       rgb <1.0, 0.4, 0.1> ; 
#declare C_dark_orange =        rgb <0.4, 0.1, 0.0> ;
#declare C_peach =              rgb <1.0, 0.6, 0.35> ; 
#declare C_burnt_orange =       rgb <0.3, 0.06, 0.01> ; 
#declare C_rust =               rgb <0.3, 0.1, 0.05> ; 
#declare C_rust_red =           rgb <0.4, 0.1, 0.05> ; 
#declare C_rust_gray =          rgb <0.2, 0.2, 0.21> ; 
#declare C_rust_gray_dark =     rgb <0.1, 0.1, 0.105> ; 
#declare C_brown =              rgb <0.25, 0.06, 0.025> ; 
#declare C_light_brown =        rgb <0.44, 0.18, 0.08> ; 
#declare C_dark_brown =         rgb <0.1, 0.035, 0.02> ; 
#declare C_sepia_brown =        rgb <0.44, 0.20, 0.1> ; 
#declare C_sienna_brown =       rgb <0.44, 0.2, 0.1> ; 
#declare C_chocolate_brown =    rgb <0.19, 0.05, 0.02> ; 
#declare C_oak_brown =          rgb <0.31, 0.1, 0.04> ; 
#declare C_mohogany_brown =     rgb <0.13, 0.025, 0.01> ; 
#declare C_mohogany_gray =      rgb <0.13, 0.031, 0.015> ; 
#declare C_almond_brown =       rgb <0.46, 0.25, 0.09> ; 
#declare C_hazel_brown =        rgb <0.40, 0.17, 0.08> ; 
#declare C_golden_brown =       rgb <0.40, 0.2, 0.05> ; 
#declare C_coffee =             rgb <0.11, 0.06, 0.04> ; 
#declare C_khaki =              rgb <0.25, 0.19, 0.10> ; 
#declare C_copper =             rgb <0.55, 0.13, 0.05> ; 
#declare C_light_copper =       rgb <0.8, 0.25, 0.1> ;
#declare C_dark_copper =        rgb <0.35, 0.06, 0.026> ;  
#declare C_silver =             rgb <0.8, 0.81, 0.82> ; 
#declare C_brass =              rgb <0.7, 0.5, 0.1> ; 
#declare C_bronze =             rgb <0.46, 0.25, 0.09> ; 
#declare C_antique_bronze =     rgb <0.33, 0.22, 0.1> ;
#declare C_dark_bronze =        rgb <0.23, 0.17, 0.1> ; 
#declare C_galvanize1 =         rgb <0.4, 0.4, 0.41> ; 
#declare C_galvanize2 =         rgb <0.8, 0.8, 0.81> ; 
#declare C_gold =               rgb <0.82, 0.6, 0.2> ; 
#declare C_bright_gold =        rgb <0.95, 0.7, 0.15> ; 
#declare C_dark_gold =          rgb <0.42, 0.22, 0.05> ; 
#declare C_saffron_gold =       rgb <0.8, 0.34, 0.0> ; 
#declare C_rose_gold =          rgb <0.7, 0.5, 0.35> ; 
#declare C_gray_dark =          rgb <0.04, 0.045, 0.045> ; 
#declare C_gray_black =         rgb <0.02, 0.02, 0.025> ;
#declare C_gray5 =              rgb <0.05, 0.05, 0.05> ; 
#declare C_gray10 =             rgb <0.1, 0.1, 0.1> ; 
#declare C_gray20 =             rgb <0.2, 0.2, 0.2> ; 
#declare C_gray30 =             rgb <0.3, 0.3, 0.3> ; 
#declare C_gray40 =             rgb <0.4, 0.4, 0.4> ; 
#declare C_gray50 =             rgb <0.5, 0.5, 0.5> ; 
#declare C_gray60 =             rgb <0.6, 0.6, 0.6> ; 
#declare C_gray70 =             rgb <0.7, 0.7, 0.7> ; 
#declare C_gray80 =             rgb <0.8, 0.8, 0.8> ; 
#declare C_gray90 =             rgb <0.9, 0.9, 0.9> ; 
#declare C_cool_gray =          rgb <0.5, 0.54, 0.56> ; 
#declare C_warm_gray =          rgb <0.54, 0.53, 0.5> ; 
#declare C_yellow_gray =        rgb <0.75, 0.8, 0.65> ; 
#declare C_brown_gray =         rgb <0.225, 0.195, 0.17> ; 
#declare C_putty =              rgb <0.40, 0.35, 0.27> ; 
#declare C_tan =                rgb <0.78, 0.55, 0.35> ; 
#declare C_light_tan =          rgb <1.0, 0.8, 0.6> ; 
#declare C_dark_tan =           rgb <0.5, 0.33, 0.20> ; 
#declare C_beige =              rgb <.9, 0.75, 0.6> ; 
#declare C_sand =               rgb <1, 0.8, 0.5> ; 
#declare C_off_white =          rgb <0.99, 0.92, 0.78> ; 
#declare C_pearl =              rgb <0.88, 0.82, 0.76> ; 
#declare C_ivory =              rgb <0.88, 0.75, 0.6> ; 
#declare C_cream =              rgb <0.97, 0.75, 0.5> ; 
#declare C_dark_cream =         rgb <0.68, 0.45, 0.27> ; 
#declare C_champagne =          rgb <0.84, 0.66, 0.55> ; 
#declare C_wheat =              rgb <0.84, 0.60, 0.37> ; 
#declare C_rust_red_film =      rgbt <0.5, 0.3, 0.25,.95> ;
#declare C_dark_red_film =      rgbt <0.2, 0.1, 0.05,.63> ;
#declare C_rust_gray_film =     rgbt <0.5, 0.5, 0.5,.85> ; 
#declare C_rust_tan_film =      rgbt <0.75, 0.6, 0.5,.85> ;
#declare C_warm_gray_film =     rgbt <0.24, 0.21, 0.2,.85> ;
#declare C_ground_gray_cool =   rgb <0.17, 0.20, 0.15> ;      
#declare C_ground_gray_dark =   rgb <0.10, 0.12, 0.12> ;
#declare C_ground_gray_brown =  rgb <0.4, 0.25, 0.15> ;
#declare C_ground_gray_green =  rgb <0.3, 0.39, 0.29> ;
#declare C_ground_gray_sage =   rgb <0.4, 0.4, 0.19> ;
#declare C_ground_gray_gold =   rgb <0.8, 0.75, 0.2> ;  
#declare C_ground_gray_cream =  rgb <0.8, 0.75, 0.6> ;


// -----------------------------------------------------------------------------------------
//                      F I N I S H
//------------------------------------------------------------------------------------------ 
#declare F_matt =
finish {
    ambient .2
    diffuse 1   
    phong 0
    phong_size 0  
    emission 0
}

#declare F_dull =
finish {
    ambient .2
    diffuse 1   
    phong .1
    phong_size 10  
} 

#declare F_rubber =
finish {
    ambient .2
    diffuse 1   
    phong .13
    phong_size 5  
}

#declare N_flat = normal {
    pigment_pattern{ 
        gradient y 
        turbulence 0.0
        colour_map {
            [0.00, rgb 1]
            [1.00, rgb 1]
        } 
     }
}

#declare F_satin =
finish {
    ambient .2
    diffuse 1   
    phong .35
    phong_size 20  
}

#declare F_gloss =
finish {
    ambient .2
    diffuse 1   
    phong 1
    phong_size 100  
    reflection {.01, .72 fresnel}
}


#declare F_polish =
finish {
    ambient .2
    diffuse 1   
    phong 1
    phong_size 100  
    reflection {.01, .03 }
    roughness 1/5
    //reflection .05 
}

#declare F_polish_2 =
finish {
    ambient .2
    diffuse 1   
    phong 1
    phong_size 100  
    roughness 1/5
    reflection .15 
}

#declare F_metal_polished  =
finish {
    reflection {.01, .99 fresnel on }
    conserve_energy 
    brilliance 5
    ambient .1
    diffuse .8 
    phong 1    
    phong_size 40
    metallic
    specular 1
    roughness 1/20
    reflection .35   
}

#declare F_glass =
finish {
     reflection {.2, 1 fresnel on } 
     conserve_energy
     phong 5     
     phong_size 100   
     metallic 0
     specular .25 
     roughness 1/10  
     diffuse 1
}    


// -----------------------------------------------------------------------------------------
//                    I N T E R I O R S
//------------------------------------------------------------------------------------------ 
 #declare I_clear =
  interior {
    ior 1.33  
    fade_colour <1,1,1>
    fade_distance 1.0
    fade_power 2
  }

#declare I_dark =
  interior {
    ior 1.33  
    fade_colour <.5,.5,.5>
    fade_distance .5
    fade_power 2
  }

#declare I_gold =
interior {
    ior 1.33
    fade_colour C_gold
    fade_distance .25
    fade_power 2
    } 

#declare I_red =
interior {
    ior 1.33
    fade_colour C_red
    fade_distance .25
    fade_power 2
    }  

// -----------------------------------------------------------------------------------------
//                    M A T E R I A L S
//------------------------------------------------------------------------------------------ 

//--- M_black_gloss
#declare T_black_gloss = texture{ pigment {C_black} finish {F_gloss} normal {N_flat}};
#declare M_black_gloss = material{ texture{T_black_gloss}};

//--- M_gray10_satin
#declare T_gray10_satin = texture{ pigment {C_gray10} finish {F_satin} normal {N_flat}};
#declare M_gray10_satin = material{ texture{T_gray10_satin}};

//--- M_gray20_satin
#declare T_gray20_satin = texture{ pigment {C_gray20} finish {F_satin} normal {N_flat}};
#declare M_gray20_satin = material{ texture{T_gray20_satin}};

//--- T_gray20_gloss
#declare T_gray20_gloss = texture{ pigment {C_gray20} finish {F_gloss} normal {N_flat}};
#declare M_gray20_gloss = material{ texture{T_gray20_gloss}};

//--- M_gray50_satin
#declare T_gray50_satin = texture{ pigment {C_gray50} finish {F_satin} normal {N_flat}};
#declare M_gray50_satin = material{ texture{T_gray50_satin}};

//--- M_gray70_gloss
#declare T_gray70_gloss = texture{ pigment {C_gray70} finish {F_gloss} normal {N_flat}};
#declare M_gray70_gloss = material{ texture{T_gray70_gloss}};

//--- M_white_matt
#declare T_white_matt = texture{ pigment {C_white} finish {F_matt} normal {N_flat}};
#declare M_white_matt = material{ texture{T_white_matt}};

//--- M_pearl_satin
#declare C_pearl =              rgb <0.88, 0.82, 0.76> ; 
#declare T_pearl_satin = texture{ pigment {C_pearl} finish {F_satin} normal {N_flat}};
#declare M_pearl_satin = material{ texture{T_pearl_satin}};

//--- M_red_gloss
#declare T_red_gloss = texture{ pigment {C_red} finish {F_gloss} normal {N_flat}};
#declare M_red_gloss = material{ texture{T_red_gloss}};

//--- M_blue_gloss
#declare T_blue_gloss = texture{ pigment {C_blue} finish {F_gloss} normal {N_flat}};
#declare M_blue_gloss = material{ texture{T_blue_gloss}};

//--- chrome
#declare T_chrome = texture{ pigment{C_silver} finish {F_metal_polished}}; 
#declare M_chrome = material{texture{T_chrome}} ;



//--- glass
#declare M_glass = 
material { 
     texture {
        pigment { C_clear  turbulence 0 scale 1 }
        finish  { F_glass }
        normal  { N_flat scale 1 bump_size 0 }
        }
        interior{I_clear}
}

//--- glass gold
#declare M_glass_gold = 
material { 
     texture {
        pigment { C_clear  turbulence 0 scale 1 }
        finish  { F_glass }
        normal  { N_flat scale 1 bump_size 0 }
        }
        interior{I_gold}
}

//--- glass gold
#declare M_glass_red = 
material { 
     texture {
        pigment { C_clear  turbulence 0 scale 1 }
        finish  { F_glass }
        normal  { N_flat scale 1 bump_size 0 }
        }
        interior{I_red}
}


#declare M_glass_dark = 
material { 
     texture {
        pigment { C_clear  turbulence 0 scale 1 }
        finish  { F_glass }
        normal  { N_flat scale 1 bump_size 0 }
        }
        interior{I_clear}
}


// -----------------------------------------------------------------------------------------
//                    I M A G E    M A P P E D    T E X T U R E S
//------------------------------------------------------------------------------------------ 
                                    

// --- S C R E E N   G R I D
#declare imgDiffuse = "maps/screen_50.png" 
#declare M_gray_screen =
material {
    texture {
       pigment { 
            image_map {
                png imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
     finish { 
        F_gloss
     }
    }
    scale <1,1,1> 
    rotate x*90
    translate <0,0,0>  
}


// --- W O O D   A
#declare imgDiffuse = "maps/wood_A.jpg" 
#declare M_wood_A =
material {
    texture {
       pigment { 
            image_map {
                jpeg imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
     finish { 
        F_gloss
     }
    }
    scale <1,1,1> 
    rotate x*90
    translate <0,0,0>  
}

// --- W O O D  B
#declare imgDiffuse = "maps/wood_B.jpg" 
#declare M_wood_B =
material {
    texture {
       pigment { 
            image_map {
                jpeg imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
     finish { 
        F_polish
     }
    }
    scale <1,1,1> 
    rotate x*90
    translate <0,0,0>  
}


// --- C A R P E T
#declare imgDiffuse =   "maps/carpet_A.jpg" 
#declare M_carpet_A =
material {
    texture {
       pigment { 
            image_map {
                jpeg imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
     finish { 
        F_matt
     }
    }
    scale <1,1,1> 
    rotate x*90
    translate <0,0,0>  
}                                                                                           



// --- C O N C R E T E
#declare imgDiffuse =   "maps/concrete_A.jpg" 
#declare M_concrete_A =
material {
    texture {
       pigment { 
            image_map {
                jpeg imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
     finish { 
        F_gloss
     }
    }
    scale <1,1,1> 
    rotate x*90
    translate <0,0,0>  
}

// --- C O N C R E T E
#declare imgDiffuse =   "maps/concrete_C.jpg" 
#declare imgBump =      "maps/concrete_C.jpg" 
#declare M_concrete_C =
material {
    texture {
       pigment { 
            image_map {
                jpeg imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
     finish { 
        F_polish_2
     }
    }
    scale <1,1,1> 
    rotate x*90
    translate <0,0,0>  
}

