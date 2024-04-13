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
#declare C_pearl =              rgb <0.94, 0.70, 0.6> ; 
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
//                      C O L O R   M A P S
//------------------------------------------------------------------------------------------ 
#declare CM_galvanize = 
color_map {
    [0.0        C_galvanize1]
    [0.1        C_galvanize2 * 1.5]
    [0.3        C_galvanize2 * .9] 
    [0.55       C_galvanize1 * 1.5]
    [0.85       C_galvanize1 * 1.5]
    [0.9        C_galvanize2 * 2]
    [1.000      C_galvanize1]
}

#declare C_map_steel = 
color_map {
    [0.000 rgb <0.535, 0.525, 0.535>]
    [0.171 rgb <0.549, 0.549, 0.520>]
    [0.274 rgb <0.557, 0.551, 0.562>]
    [0.393 rgb <0.625, 0.625, 0.625>]
    [0.564 rgb <0.582, 0.540, 0.520>]
    [0.701 rgb <0.552, 0.532, 0.578>]
    [1.000 rgb <0.535, 0.525, 0.535>]
}
        
        
#declare C_map_gold = 
color_map {
    [0.000 rgb <0.70, 0.60, 0.45>]
    [0.171 rgb <0.65, 0.55, 0.35>]
    [0.274 rgb <0.58, 0.35, 0.25>]
    [0.393 rgb <0.65, 0.65, 0.35>]
    [0.564 rgb <0.55, 0.45, 0.25>]
    [0.701 rgb <0.65, 0.55, 0.35>]
    [1.000 rgb <0.70, 0.60, 0.45>]
}

#declare CM_sliver_spot = 
color_map {
    [0.0        C_gray80 * 1.2]
    [0.1        C_gray80 * 1.2]
    [0.3        C_gray80 * .9] 
    [0.55       C_gray80 * 1.0]
    [0.85       C_gray80 * 1.2]
    [0.9        C_gray80 * 1.0]
    [1.000      C_gray80 * 1.2]
}

#declare CM_gray_spot = 
color_map {
    [0.0        C_gray50 * 1.4]
    [0.1        C_gray50 * 1.3]
    [0.3        C_gray50 * .9] 
    [0.55       C_gray50 * 1.0]
    [0.85       C_rust_gray_dark * 1.4]
    [0.9        C_rust_gray_dark * 1.5]
    [1.000      C_gray50 * 1.3]
}

#declare CM_rust_gray = 
color_map {
    [0.0        C_gray50 * 1.2]
    [0.1        C_gray50 * 1.5]
    [0.3        C_gray50 * 1.5] 
    [0.55       C_gray50 * 1.2]
    [0.85       C_gray50 * 1.5]
    [0.9        C_gray50 * 1.5]
    [1.000      C_gray50 * 1.2]
}

#declare CM_old_copper =
color_map {
    [ 0.0  C_copper *.83]  
    [ 0.3  C_copper *.83]
    [ 0.5  C_light_copper *.63]
    [ 0.8  C_copper *.63] 
    [ 1    C_copper *.83]
    }


#declare CM_old_brass =
color_map {
    [ 0.0  C_brass *.83]  
    [ 0.3  C_brass *.93]
    [ 0.5  C_brass *.63]
    [ 0.8  C_brass *.63] 
    [ 1    C_brass *.83]
    }


#declare CM_rust_overlay = 
color_map {
    [0.0        C_clear ]
    [0.2        C_rust_red_film ]
    [0.25       C_rust_red_film * 1] 
    [0.35       C_clear ]
    [0.45       C_rust_red_film * .95]
    [0.9        C_rust_gray_film]
    [1.000      C_clear]
}

#declare CM_scuff_overlay = 
color_map {
    [0.0        C_clear ]
    [0.2        C_rust_gray_film *1.1]
    [0.25       C_rust_gray_film *1.1] 
    [0.35       C_warm_gray_film *.8]
    [0.45       C_rust_gray_film *1.1]
    [0.9        C_clear]
    [1.000      C_clear]
}

#declare CM_dirt_overlay = 
color_map {
    [0.0        C_rust_red_film ]
    [0.2        C_warm_gray_film ]
    [0.25       C_warm_gray_film * 1.2 ] 
    [0.35       C_clear ]
    [0.45       C_clear ]
    [0.9        C_rust_gray_film *.7]
    [1.000      C_rust_gray_film ]
}


#declare CM_chipped_blue = 
color_map {
    [0.0        C_cornflower_blue * 1.2]
    [0.2        C_cornflower_blue * 1.2]
    [0.33       C_cornflower_blue * 1.2] 
    [0.35       C_clear * 1.0]
    [0.45       C_clear * 1.0]
    [0.48       C_cornflower_blue * 1.4]
    [0.50       C_cornflower_blue * .97]
    [0.9        C_cornflower_blue * .97]
    [1.000      C_cornflower_blue * 1.2]
}

#declare CM_chipped_white = 
color_map {
    [0.0        C_white * .9]
    [0.2        C_white * .9]
    [0.33       C_white * 1] 
    [0.35       C_clear * 1.0]
    [0.45       C_clear * 1.0]
    [0.48       C_white * .8]
    [0.50       C_white * .97]
    [0.9        C_white * .97]
    [1.000      C_white * .9]
}


#declare CM_red_blue = 
 color_map { 
     [0.0 color C_red] 
     [1.0 color C_blue] 
  }

#declare CM_blue_teal = 
 color_map { 
     [0.0  color C_powder_blue ] 
     [0.1  color C_horizon_blue ] 
     [0.5  color C_horizon_blue]  
     [1    color C_teal]  
  }

#declare CM_gray_blue =
color_map {
    [ 0.0     C_gray40 ]  
    [ 0.1     C_gray70 ] 
    [ 0.3     C_powder_blue ]
    [ 0.6     C_light_blue ]
    [ 1.0     C_cornflower_blue ]
    }

    
#declare CM_teal_purple = 
 color_map {  
     [0.0 color C_teal]
     [1.0 color C_purple]    
  }


#declare CM_ground_sky =
color_map {
    [ 0.0     C_antique_bronze ]  
    [ 0.1     C_antique_bronze ] 
    [ 0.3     C_tan ] 
    [ 0.5     C_powder_blue * 1.5]
    [ 0.7     C_light_blue ]
    [ 0.9     C_cornflower_blue ]
    [ 1.0     C_cornflower_blue ]
    }

#declare CM_blue_purple_milk = 
color_map {
    [0.0        C_milk *        0.9]
    [0.2        C_purple75 *    1.1]
    [0.33       C_milk *        1.0] 
    [0.35       C_milk *        1.0]
    [0.45       C_blue75 *      1.2]
    [0.48       C_milk *        0.8]
    [0.50       C_blue75 *      1.2]
    [0.9        C_purple75 *    1.1]
    [1.000      C_milk *        0.9]
}

#declare CM_blue_purple_milk_film = 
color_map {
    [0.0        C_clear *            0.9]
    [0.01        C_clear                ]
    [0.45       C_purple25 *          1.2]
    [0.70       C_clear *          1]
    [0.8        C_clear *           1.1]
    [1.000      C_milk *            0.9]
}


#declare CM_shroom_A =
color_map {
	[0.0 color  C_rose_gold*.7]
	[0.05 color  C_gold]    
	[.4 color   C_pearl]  
	[.8 color   C_dark_tan]
	[.95 color   C_gold]
	[1 color    C_rose_gold]
}     
        
        
#declare CM_shroom_B =
color_map {
	[0.0 color C_horizon_blue]  
	[0.2 color C_gold]  
	[.7 color C_gold]  
	[.9 color C_horizon_blue]
	[1.0 color C_horizon_blue]
} 

#declare CM_green_apple_bands =
color_map {
    [0.0 C_green_apple*.75]
    [0.05 C_green_apple]
    [0.43 C_green_apple]
    [.47 C_green_apple*.75] 
    [.50 C_pea_green*.85]
    [.53  C_pea_green]
    [.95 C_pea_green]
    [1.0 C_green_apple*.75]
}


#declare CM_green_apple =
color_map {
    [0.0 C_green_apple  *1]
    [0.05 C_green_apple *1.1]
    [0.43 C_green_apple *1]
    [.50 C_green_apple  *.85]
    [.95 C_green_apple  *.85]
    [1.0 C_green_apple  *.85]
}

#declare CM_green_apple_spots =
color_map {
    [0.0 C_clear  *.9]
    [0.05 C_clear *.9]
    [0.43 C_clear *.9]
    [.50 C_green_apple  *.70]
    [.95 C_green_apple  *.70]
    [1.0 C_green_apple  *.70]
}

#declare CM_yellow_apple =
color_map {
    [0.0 C_light_yellow  *1]
    [0.05 C_light_yellow *1.1]
    [0.43 C_light_yellow *1]
    [.50 C_light_yellow  *.85]
    [.95 C_light_yellow  *.85]
    [1.0 C_light_yellow  *.85]
}


#declare CM_ground_green =  
color_map {
    [0.00       C_ground_gray_green]
    [0.2        C_ground_gray_brown]
    [0.3        C_ground_gray_dark]
    [0.6        C_ground_gray_sage]
    [0.7        C_ground_gray_green]
    [1.01       C_ground_gray_dark]
}
   
#declare CM_ground_mud =  
color_map {
    [0.00       C_tan]
    [0.2        C_tan]
    [0.4        C_ground_gray_brown]
    [0.5        C_ground_gray_dark]
    [0.6        C_ground_gray_brown]
    [0.8        C_tan]
    [1.01       C_tan]
}


#declare CM_ground_sand =  
color_map {
    [0.00       C_sand]
    [0.2        C_sand]
    [0.4        C_sand ]
    [0.5        C_tan *1.1]
    [0.6        C_sand ]
    [0.8        C_sand]
    [1.01       C_sand]
}

#declare CM_ground_mud_overlay =  
color_map {
    [0.00       C_clear]
    [0.2        C_clear]
    [0.4        C_ground_gray_brown transmit .3]
    [0.5        C_ground_gray_dark  transmit .1]
    [0.6        C_ground_gray_brown transmit .3]
    [0.8        C_clear]
    [1.01       C_clear]
}
     

// -----------------------------------------------------------------------------------------
//                      N O R M A L S
//------------------------------------------------------------------------------------------ 

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

#declare CM_rust_normal = 
color_map {
    [0.0        C_white ]
    [0.2        C_gray50 ]
    [0.25       C_black ] 
    [0.35       C_gray50 ]
    [0.45       C_gray80 ]
    [0.9        C_white ]
    [1.000      C_white ]
}

#declare CM_noise_normal = 
color_map {
    [0.0        C_white ]
    [0.5        C_black ]
    [1.0        C_white ] 
}


#declare CM_chipped_normal = 
color_map {
    [0.0        C_white ]
    [0.2        C_white ]
    [0.33       C_white ] 
    [0.35       C_black ]
    [0.45       C_black ]
    [0.48       C_white ]
    [0.9        C_white ]
    [1.000      C_white ]
}


    
#declare N_bozo =     normal { bozo       bump_size 1     scale 1     warp { turbulence 1  }}
#declare N_granite =  normal { granite    bump_size 1     scale 1     warp { turbulence 1  }} 
#declare N_leopard =  normal { leopard    bump_size 1     scale 1     warp { turbulence 1  }} 
#declare N_wrinkles = normal { wrinkles   bump_size 1     scale 1     warp { turbulence 1  }} 
#declare N_crackle =  normal { crackle    bump_size 1     scale 1     warp { turbulence 1  }}  
#declare N_agate =    normal { agate      bump_size 1     scale 1     warp { turbulence 1  }} 

// -----------------------------------------------------------------------------------------
//                      S L O P E 
//------------------------------------------------------------------------------------------ 
#declare SM_v_ramp =
slope_map
{ [0.0  <0, 0>]
  [0.2  <1, 1>]
  [0.2  <1, 0>]
  [0.8  <1, 0>]
  [0.8  <1,-1>]
  [1.0  <0, 0>]
}  

#declare SM_bevel_ramp =
slope_map
{ [0 <0, 0>]
  [.2 <1, 1>]
  [.2 <1, 0>]
  [.8 <1, 0>]
  [.8 <1, -1>]
  [1 <0, 0>]
}   
    
//--- from help file   
#declare N_bevel_overlay =
normal { 
    gradient x 3        // Double the strength because of the averaging
    slope_map
        { [0 <0, 1>]    // 0 height, strong slope up
        [.05 <1, 0>]    // maximum height, horizontal
        [.95 <1, 0>]    // maximum height, horizontal
        [1 <0, -1>]     // 0 height, strong slope down
    }
}

#declare N_bevel_tile =
normal { 
    average normal_map
    { [1 N_bevel_overlay]
      [1 N_bevel_overlay rotate z*90]  
      [1 N_bevel_overlay rotate y*90]
    }
}
  
#declare N_bevel_grid =
normal { 
    average normal_map
    { 
      [1 N_bevel_overlay rotate x*90]  
      [1 N_bevel_overlay rotate x*90 rotate z*90]
    }
}


#declare N_tube =
normal {
    gradient x 4 
    slope_map
    { [0 <0, 1>]
      [1 <1, 0>]
    }
}

#declare N_pillow =
normal { 
    average normal_map
    { 
      [1 N_tube rotate x*90]  
      [1 N_tube rotate x*90 rotate z*90]
    }
}



#declare _turb =   0.01;
#declare _scale =  <1,1,1>;
#declare _bump = .1;
#declare N_bevel = 
normal {
    pigment_pattern{ 
        gradient y 
        scale _scale
        color_map {
            [0.0 C_white]
            [0.4 C_white]
            [.47 C_black] 
            [.53 C_black]
            [.6  C_white]
            [1.0 C_white]
        }
    }    
}

#declare _turb =   0.01;
#declare _scale =  <1,1,1>;
#declare _bump = .1;
#declare P_bevel_overlay = 
pigment { 
    gradient y 
    scale _scale
    color_map {
        [0.0  C_clear]
        [0.4  C_clear]
        [.47  C_clear]
        [.53  C_black]
        [.5   C_clear]
        [.6   C_clear]
        [1.0  C_clear]
    }
}    


#declare P_bevel_overlay_dark = 
pigment { 
    gradient y 
    scale _scale
    color_map {
        [0.0  C_clear]
        [0.4  C_clear]
        [.47  C_clear]
        [.53  C_tint20]
        [.5   C_clear]
        [.6   C_clear]
        [1.0  C_clear]
    }
}


#declare N_bevel_slope = 
normal {
    gradient y 
    slope_map {
    [0   <0, 1>]   
    [0.5 <1, 1>]   
    [0.5 <1,-1>]   
    [1   <0,-1>]   
    }
       
} 





    
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

#declare F_metal  =
finish {
    reflection {0, 1 fresnel on }
    conserve_energy 
    brilliance 5
    ambient 0
    diffuse .5 
    phong 5    
    phong_size 40
    metallic
    specular .4
    roughness 1/20
    reflection .5   
}

#declare F_dull_glow =
    finish {
    ambient 0
    diffuse 1
    emission .6
    phong 0
    roughness 0.5
    }
    
#declare F_glow =
    finish {
    ambient 1
    diffuse 1
    emission 1.5
    phong 0
    roughness 1
    }

#declare F_galvanize  =
finish {  
    conserve_energy 
    brilliance 5
    ambient .2
    brilliance 5
    diffuse 1 
    phong .9    
    phong_size 40
    specular .75 
    roughness .08
    reflection .05
}

#declare F_steel  =
finish {  
    reflection {.001, .2 fresnel on } 
    conserve_energy 
    brilliance 5
    ambient .2
    brilliance 5
    diffuse 1 
    phong 1    
    phong_size 40
    metallic
    specular 3 
    roughness .01
    reflection .02 
}

#declare F_metal_dull  =
finish {
     reflection {.001, .3 fresnel on } 
     conserve_energy 
     brilliance 5   
     ambient .2
     diffuse 1
     phong .3    
     phong_size 20   
     metallic 1
     specular 2 
     roughness .005  
     reflection .005  
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


#declare F_soft_plastic =
finish {
    ambient .3
    diffuse 1   
    phong .3
    phong_size 15 
    reflection {.001, .1 fresnel} 
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

#declare F_milky =
finish {
    reflection {.04, .2 fresnel on } 
    conserve_energy
    phong .5     
    phong_size 30   
    metallic 0
    specular .2 
    roughness 1/10 
}        

#declare F_dirt  =
finish {
     ambient .2
     diffuse 1
     phong .2    
     phong_size 20   
     roughness .13  
     //reflection .005  
}


// -----------------------------------------------------------------------------------------
//                     I N T E R I O R S 
//------------------------------------------------------------------------------------------    


#declare I_white =
  interior {
    ior 1.33  
    fade_colour <1,1,1>
    fade_distance .25
    fade_power .5
  }

 #declare I_clear =
  interior {
    ior 1.33  
    fade_colour <1,1,1>
    fade_distance 1.0
    fade_power 2
  }

 #declare I_crystal =
  interior {
    ior 2  
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
  
#declare I_green =
interior {
    ior 1.33
    fade_colour <0,.7,.2>
    fade_distance .5
    fade_power 2
    }  
        
#declare I_green_light =
interior {
    ior 1.33
    fade_colour <.75,1,.9>
    fade_distance .5
    fade_power 2
    }        

#declare I_blue =
interior {
    ior 1.33
    fade_colour <0,.6,1>
    fade_distance 1
    fade_power 2
    }

#declare I_blue_dark =
interior {
    ior 1.33
    fade_colour C_blue
    fade_distance .05
    fade_power 3
    }
        
#declare I_red =
interior {
    ior 1.33
    fade_colour C_red
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
        
        
#declare I_solid =
interior {
    ior 1
    fade_colour <0,0,0>
    fade_distance 0
    fade_power 0
    }      

#declare I_glass =  interior { ior 1.33 }


// -----------------------------------------------------------------------------------------
//                      T E X T U R E S
//------------------------------------------------------------------------------------------ 

#declare T_clear_matt = texture{ pigment {C_clear} finish {F_matt} normal {N_flat}};
#declare T_clear_dull = texture{ pigment {C_clear} finish {F_dull} normal {N_flat}};
#declare T_clear_satin = texture{ pigment {C_clear} finish {F_satin} normal {N_flat}};
#declare T_clear_gloss = texture{ pigment {C_clear} finish {F_gloss} normal {N_flat}};
#declare T_clear_metal = texture{ pigment {C_clear} finish {F_metal} normal {N_flat}};

#declare T_white_matt = texture{ pigment {C_white} finish {F_matt} normal {N_flat}};
#declare T_white_dull = texture{ pigment {C_white} finish {F_dull} normal {N_flat}};
#declare T_white_satin = texture{ pigment {C_white} finish {F_satin} normal {N_flat}};
#declare T_white_gloss = texture{ pigment {C_white} finish {F_gloss} normal {N_flat}};
#declare T_white_metal = texture{ pigment {C_white} finish {F_metal} normal {N_flat}};

#declare T_black_matt = texture{ pigment {C_black} finish {F_matt} normal {N_flat}};
#declare T_black_dull = texture{ pigment {C_black} finish {F_dull} normal {N_flat}};
#declare T_black_satin = texture{ pigment {C_black} finish {F_satin} normal {N_flat}};
#declare T_black_gloss = texture{ pigment {C_black} finish {F_gloss} normal {N_flat}};
#declare T_black_metal = texture{ pigment {C_black} finish {F_metal} normal {N_flat}};

#declare T_red_matt = texture{ pigment {C_red} finish {F_matt} normal {N_flat}};
#declare T_red_dull = texture{ pigment {C_red} finish {F_dull} normal {N_flat}};
#declare T_red_satin = texture{ pigment {C_red} finish {F_satin} normal {N_flat}};
#declare T_red_gloss = texture{ pigment {C_red} finish {F_gloss} normal {N_flat}};
#declare T_red_metal = texture{ pigment {C_red} finish {F_metal} normal {N_flat}};

#declare T_light_red_matt = texture{ pigment {C_light_red} finish {F_matt} normal {N_flat}};
#declare T_light_red_dull = texture{ pigment {C_light_red} finish {F_dull} normal {N_flat}};
#declare T_light_red_satin = texture{ pigment {C_light_red} finish {F_satin} normal {N_flat}};
#declare T_light_red_gloss = texture{ pigment {C_light_red} finish {F_gloss} normal {N_flat}};
#declare T_light_red_metal = texture{ pigment {C_light_red} finish {F_metal} normal {N_flat}};

#declare T_dark_red_matt = texture{ pigment {C_dark_red} finish {F_matt} normal {N_flat}};
#declare T_dark_red_dull = texture{ pigment {C_dark_red} finish {F_dull} normal {N_flat}};
#declare T_dark_red_satin = texture{ pigment {C_dark_red} finish {F_satin} normal {N_flat}};
#declare T_dark_red_gloss = texture{ pigment {C_dark_red} finish {F_gloss} normal {N_flat}};
#declare T_dark_red_metal = texture{ pigment {C_dark_red} finish {F_metal} normal {N_flat}};

#declare T_scarlet_red_matt = texture{ pigment {C_scarlet_red} finish {F_matt} normal {N_flat}};
#declare T_scarlet_red_dull = texture{ pigment {C_scarlet_red} finish {F_dull} normal {N_flat}};
#declare T_scarlet_red_satin = texture{ pigment {C_scarlet_red} finish {F_satin} normal {N_flat}};
#declare T_scarlet_red_gloss = texture{ pigment {C_scarlet_red} finish {F_gloss} normal {N_flat}};
#declare T_scarlet_red_metal = texture{ pigment {C_scarlet_red} finish {F_metal} normal {N_flat}};

#declare T_vermilion_matt = texture{ pigment {C_vermilion} finish {F_matt} normal {N_flat}};
#declare T_vermilion_dull = texture{ pigment {C_vermilion} finish {F_dull} normal {N_flat}};
#declare T_vermilion_satin = texture{ pigment {C_vermilion} finish {F_satin} normal {N_flat}};
#declare T_vermilion_gloss = texture{ pigment {C_vermilion} finish {F_gloss} normal {N_flat}};
#declare T_vermilion_metal = texture{ pigment {C_vermilion} finish {F_metal} normal {N_flat}};

#declare T_blood_red_matt = texture{ pigment {C_blood_red} finish {F_matt} normal {N_flat}};
#declare T_blood_red_dull = texture{ pigment {C_blood_red} finish {F_dull} normal {N_flat}};
#declare T_blood_red_satin = texture{ pigment {C_blood_red} finish {F_satin} normal {N_flat}};
#declare T_blood_red_gloss = texture{ pigment {C_blood_red} finish {F_gloss} normal {N_flat}};
#declare T_blood_red_metal = texture{ pigment {C_blood_red} finish {F_metal} normal {N_flat}};

#declare T_crimson_red_matt = texture{ pigment {C_crimson_red} finish {F_matt} normal {N_flat}};
#declare T_crimson_red_dull = texture{ pigment {C_crimson_red} finish {F_dull} normal {N_flat}};
#declare T_crimson_red_satin = texture{ pigment {C_crimson_red} finish {F_satin} normal {N_flat}};
#declare T_crimson_red_gloss = texture{ pigment {C_crimson_red} finish {F_gloss} normal {N_flat}};
#declare T_crimson_red_metal = texture{ pigment {C_crimson_red} finish {F_metal} normal {N_flat}};

#declare T_midnight_matt = texture{ pigment {C_midnight} finish {F_matt} normal {N_flat}};
#declare T_midnight_dull = texture{ pigment {C_midnight} finish {F_dull} normal {N_flat}};
#declare T_midnight_satin = texture{ pigment {C_midnight} finish {F_satin} normal {N_flat}};
#declare T_midnight_gloss = texture{ pigment {C_midnight} finish {F_gloss} normal {N_flat}};
#declare T_midnight_metal = texture{ pigment {C_midnight} finish {F_metal} normal {N_flat}};

#declare T_salmon_matt = texture{ pigment {C_salmon} finish {F_matt} normal {N_flat}};
#declare T_salmon_dull = texture{ pigment {C_salmon} finish {F_dull} normal {N_flat}};
#declare T_salmon_satin = texture{ pigment {C_salmon} finish {F_satin} normal {N_flat}};
#declare T_salmon_gloss = texture{ pigment {C_salmon} finish {F_gloss} normal {N_flat}};
#declare T_salmon_metal = texture{ pigment {C_salmon} finish {F_metal} normal {N_flat}};

#declare T_rose_matt = texture{ pigment {C_rose} finish {F_matt} normal {N_flat}};
#declare T_rose_dull = texture{ pigment {C_rose} finish {F_dull} normal {N_flat}};
#declare T_rose_satin = texture{ pigment {C_rose} finish {F_satin} normal {N_flat}};
#declare T_rose_gloss = texture{ pigment {C_rose} finish {F_gloss} normal {N_flat}};
#declare T_rose_metal = texture{ pigment {C_rose} finish {F_metal} normal {N_flat}};

#declare T_dusty_rose_matt = texture{ pigment {C_dusty_rose} finish {F_matt} normal {N_flat}};
#declare T_dusty_rose_dull = texture{ pigment {C_dusty_rose} finish {F_dull} normal {N_flat}};
#declare T_dusty_rose_satin = texture{ pigment {C_dusty_rose} finish {F_satin} normal {N_flat}};
#declare T_dusty_rose_gloss = texture{ pigment {C_dusty_rose} finish {F_gloss} normal {N_flat}};
#declare T_dusty_rose_metal = texture{ pigment {C_dusty_rose} finish {F_metal} normal {N_flat}};

#declare T_pink_matt = texture{ pigment {C_pink} finish {F_matt} normal {N_flat}};
#declare T_pink_dull = texture{ pigment {C_pink} finish {F_dull} normal {N_flat}};
#declare T_pink_satin = texture{ pigment {C_pink} finish {F_satin} normal {N_flat}};
#declare T_pink_gloss = texture{ pigment {C_pink} finish {F_gloss} normal {N_flat}};
#declare T_pink_metal = texture{ pigment {C_pink} finish {F_metal} normal {N_flat}};

#declare T_coral_matt = texture{ pigment {C_coral} finish {F_matt} normal {N_flat}};
#declare T_coral_dull = texture{ pigment {C_coral} finish {F_dull} normal {N_flat}};
#declare T_coral_satin = texture{ pigment {C_coral} finish {F_satin} normal {N_flat}};
#declare T_coral_gloss = texture{ pigment {C_coral} finish {F_gloss} normal {N_flat}};
#declare T_coral_metal = texture{ pigment {C_coral} finish {F_metal} normal {N_flat}};

#declare T_cyan_matt = texture{ pigment {C_cyan} finish {F_matt} normal {N_flat}};
#declare T_cyan_dull = texture{ pigment {C_cyan} finish {F_dull} normal {N_flat}};
#declare T_cyan_satin = texture{ pigment {C_cyan} finish {F_satin} normal {N_flat}};
#declare T_cyan_gloss = texture{ pigment {C_cyan} finish {F_gloss} normal {N_flat}};
#declare T_cyan_metal = texture{ pigment {C_cyan} finish {F_metal} normal {N_flat}};

#declare T_light_cyan_matt = texture{ pigment {C_light_cyan} finish {F_matt} normal {N_flat}};
#declare T_light_cyan_dull = texture{ pigment {C_light_cyan} finish {F_dull} normal {N_flat}};
#declare T_light_cyan_satin = texture{ pigment {C_light_cyan} finish {F_satin} normal {N_flat}};
#declare T_light_cyan_gloss = texture{ pigment {C_light_cyan} finish {F_gloss} normal {N_flat}};
#declare T_light_cyan_metal = texture{ pigment {C_light_cyan} finish {F_metal} normal {N_flat}};

#declare T_dark_cyan_matt = texture{ pigment {C_dark_cyan} finish {F_matt} normal {N_flat}};
#declare T_dark_cyan_dull = texture{ pigment {C_dark_cyan} finish {F_dull} normal {N_flat}};
#declare T_dark_cyan_satin = texture{ pigment {C_dark_cyan} finish {F_satin} normal {N_flat}};
#declare T_dark_cyan_gloss = texture{ pigment {C_dark_cyan} finish {F_gloss} normal {N_flat}};
#declare T_dark_cyan_metal = texture{ pigment {C_dark_cyan} finish {F_metal} normal {N_flat}};

#declare T_blue_matt = texture{ pigment {C_blue} finish {F_matt} normal {N_flat}};
#declare T_blue_dull = texture{ pigment {C_blue} finish {F_dull} normal {N_flat}};
#declare T_blue_satin = texture{ pigment {C_blue} finish {F_satin} normal {N_flat}};
#declare T_blue_gloss = texture{ pigment {C_blue} finish {F_gloss} normal {N_flat}};
#declare T_blue_metal = texture{ pigment {C_blue} finish {F_metal} normal {N_flat}};

#declare T_light_blue_matt = texture{ pigment {C_light_blue} finish {F_matt} normal {N_flat}};
#declare T_light_blue_dull = texture{ pigment {C_light_blue} finish {F_dull} normal {N_flat}};
#declare T_light_blue_satin = texture{ pigment {C_light_blue} finish {F_satin} normal {N_flat}};
#declare T_light_blue_gloss = texture{ pigment {C_light_blue} finish {F_gloss} normal {N_flat}};
#declare T_light_blue_metal = texture{ pigment {C_light_blue} finish {F_metal} normal {N_flat}};

#declare T_dark_blue_matt = texture{ pigment {C_dark_blue} finish {F_matt} normal {N_flat}};
#declare T_dark_blue_dull = texture{ pigment {C_dark_blue} finish {F_dull} normal {N_flat}};
#declare T_dark_blue_satin = texture{ pigment {C_dark_blue} finish {F_satin} normal {N_flat}};
#declare T_dark_blue_gloss = texture{ pigment {C_dark_blue} finish {F_gloss} normal {N_flat}};
#declare T_dark_blue_metal = texture{ pigment {C_dark_blue} finish {F_metal} normal {N_flat}};

#declare T_dark_gray_blue_matt = texture{ pigment {C_dark_gray_blue} finish {F_matt} normal {N_flat}};
#declare T_dark_gray_blue_dull = texture{ pigment {C_dark_gray_blue} finish {F_dull} normal {N_flat}};
#declare T_dark_gray_blue_satin = texture{ pigment {C_dark_gray_blue} finish {F_satin} normal {N_flat}};
#declare T_dark_gray_blue_gloss = texture{ pigment {C_dark_gray_blue} finish {F_gloss} normal {N_flat}};
#declare T_dark_gray_blue_metal = texture{ pigment {C_dark_gray_blue} finish {F_metal} normal {N_flat}};

#declare T_charcoal_blue_matt = texture{ pigment {C_charcoal_blue} finish {F_matt} normal {N_flat}};
#declare T_charcoal_blue_dull = texture{ pigment {C_charcoal_blue} finish {F_dull} normal {N_flat}};
#declare T_charcoal_blue_satin = texture{ pigment {C_charcoal_blue} finish {F_satin} normal {N_flat}};
#declare T_charcoal_blue_gloss = texture{ pigment {C_charcoal_blue} finish {F_gloss} normal {N_flat}};
#declare T_charcoal_blue_metal = texture{ pigment {C_charcoal_blue} finish {F_metal} normal {N_flat}};

#declare T_navy_blue_matt = texture{ pigment {C_navy_blue} finish {F_matt} normal {N_flat}};
#declare T_navy_blue_dull = texture{ pigment {C_navy_blue} finish {F_dull} normal {N_flat}};
#declare T_navy_blue_satin = texture{ pigment {C_navy_blue} finish {F_satin} normal {N_flat}};
#declare T_navy_blue_gloss = texture{ pigment {C_navy_blue} finish {F_gloss} normal {N_flat}};
#declare T_navy_blue_metal = texture{ pigment {C_navy_blue} finish {F_metal} normal {N_flat}};

#declare T_horizon_blue_matt = texture{ pigment {C_horizon_blue} finish {F_matt} normal {N_flat}};
#declare T_horizon_blue_dull = texture{ pigment {C_horizon_blue} finish {F_dull} normal {N_flat}};
#declare T_horizon_blue_satin = texture{ pigment {C_horizon_blue} finish {F_satin} normal {N_flat}};
#declare T_horizon_blue_gloss = texture{ pigment {C_horizon_blue} finish {F_gloss} normal {N_flat}};
#declare T_horizon_blue_metal = texture{ pigment {C_horizon_blue} finish {F_metal} normal {N_flat}};

#declare T_sky_blue_matt = texture{ pigment {C_sky_blue} finish {F_matt} normal {N_flat}};
#declare T_sky_blue_dull = texture{ pigment {C_sky_blue} finish {F_dull} normal {N_flat}};
#declare T_sky_blue_satin = texture{ pigment {C_sky_blue} finish {F_satin} normal {N_flat}};
#declare T_sky_blue_gloss = texture{ pigment {C_sky_blue} finish {F_gloss} normal {N_flat}};
#declare T_sky_blue_metal = texture{ pigment {C_sky_blue} finish {F_metal} normal {N_flat}};

#declare T_cornflower_blue_matt = texture{ pigment {C_cornflower_blue} finish {F_matt} normal {N_flat}};
#declare T_cornflower_blue_dull = texture{ pigment {C_cornflower_blue} finish {F_dull} normal {N_flat}};
#declare T_cornflower_blue_satin = texture{ pigment {C_cornflower_blue} finish {F_satin} normal {N_flat}};
#declare T_cornflower_blue_gloss = texture{ pigment {C_cornflower_blue} finish {F_gloss} normal {N_flat}};
#declare T_cornflower_blue_metal = texture{ pigment {C_cornflower_blue} finish {F_metal} normal {N_flat}};

#declare T_powder_blue_matt = texture{ pigment {C_powder_blue} finish {F_matt} normal {N_flat}};
#declare T_powder_blue_dull = texture{ pigment {C_powder_blue} finish {F_dull} normal {N_flat}};
#declare T_powder_blue_satin = texture{ pigment {C_powder_blue} finish {F_satin} normal {N_flat}};
#declare T_powder_blue_gloss = texture{ pigment {C_powder_blue} finish {F_gloss} normal {N_flat}};
#declare T_powder_blue_metal = texture{ pigment {C_powder_blue} finish {F_metal} normal {N_flat}};

#declare T_midnight_blue_matt = texture{ pigment {C_midnight_blue} finish {F_matt} normal {N_flat}};
#declare T_midnight_blue_dull = texture{ pigment {C_midnight_blue} finish {F_dull} normal {N_flat}};
#declare T_midnight_blue_satin = texture{ pigment {C_midnight_blue} finish {F_satin} normal {N_flat}};
#declare T_midnight_blue_gloss = texture{ pigment {C_midnight_blue} finish {F_gloss} normal {N_flat}};
#declare T_midnight_blue_metal = texture{ pigment {C_midnight_blue} finish {F_metal} normal {N_flat}};

#declare T_cobalt_blue_matt = texture{ pigment {C_cobalt_blue} finish {F_matt} normal {N_flat}};
#declare T_cobalt_blue_dull = texture{ pigment {C_cobalt_blue} finish {F_dull} normal {N_flat}};
#declare T_cobalt_blue_satin = texture{ pigment {C_cobalt_blue} finish {F_satin} normal {N_flat}};
#declare T_cobalt_blue_gloss = texture{ pigment {C_cobalt_blue} finish {F_gloss} normal {N_flat}};
#declare T_cobalt_blue_metal = texture{ pigment {C_cobalt_blue} finish {F_metal} normal {N_flat}};

#declare T_teal_matt = texture{ pigment {C_teal} finish {F_matt} normal {N_flat}};
#declare T_teal_dull = texture{ pigment {C_teal} finish {F_dull} normal {N_flat}};
#declare T_teal_satin = texture{ pigment {C_teal} finish {F_satin} normal {N_flat}};
#declare T_teal_gloss = texture{ pigment {C_teal} finish {F_gloss} normal {N_flat}};
#declare T_teal_metal = texture{ pigment {C_teal} finish {F_metal} normal {N_flat}};

#declare T_purple_matt = texture{ pigment {C_purple} finish {F_matt} normal {N_flat}};
#declare T_purple_dull = texture{ pigment {C_purple} finish {F_dull} normal {N_flat}};
#declare T_purple_satin = texture{ pigment {C_purple} finish {F_satin} normal {N_flat}};
#declare T_purple_gloss = texture{ pigment {C_purple} finish {F_gloss} normal {N_flat}};
#declare T_purple_metal = texture{ pigment {C_purple} finish {F_metal} normal {N_flat}};

#declare T_light_purple_matt = texture{ pigment {C_light_purple} finish {F_matt} normal {N_flat}};
#declare T_light_purple_dull = texture{ pigment {C_light_purple} finish {F_dull} normal {N_flat}};
#declare T_light_purple_satin = texture{ pigment {C_light_purple} finish {F_satin} normal {N_flat}};
#declare T_light_purple_gloss = texture{ pigment {C_light_purple} finish {F_gloss} normal {N_flat}};
#declare T_light_purple_metal = texture{ pigment {C_light_purple} finish {F_metal} normal {N_flat}};

#declare T_dark_purple_matt = texture{ pigment {C_dark_purple} finish {F_matt} normal {N_flat}};
#declare T_dark_purple_dull = texture{ pigment {C_dark_purple} finish {F_dull} normal {N_flat}};
#declare T_dark_purple_satin = texture{ pigment {C_dark_purple} finish {F_satin} normal {N_flat}};
#declare T_dark_purple_gloss = texture{ pigment {C_dark_purple} finish {F_gloss} normal {N_flat}};
#declare T_dark_purple_metal = texture{ pigment {C_dark_purple} finish {F_metal} normal {N_flat}};

#declare T_maroon_matt = texture{ pigment {C_maroon} finish {F_matt} normal {N_flat}};
#declare T_maroon_dull = texture{ pigment {C_maroon} finish {F_dull} normal {N_flat}};
#declare T_maroon_satin = texture{ pigment {C_maroon} finish {F_satin} normal {N_flat}};
#declare T_maroon_gloss = texture{ pigment {C_maroon} finish {F_gloss} normal {N_flat}};
#declare T_maroon_metal = texture{ pigment {C_maroon} finish {F_metal} normal {N_flat}};

#declare T_purple_maroon_matt = texture{ pigment {C_purple_maroon} finish {F_matt} normal {N_flat}};
#declare T_purple_maroon_dull = texture{ pigment {C_purple_maroon} finish {F_dull} normal {N_flat}};
#declare T_purple_maroon_satin = texture{ pigment {C_purple_maroon} finish {F_satin} normal {N_flat}};
#declare T_purple_maroon_gloss = texture{ pigment {C_purple_maroon} finish {F_gloss} normal {N_flat}};
#declare T_purple_maroon_metal = texture{ pigment {C_purple_maroon} finish {F_metal} normal {N_flat}};

#declare T_mauve_matt = texture{ pigment {C_mauve} finish {F_matt} normal {N_flat}};
#declare T_mauve_dull = texture{ pigment {C_mauve} finish {F_dull} normal {N_flat}};
#declare T_mauve_satin = texture{ pigment {C_mauve} finish {F_satin} normal {N_flat}};
#declare T_mauve_gloss = texture{ pigment {C_mauve} finish {F_gloss} normal {N_flat}};
#declare T_mauve_metal = texture{ pigment {C_mauve} finish {F_metal} normal {N_flat}};

#declare T_dark_mauve_matt = texture{ pigment {C_dark_mauve} finish {F_matt} normal {N_flat}};
#declare T_dark_mauve_dull = texture{ pigment {C_dark_mauve} finish {F_dull} normal {N_flat}};
#declare T_dark_mauve_satin = texture{ pigment {C_dark_mauve} finish {F_satin} normal {N_flat}};
#declare T_dark_mauve_gloss = texture{ pigment {C_dark_mauve} finish {F_gloss} normal {N_flat}};
#declare T_dark_mauve_metal = texture{ pigment {C_dark_mauve} finish {F_metal} normal {N_flat}};

#declare T_plum_matt = texture{ pigment {C_plum} finish {F_matt} normal {N_flat}};
#declare T_plum_dull = texture{ pigment {C_plum} finish {F_dull} normal {N_flat}};
#declare T_plum_satin = texture{ pigment {C_plum} finish {F_satin} normal {N_flat}};
#declare T_plum_gloss = texture{ pigment {C_plum} finish {F_gloss} normal {N_flat}};
#declare T_plum_metal = texture{ pigment {C_plum} finish {F_metal} normal {N_flat}};

#declare T_lavender_matt = texture{ pigment {C_lavender} finish {F_matt} normal {N_flat}};
#declare T_lavender_dull = texture{ pigment {C_lavender} finish {F_dull} normal {N_flat}};
#declare T_lavender_satin = texture{ pigment {C_lavender} finish {F_satin} normal {N_flat}};
#declare T_lavender_gloss = texture{ pigment {C_lavender} finish {F_gloss} normal {N_flat}};
#declare T_lavender_metal = texture{ pigment {C_lavender} finish {F_metal} normal {N_flat}};

#declare T_cranberry_matt = texture{ pigment {C_cranberry} finish {F_matt} normal {N_flat}};
#declare T_cranberry_dull = texture{ pigment {C_cranberry} finish {F_dull} normal {N_flat}};
#declare T_cranberry_satin = texture{ pigment {C_cranberry} finish {F_satin} normal {N_flat}};
#declare T_cranberry_gloss = texture{ pigment {C_cranberry} finish {F_gloss} normal {N_flat}};
#declare T_cranberry_metal = texture{ pigment {C_cranberry} finish {F_metal} normal {N_flat}};

#declare T_magenta_matt = texture{ pigment {C_magenta} finish {F_matt} normal {N_flat}};
#declare T_magenta_dull = texture{ pigment {C_magenta} finish {F_dull} normal {N_flat}};
#declare T_magenta_satin = texture{ pigment {C_magenta} finish {F_satin} normal {N_flat}};
#declare T_magenta_gloss = texture{ pigment {C_magenta} finish {F_gloss} normal {N_flat}};
#declare T_magenta_metal = texture{ pigment {C_magenta} finish {F_metal} normal {N_flat}};

#declare T_violet_matt = texture{ pigment {C_violet} finish {F_matt} normal {N_flat}};
#declare T_violet_dull = texture{ pigment {C_violet} finish {F_dull} normal {N_flat}};
#declare T_violet_satin = texture{ pigment {C_violet} finish {F_satin} normal {N_flat}};
#declare T_violet_gloss = texture{ pigment {C_violet} finish {F_gloss} normal {N_flat}};
#declare T_violet_metal = texture{ pigment {C_violet} finish {F_metal} normal {N_flat}};

#declare T_lilac_matt = texture{ pigment {C_lilac} finish {F_matt} normal {N_flat}};
#declare T_lilac_dull = texture{ pigment {C_lilac} finish {F_dull} normal {N_flat}};
#declare T_lilac_satin = texture{ pigment {C_lilac} finish {F_satin} normal {N_flat}};
#declare T_lilac_gloss = texture{ pigment {C_lilac} finish {F_gloss} normal {N_flat}};
#declare T_lilac_metal = texture{ pigment {C_lilac} finish {F_metal} normal {N_flat}};

#declare T_grape_matt = texture{ pigment {C_grape} finish {F_matt} normal {N_flat}};
#declare T_grape_dull = texture{ pigment {C_grape} finish {F_dull} normal {N_flat}};
#declare T_grape_satin = texture{ pigment {C_grape} finish {F_satin} normal {N_flat}};
#declare T_grape_gloss = texture{ pigment {C_grape} finish {F_gloss} normal {N_flat}};
#declare T_grape_metal = texture{ pigment {C_grape} finish {F_metal} normal {N_flat}};

#declare T_green_matt = texture{ pigment {C_green} finish {F_matt} normal {N_flat}};
#declare T_green_dull = texture{ pigment {C_green} finish {F_dull} normal {N_flat}};
#declare T_green_satin = texture{ pigment {C_green} finish {F_satin} normal {N_flat}};
#declare T_green_gloss = texture{ pigment {C_green} finish {F_gloss} normal {N_flat}};
#declare T_green_metal = texture{ pigment {C_green} finish {F_metal} normal {N_flat}};

#declare T_dark_green_matt = texture{ pigment {C_dark_green} finish {F_matt} normal {N_flat}};
#declare T_dark_green_dull = texture{ pigment {C_dark_green} finish {F_dull} normal {N_flat}};
#declare T_dark_green_satin = texture{ pigment {C_dark_green} finish {F_satin} normal {N_flat}};
#declare T_dark_green_gloss = texture{ pigment {C_dark_green} finish {F_gloss} normal {N_flat}};
#declare T_dark_green_metal = texture{ pigment {C_dark_green} finish {F_metal} normal {N_flat}};

#declare T_light_green_matt = texture{ pigment {C_light_green} finish {F_matt} normal {N_flat}};
#declare T_light_green_dull = texture{ pigment {C_light_green} finish {F_dull} normal {N_flat}};
#declare T_light_green_satin = texture{ pigment {C_light_green} finish {F_satin} normal {N_flat}};
#declare T_light_green_gloss = texture{ pigment {C_light_green} finish {F_gloss} normal {N_flat}};
#declare T_light_green_metal = texture{ pigment {C_light_green} finish {F_metal} normal {N_flat}};

#declare T_emerald_green_matt = texture{ pigment {C_emerald_green} finish {F_matt} normal {N_flat}};
#declare T_emerald_green_dull = texture{ pigment {C_emerald_green} finish {F_dull} normal {N_flat}};
#declare T_emerald_green_satin = texture{ pigment {C_emerald_green} finish {F_satin} normal {N_flat}};
#declare T_emerald_green_gloss = texture{ pigment {C_emerald_green} finish {F_gloss} normal {N_flat}};
#declare T_emerald_green_metal = texture{ pigment {C_emerald_green} finish {F_metal} normal {N_flat}};

#declare T_lime_green_matt = texture{ pigment {C_lime_green} finish {F_matt} normal {N_flat}};
#declare T_lime_green_dull = texture{ pigment {C_lime_green} finish {F_dull} normal {N_flat}};
#declare T_lime_green_satin = texture{ pigment {C_lime_green} finish {F_satin} normal {N_flat}};
#declare T_lime_green_gloss = texture{ pigment {C_lime_green} finish {F_gloss} normal {N_flat}};
#declare T_lime_green_metal = texture{ pigment {C_lime_green} finish {F_metal} normal {N_flat}};

#declare T_green_apple_matt = texture{ pigment {C_green_apple} finish {F_matt} normal {N_flat}};
#declare T_green_apple_dull = texture{ pigment {C_green_apple} finish {F_dull} normal {N_flat}};
#declare T_green_apple_satin = texture{ pigment {C_green_apple} finish {F_satin} normal {N_flat}};
#declare T_green_apple_gloss = texture{ pigment {C_green_apple} finish {F_gloss} normal {N_flat}};
#declare T_green_apple_metal = texture{ pigment {C_green_apple} finish {F_metal} normal {N_flat}};

#declare T_pea_green_matt = texture{ pigment {C_pea_green} finish {F_matt} normal {N_flat}};
#declare T_pea_green_dull = texture{ pigment {C_pea_green} finish {F_dull} normal {N_flat}};
#declare T_pea_green_satin = texture{ pigment {C_pea_green} finish {F_satin} normal {N_flat}};
#declare T_pea_green_gloss = texture{ pigment {C_pea_green} finish {F_gloss} normal {N_flat}};
#declare T_pea_green_metal = texture{ pigment {C_pea_green} finish {F_metal} normal {N_flat}};

#declare T_forest_green_matt = texture{ pigment {C_forest_green} finish {F_matt} normal {N_flat}};
#declare T_forest_green_dull = texture{ pigment {C_forest_green} finish {F_dull} normal {N_flat}};
#declare T_forest_green_satin = texture{ pigment {C_forest_green} finish {F_satin} normal {N_flat}};
#declare T_forest_green_gloss = texture{ pigment {C_forest_green} finish {F_gloss} normal {N_flat}};
#declare T_forest_green_metal = texture{ pigment {C_forest_green} finish {F_metal} normal {N_flat}};

#declare T_olive_green_matt = texture{ pigment {C_olive_green} finish {F_matt} normal {N_flat}};
#declare T_olive_green_dull = texture{ pigment {C_olive_green} finish {F_dull} normal {N_flat}};
#declare T_olive_green_satin = texture{ pigment {C_olive_green} finish {F_satin} normal {N_flat}};
#declare T_olive_green_gloss = texture{ pigment {C_olive_green} finish {F_gloss} normal {N_flat}};
#declare T_olive_green_metal = texture{ pigment {C_olive_green} finish {F_metal} normal {N_flat}};

#declare T_yellow_green_matt = texture{ pigment {C_yellow_green} finish {F_matt} normal {N_flat}};
#declare T_yellow_green_dull = texture{ pigment {C_yellow_green} finish {F_dull} normal {N_flat}};
#declare T_yellow_green_satin = texture{ pigment {C_yellow_green} finish {F_satin} normal {N_flat}};
#declare T_yellow_green_gloss = texture{ pigment {C_yellow_green} finish {F_gloss} normal {N_flat}};
#declare T_yellow_green_metal = texture{ pigment {C_yellow_green} finish {F_metal} normal {N_flat}};

#declare T_kelly_green_matt = texture{ pigment {C_kelly_green} finish {F_matt} normal {N_flat}};
#declare T_kelly_green_dull = texture{ pigment {C_kelly_green} finish {F_dull} normal {N_flat}};
#declare T_kelly_green_satin = texture{ pigment {C_kelly_green} finish {F_satin} normal {N_flat}};
#declare T_kelly_green_gloss = texture{ pigment {C_kelly_green} finish {F_gloss} normal {N_flat}};
#declare T_kelly_green_metal = texture{ pigment {C_kelly_green} finish {F_metal} normal {N_flat}};

#declare T_chartreuse_matt = texture{ pigment {C_chartreuse} finish {F_matt} normal {N_flat}};
#declare T_chartreuse_dull = texture{ pigment {C_chartreuse} finish {F_dull} normal {N_flat}};
#declare T_chartreuse_satin = texture{ pigment {C_chartreuse} finish {F_satin} normal {N_flat}};
#declare T_chartreuse_gloss = texture{ pigment {C_chartreuse} finish {F_gloss} normal {N_flat}};
#declare T_chartreuse_metal = texture{ pigment {C_chartreuse} finish {F_metal} normal {N_flat}};

#declare T_mint_green_matt = texture{ pigment {C_mint_green} finish {F_matt} normal {N_flat}};
#declare T_mint_green_dull = texture{ pigment {C_mint_green} finish {F_dull} normal {N_flat}};
#declare T_mint_green_satin = texture{ pigment {C_mint_green} finish {F_satin} normal {N_flat}};
#declare T_mint_green_gloss = texture{ pigment {C_mint_green} finish {F_gloss} normal {N_flat}};
#declare T_mint_green_metal = texture{ pigment {C_mint_green} finish {F_metal} normal {N_flat}};

#declare T_sea_green_matt = texture{ pigment {C_sea_green} finish {F_matt} normal {N_flat}};
#declare T_sea_green_dull = texture{ pigment {C_sea_green} finish {F_dull} normal {N_flat}};
#declare T_sea_green_satin = texture{ pigment {C_sea_green} finish {F_satin} normal {N_flat}};
#declare T_sea_green_gloss = texture{ pigment {C_sea_green} finish {F_gloss} normal {N_flat}};
#declare T_sea_green_metal = texture{ pigment {C_sea_green} finish {F_metal} normal {N_flat}};

#declare T_khaki_green_matt = texture{ pigment {C_khaki_green} finish {F_matt} normal {N_flat}};
#declare T_khaki_green_dull = texture{ pigment {C_khaki_green} finish {F_dull} normal {N_flat}};
#declare T_khaki_green_satin = texture{ pigment {C_khaki_green} finish {F_satin} normal {N_flat}};
#declare T_khaki_green_gloss = texture{ pigment {C_khaki_green} finish {F_gloss} normal {N_flat}};
#declare T_khaki_green_metal = texture{ pigment {C_khaki_green} finish {F_metal} normal {N_flat}};

#declare T_turquoise_matt = texture{ pigment {C_turquoise} finish {F_matt} normal {N_flat}};
#declare T_turquoise_dull = texture{ pigment {C_turquoise} finish {F_dull} normal {N_flat}};
#declare T_turquoise_satin = texture{ pigment {C_turquoise} finish {F_satin} normal {N_flat}};
#declare T_turquoise_gloss = texture{ pigment {C_turquoise} finish {F_gloss} normal {N_flat}};
#declare T_turquoise_metal = texture{ pigment {C_turquoise} finish {F_metal} normal {N_flat}};

#declare T_yellow_matt = texture{ pigment {C_yellow} finish {F_matt} normal {N_flat}};
#declare T_yellow_dull = texture{ pigment {C_yellow} finish {F_dull} normal {N_flat}};
#declare T_yellow_satin = texture{ pigment {C_yellow} finish {F_satin} normal {N_flat}};
#declare T_yellow_gloss = texture{ pigment {C_yellow} finish {F_gloss} normal {N_flat}};
#declare T_yellow_metal = texture{ pigment {C_yellow} finish {F_metal} normal {N_flat}};

#declare T_light_yellow_matt = texture{ pigment {C_light_yellow} finish {F_matt} normal {N_flat}};
#declare T_light_yellow_dull = texture{ pigment {C_light_yellow} finish {F_dull} normal {N_flat}};
#declare T_light_yellow_satin = texture{ pigment {C_light_yellow} finish {F_satin} normal {N_flat}};
#declare T_light_yellow_gloss = texture{ pigment {C_light_yellow} finish {F_gloss} normal {N_flat}};
#declare T_light_yellow_metal = texture{ pigment {C_light_yellow} finish {F_metal} normal {N_flat}};

#declare T_mustard_yellow_matt = texture{ pigment {C_mustard_yellow} finish {F_matt} normal {N_flat}};
#declare T_mustard_yellow_dull = texture{ pigment {C_mustard_yellow} finish {F_dull} normal {N_flat}};
#declare T_mustard_yellow_satin = texture{ pigment {C_mustard_yellow} finish {F_satin} normal {N_flat}};
#declare T_mustard_yellow_gloss = texture{ pigment {C_mustard_yellow} finish {F_gloss} normal {N_flat}};
#declare T_mustard_yellow_metal = texture{ pigment {C_mustard_yellow} finish {F_metal} normal {N_flat}};

#declare T_canary_yellow_matt = texture{ pigment {C_canary_yellow} finish {F_matt} normal {N_flat}};
#declare T_canary_yellow_dull = texture{ pigment {C_canary_yellow} finish {F_dull} normal {N_flat}};
#declare T_canary_yellow_satin = texture{ pigment {C_canary_yellow} finish {F_satin} normal {N_flat}};
#declare T_canary_yellow_gloss = texture{ pigment {C_canary_yellow} finish {F_gloss} normal {N_flat}};
#declare T_canary_yellow_metal = texture{ pigment {C_canary_yellow} finish {F_metal} normal {N_flat}};

#declare T_safty_yellow_matt = texture{ pigment {C_safty_yellow} finish {F_matt} normal {N_flat}};
#declare T_safty_yellow_dull = texture{ pigment {C_safty_yellow} finish {F_dull} normal {N_flat}};
#declare T_safty_yellow_satin = texture{ pigment {C_safty_yellow} finish {F_satin} normal {N_flat}};
#declare T_safty_yellow_gloss = texture{ pigment {C_safty_yellow} finish {F_gloss} normal {N_flat}};
#declare T_safty_yellow_metal = texture{ pigment {C_safty_yellow} finish {F_metal} normal {N_flat}};

#declare T_golden_yellow_matt = texture{ pigment {C_golden_yellow} finish {F_matt} normal {N_flat}};
#declare T_golden_yellow_dull = texture{ pigment {C_golden_yellow} finish {F_dull} normal {N_flat}};
#declare T_golden_yellow_satin = texture{ pigment {C_golden_yellow} finish {F_satin} normal {N_flat}};
#declare T_golden_yellow_gloss = texture{ pigment {C_golden_yellow} finish {F_gloss} normal {N_flat}};
#declare T_golden_yellow_metal = texture{ pigment {C_golden_yellow} finish {F_metal} normal {N_flat}};

#declare T_goldenrod_matt = texture{ pigment {C_goldenrod} finish {F_matt} normal {N_flat}};
#declare T_goldenrod_dull = texture{ pigment {C_goldenrod} finish {F_dull} normal {N_flat}};
#declare T_goldenrod_satin = texture{ pigment {C_goldenrod} finish {F_satin} normal {N_flat}};
#declare T_goldenrod_gloss = texture{ pigment {C_goldenrod} finish {F_gloss} normal {N_flat}};
#declare T_goldenrod_metal = texture{ pigment {C_goldenrod} finish {F_metal} normal {N_flat}};

#declare T_orange_matt = texture{ pigment {C_orange} finish {F_matt} normal {N_flat}};
#declare T_orange_dull = texture{ pigment {C_orange} finish {F_dull} normal {N_flat}};
#declare T_orange_satin = texture{ pigment {C_orange} finish {F_satin} normal {N_flat}};
#declare T_orange_gloss = texture{ pigment {C_orange} finish {F_gloss} normal {N_flat}};
#declare T_orange_metal = texture{ pigment {C_orange} finish {F_metal} normal {N_flat}};

#declare T_light_orange_matt = texture{ pigment {C_light_orange} finish {F_matt} normal {N_flat}};
#declare T_light_orange_dull = texture{ pigment {C_light_orange} finish {F_dull} normal {N_flat}};
#declare T_light_orange_satin = texture{ pigment {C_light_orange} finish {F_satin} normal {N_flat}};
#declare T_light_orange_gloss = texture{ pigment {C_light_orange} finish {F_gloss} normal {N_flat}};
#declare T_light_orange_metal = texture{ pigment {C_light_orange} finish {F_metal} normal {N_flat}};

#declare T_dark_orange_matt = texture{ pigment {C_dark_orange} finish {F_matt} normal {N_flat}};
#declare T_dark_orange_dull = texture{ pigment {C_dark_orange} finish {F_dull} normal {N_flat}};
#declare T_dark_orange_satin = texture{ pigment {C_dark_orange} finish {F_satin} normal {N_flat}};
#declare T_dark_orange_gloss = texture{ pigment {C_dark_orange} finish {F_gloss} normal {N_flat}};
#declare T_dark_orange_metal = texture{ pigment {C_dark_orange} finish {F_metal} normal {N_flat}};

#declare T_peach_matt = texture{ pigment {C_peach} finish {F_matt} normal {N_flat}};
#declare T_peach_dull = texture{ pigment {C_peach} finish {F_dull} normal {N_flat}};
#declare T_peach_satin = texture{ pigment {C_peach} finish {F_satin} normal {N_flat}};
#declare T_peach_gloss = texture{ pigment {C_peach} finish {F_gloss} normal {N_flat}};
#declare T_peach_metal = texture{ pigment {C_peach} finish {F_metal} normal {N_flat}};

#declare T_burnt_orange_matt = texture{ pigment {C_burnt_orange} finish {F_matt} normal {N_flat}};
#declare T_burnt_orange_dull = texture{ pigment {C_burnt_orange} finish {F_dull} normal {N_flat}};
#declare T_burnt_orange_satin = texture{ pigment {C_burnt_orange} finish {F_satin} normal {N_flat}};
#declare T_burnt_orange_gloss = texture{ pigment {C_burnt_orange} finish {F_gloss} normal {N_flat}};
#declare T_burnt_orange_metal = texture{ pigment {C_burnt_orange} finish {F_metal} normal {N_flat}};

#declare T_rust_matt = texture{ pigment {C_rust} finish {F_matt} normal {N_flat}};
#declare T_rust_dull = texture{ pigment {C_rust} finish {F_dull} normal {N_flat}};
#declare T_rust_satin = texture{ pigment {C_rust} finish {F_satin} normal {N_flat}};
#declare T_rust_gloss = texture{ pigment {C_rust} finish {F_gloss} normal {N_flat}};
#declare T_rust_metal = texture{ pigment {C_rust} finish {F_metal} normal {N_flat}};

#declare T_rust_red_matt = texture{ pigment {C_rust_red} finish {F_matt} normal {N_flat}};
#declare T_rust_red_dull = texture{ pigment {C_rust_red} finish {F_dull} normal {N_flat}};
#declare T_rust_red_satin = texture{ pigment {C_rust_red} finish {F_satin} normal {N_flat}};
#declare T_rust_red_gloss = texture{ pigment {C_rust_red} finish {F_gloss} normal {N_flat}};
#declare T_rust_red_metal = texture{ pigment {C_rust_red} finish {F_metal} normal {N_flat}};

#declare T_rust_gray_matt = texture{ pigment {C_rust_gray} finish {F_matt} normal {N_flat}};
#declare T_rust_gray_dull = texture{ pigment {C_rust_gray} finish {F_dull} normal {N_flat}};
#declare T_rust_gray_satin = texture{ pigment {C_rust_gray} finish {F_satin} normal {N_flat}};
#declare T_rust_gray_gloss = texture{ pigment {C_rust_gray} finish {F_gloss} normal {N_flat}};
#declare T_rust_gray_metal = texture{ pigment {C_rust_gray} finish {F_metal} normal {N_flat}};

#declare T_rust_gray_dark_matt = texture{ pigment {C_rust_gray_dark} finish {F_matt} normal {N_flat}};
#declare T_rust_gray_dark_dull = texture{ pigment {C_rust_gray_dark} finish {F_dull} normal {N_flat}};
#declare T_rust_gray_dark_satin = texture{ pigment {C_rust_gray_dark} finish {F_satin} normal {N_flat}};
#declare T_rust_gray_dark_gloss = texture{ pigment {C_rust_gray_dark} finish {F_gloss} normal {N_flat}};
#declare T_rust_gray_dark_metal = texture{ pigment {C_rust_gray_dark} finish {F_metal} normal {N_flat}};

#declare T_brown_matt = texture{ pigment {C_brown} finish {F_matt} normal {N_flat}};
#declare T_brown_dull = texture{ pigment {C_brown} finish {F_dull} normal {N_flat}};
#declare T_brown_satin = texture{ pigment {C_brown} finish {F_satin} normal {N_flat}};
#declare T_brown_gloss = texture{ pigment {C_brown} finish {F_gloss} normal {N_flat}};
#declare T_brown_metal = texture{ pigment {C_brown} finish {F_metal} normal {N_flat}};

#declare T_light_brown_matt = texture{ pigment {C_light_brown} finish {F_matt} normal {N_flat}};
#declare T_light_brown_dull = texture{ pigment {C_light_brown} finish {F_dull} normal {N_flat}};
#declare T_light_brown_satin = texture{ pigment {C_light_brown} finish {F_satin} normal {N_flat}};
#declare T_light_brown_gloss = texture{ pigment {C_light_brown} finish {F_gloss} normal {N_flat}};
#declare T_light_brown_metal = texture{ pigment {C_light_brown} finish {F_metal} normal {N_flat}};

#declare T_dark_brown_matt = texture{ pigment {C_dark_brown} finish {F_matt} normal {N_flat}};
#declare T_dark_brown_dull = texture{ pigment {C_dark_brown} finish {F_dull} normal {N_flat}};
#declare T_dark_brown_satin = texture{ pigment {C_dark_brown} finish {F_satin} normal {N_flat}};
#declare T_dark_brown_gloss = texture{ pigment {C_dark_brown} finish {F_gloss} normal {N_flat}};
#declare T_dark_brown_metal = texture{ pigment {C_dark_brown} finish {F_metal} normal {N_flat}};

#declare T_sepia_brown_matt = texture{ pigment {C_sepia_brown} finish {F_matt} normal {N_flat}};
#declare T_sepia_brown_dull = texture{ pigment {C_sepia_brown} finish {F_dull} normal {N_flat}};
#declare T_sepia_brown_satin = texture{ pigment {C_sepia_brown} finish {F_satin} normal {N_flat}};
#declare T_sepia_brown_gloss = texture{ pigment {C_sepia_brown} finish {F_gloss} normal {N_flat}};
#declare T_sepia_brown_metal = texture{ pigment {C_sepia_brown} finish {F_metal} normal {N_flat}};

#declare T_sienna_brown_matt = texture{ pigment {C_sienna_brown} finish {F_matt} normal {N_flat}};
#declare T_sienna_brown_dull = texture{ pigment {C_sienna_brown} finish {F_dull} normal {N_flat}};
#declare T_sienna_brown_satin = texture{ pigment {C_sienna_brown} finish {F_satin} normal {N_flat}};
#declare T_sienna_brown_gloss = texture{ pigment {C_sienna_brown} finish {F_gloss} normal {N_flat}};
#declare T_sienna_brown_metal = texture{ pigment {C_sienna_brown} finish {F_metal} normal {N_flat}};

#declare T_chocolate_brown_matt = texture{ pigment {C_chocolate_brown} finish {F_matt} normal {N_flat}};
#declare T_chocolate_brown_dull = texture{ pigment {C_chocolate_brown} finish {F_dull} normal {N_flat}};
#declare T_chocolate_brown_satin = texture{ pigment {C_chocolate_brown} finish {F_satin} normal {N_flat}};
#declare T_chocolate_brown_gloss = texture{ pigment {C_chocolate_brown} finish {F_gloss} normal {N_flat}};
#declare T_chocolate_brown_metal = texture{ pigment {C_chocolate_brown} finish {F_metal} normal {N_flat}};

#declare T_oak_brown_matt = texture{ pigment {C_oak_brown} finish {F_matt} normal {N_flat}};
#declare T_oak_brown_dull = texture{ pigment {C_oak_brown} finish {F_dull} normal {N_flat}};
#declare T_oak_brown_satin = texture{ pigment {C_oak_brown} finish {F_satin} normal {N_flat}};
#declare T_oak_brown_gloss = texture{ pigment {C_oak_brown} finish {F_gloss} normal {N_flat}};
#declare T_oak_brown_metal = texture{ pigment {C_oak_brown} finish {F_metal} normal {N_flat}};

#declare T_mohogany_brown_matt = texture{ pigment {C_mohogany_brown} finish {F_matt} normal {N_flat}};
#declare T_mohogany_brown_dull = texture{ pigment {C_mohogany_brown} finish {F_dull} normal {N_flat}};
#declare T_mohogany_brown_satin = texture{ pigment {C_mohogany_brown} finish {F_satin} normal {N_flat}};
#declare T_mohogany_brown_gloss = texture{ pigment {C_mohogany_brown} finish {F_gloss} normal {N_flat}};
#declare T_mohogany_brown_metal = texture{ pigment {C_mohogany_brown} finish {F_metal} normal {N_flat}};

#declare T_almond_brown_matt = texture{ pigment {C_almond_brown} finish {F_matt} normal {N_flat}};
#declare T_almond_brown_dull = texture{ pigment {C_almond_brown} finish {F_dull} normal {N_flat}};
#declare T_almond_brown_satin = texture{ pigment {C_almond_brown} finish {F_satin} normal {N_flat}};
#declare T_almond_brown_gloss = texture{ pigment {C_almond_brown} finish {F_gloss} normal {N_flat}};
#declare T_almond_brown_metal = texture{ pigment {C_almond_brown} finish {F_metal} normal {N_flat}};

#declare T_hazel_brown_matt = texture{ pigment {C_hazel_brown} finish {F_matt} normal {N_flat}};
#declare T_hazel_brown_dull = texture{ pigment {C_hazel_brown} finish {F_dull} normal {N_flat}};
#declare T_hazel_brown_satin = texture{ pigment {C_hazel_brown} finish {F_satin} normal {N_flat}};
#declare T_hazel_brown_gloss = texture{ pigment {C_hazel_brown} finish {F_gloss} normal {N_flat}};
#declare T_hazel_brown_metal = texture{ pigment {C_hazel_brown} finish {F_metal} normal {N_flat}};

#declare T_golden_brown_matt = texture{ pigment {C_golden_brown} finish {F_matt} normal {N_flat}};
#declare T_golden_brown_dull = texture{ pigment {C_golden_brown} finish {F_dull} normal {N_flat}};
#declare T_golden_brown_satin = texture{ pigment {C_golden_brown} finish {F_satin} normal {N_flat}};
#declare T_golden_brown_gloss = texture{ pigment {C_golden_brown} finish {F_gloss} normal {N_flat}};
#declare T_golden_brown_metal = texture{ pigment {C_golden_brown} finish {F_metal} normal {N_flat}};

#declare T_coffee_matt = texture{ pigment {C_coffee} finish {F_matt} normal {N_flat}};
#declare T_coffee_dull = texture{ pigment {C_coffee} finish {F_dull} normal {N_flat}};
#declare T_coffee_satin = texture{ pigment {C_coffee} finish {F_satin} normal {N_flat}};
#declare T_coffee_gloss = texture{ pigment {C_coffee} finish {F_gloss} normal {N_flat}};
#declare T_coffee_metal = texture{ pigment {C_coffee} finish {F_metal} normal {N_flat}};

#declare T_khaki_matt = texture{ pigment {C_khaki} finish {F_matt} normal {N_flat}};
#declare T_khaki_dull = texture{ pigment {C_khaki} finish {F_dull} normal {N_flat}};
#declare T_khaki_satin = texture{ pigment {C_khaki} finish {F_satin} normal {N_flat}};
#declare T_khaki_gloss = texture{ pigment {C_khaki} finish {F_gloss} normal {N_flat}};
#declare T_khaki_metal = texture{ pigment {C_khaki} finish {F_metal} normal {N_flat}};

#declare T_copper_matt = texture{ pigment {C_copper} finish {F_matt} normal {N_flat}};
#declare T_copper_dull = texture{ pigment {C_copper} finish {F_dull} normal {N_flat}};
#declare T_copper_satin = texture{ pigment {C_copper} finish {F_satin} normal {N_flat}};
#declare T_copper_gloss = texture{ pigment {C_copper} finish {F_gloss} normal {N_flat}};
#declare T_copper_metal = texture{ pigment {C_copper} finish {F_metal} normal {N_flat}};

#declare T_light_copper_matt = texture{ pigment {C_light_copper} finish {F_matt} normal {N_flat}};
#declare T_light_copper_dull = texture{ pigment {C_light_copper} finish {F_dull} normal {N_flat}};
#declare T_light_copper_satin = texture{ pigment {C_light_copper} finish {F_satin} normal {N_flat}};
#declare T_light_copper_gloss = texture{ pigment {C_light_copper} finish {F_gloss} normal {N_flat}};
#declare T_light_copper_metal = texture{ pigment {C_light_copper} finish {F_metal} normal {N_flat}};

#declare T_dark_copper_matt = texture{ pigment {C_dark_copper} finish {F_matt} normal {N_flat}};
#declare T_dark_copper_dull = texture{ pigment {C_dark_copper} finish {F_dull} normal {N_flat}};
#declare T_dark_copper_satin = texture{ pigment {C_dark_copper} finish {F_satin} normal {N_flat}};
#declare T_dark_copper_gloss = texture{ pigment {C_dark_copper} finish {F_gloss} normal {N_flat}};
#declare T_dark_copper_metal = texture{ pigment {C_dark_copper} finish {F_metal} normal {N_flat}};

#declare T_silver_matt = texture{ pigment {C_silver} finish {F_matt} normal {N_flat}};
#declare T_silver_dull = texture{ pigment {C_silver} finish {F_dull} normal {N_flat}};
#declare T_silver_satin = texture{ pigment {C_silver} finish {F_satin} normal {N_flat}};
#declare T_silver_gloss = texture{ pigment {C_silver} finish {F_gloss} normal {N_flat}};
#declare T_silver_metal = texture{ pigment {C_silver} finish {F_metal} normal {N_flat}};

#declare T_brass_matt = texture{ pigment {C_brass} finish {F_matt} normal {N_flat}};
#declare T_brass_dull = texture{ pigment {C_brass} finish {F_dull} normal {N_flat}};
#declare T_brass_satin = texture{ pigment {C_brass} finish {F_satin} normal {N_flat}};
#declare T_brass_gloss = texture{ pigment {C_brass} finish {F_gloss} normal {N_flat}};
#declare T_brass_metal = texture{ pigment {C_brass} finish {F_metal} normal {N_flat}};

#declare T_bronze_matt = texture{ pigment {C_bronze} finish {F_matt} normal {N_flat}};
#declare T_bronze_dull = texture{ pigment {C_bronze} finish {F_dull} normal {N_flat}};
#declare T_bronze_satin = texture{ pigment {C_bronze} finish {F_satin} normal {N_flat}};
#declare T_bronze_gloss = texture{ pigment {C_bronze} finish {F_gloss} normal {N_flat}};
#declare T_bronze_metal = texture{ pigment {C_bronze} finish {F_metal} normal {N_flat}};

#declare T_antique_bronze_matt = texture{ pigment {C_antique_bronze} finish {F_matt} normal {N_flat}};
#declare T_antique_bronze_dull = texture{ pigment {C_antique_bronze} finish {F_dull} normal {N_flat}};
#declare T_antique_bronze_satin = texture{ pigment {C_antique_bronze} finish {F_satin} normal {N_flat}};
#declare T_antique_bronze_gloss = texture{ pigment {C_antique_bronze} finish {F_gloss} normal {N_flat}};
#declare T_antique_bronze_metal = texture{ pigment {C_antique_bronze} finish {F_metal} normal {N_flat}};

#declare T_galvanize1_matt = texture{ pigment {C_galvanize1} finish {F_matt} normal {N_flat}};
#declare T_galvanize1_dull = texture{ pigment {C_galvanize1} finish {F_dull} normal {N_flat}};
#declare T_galvanize1_satin = texture{ pigment {C_galvanize1} finish {F_satin} normal {N_flat}};
#declare T_galvanize1_gloss = texture{ pigment {C_galvanize1} finish {F_gloss} normal {N_flat}};
#declare T_galvanize1_metal = texture{ pigment {C_galvanize1} finish {F_metal} normal {N_flat}};

#declare T_galvanize2_matt = texture{ pigment {C_galvanize2} finish {F_matt} normal {N_flat}};
#declare T_galvanize2_dull = texture{ pigment {C_galvanize2} finish {F_dull} normal {N_flat}};
#declare T_galvanize2_satin = texture{ pigment {C_galvanize2} finish {F_satin} normal {N_flat}};
#declare T_galvanize2_gloss = texture{ pigment {C_galvanize2} finish {F_gloss} normal {N_flat}};
#declare T_galvanize2_metal = texture{ pigment {C_galvanize2} finish {F_metal} normal {N_flat}};

#declare T_gold_matt = texture{ pigment {C_gold} finish {F_matt} normal {N_flat}};
#declare T_gold_dull = texture{ pigment {C_gold} finish {F_dull} normal {N_flat}};
#declare T_gold_satin = texture{ pigment {C_gold} finish {F_satin} normal {N_flat}};
#declare T_gold_gloss = texture{ pigment {C_gold} finish {F_gloss} normal {N_flat}};
#declare T_gold_metal = texture{ pigment {C_gold} finish {F_metal} normal {N_flat}};

#declare T_bright_gold_matt = texture{ pigment {C_bright_gold} finish {F_matt} normal {N_flat}};
#declare T_bright_gold_dull = texture{ pigment {C_bright_gold} finish {F_dull} normal {N_flat}};
#declare T_bright_gold_satin = texture{ pigment {C_bright_gold} finish {F_satin} normal {N_flat}};
#declare T_bright_gold_gloss = texture{ pigment {C_bright_gold} finish {F_gloss} normal {N_flat}};
#declare T_bright_gold_metal = texture{ pigment {C_bright_gold} finish {F_metal} normal {N_flat}};

#declare T_dark_gold_matt = texture{ pigment {C_dark_gold} finish {F_matt} normal {N_flat}};
#declare T_dark_gold_dull = texture{ pigment {C_dark_gold} finish {F_dull} normal {N_flat}};
#declare T_dark_gold_satin = texture{ pigment {C_dark_gold} finish {F_satin} normal {N_flat}};
#declare T_dark_gold_gloss = texture{ pigment {C_dark_gold} finish {F_gloss} normal {N_flat}};
#declare T_dark_gold_metal = texture{ pigment {C_dark_gold} finish {F_metal} normal {N_flat}};

#declare T_saffron_gold_matt = texture{ pigment {C_saffron_gold} finish {F_matt} normal {N_flat}};
#declare T_saffron_gold_dull = texture{ pigment {C_saffron_gold} finish {F_dull} normal {N_flat}};
#declare T_saffron_gold_satin = texture{ pigment {C_saffron_gold} finish {F_satin} normal {N_flat}};
#declare T_saffron_gold_gloss = texture{ pigment {C_saffron_gold} finish {F_gloss} normal {N_flat}};
#declare T_saffron_gold_metal = texture{ pigment {C_saffron_gold} finish {F_metal} normal {N_flat}};

#declare T_rose_gold_matt = texture{ pigment {C_rose_gold} finish {F_matt} normal {N_flat}};
#declare T_rose_gold_dull = texture{ pigment {C_rose_gold} finish {F_dull} normal {N_flat}};
#declare T_rose_gold_satin = texture{ pigment {C_rose_gold} finish {F_satin} normal {N_flat}};
#declare T_rose_gold_gloss = texture{ pigment {C_rose_gold} finish {F_gloss} normal {N_flat}};
#declare T_rose_gold_metal = texture{ pigment {C_rose_gold} finish {F_metal} normal {N_flat}};

#declare T_gray_dark_matt = texture{ pigment {C_gray_dark} finish {F_matt} normal {N_flat}};
#declare T_gray_dark_dull = texture{ pigment {C_gray_dark} finish {F_dull} normal {N_flat}};
#declare T_gray_dark_satin = texture{ pigment {C_gray_dark} finish {F_satin} normal {N_flat}};
#declare T_gray_dark_gloss = texture{ pigment {C_gray_dark} finish {F_gloss} normal {N_flat}};
#declare T_gray_dark_metal = texture{ pigment {C_gray_dark} finish {F_metal} normal {N_flat}};

#declare T_gray_black_matt = texture{ pigment {C_gray_black} finish {F_matt} normal {N_flat}};
#declare T_gray_black_dull = texture{ pigment {C_gray_black} finish {F_dull} normal {N_flat}};
#declare T_gray_black_satin = texture{ pigment {C_gray_black} finish {F_satin} normal {N_flat}};
#declare T_gray_black_gloss = texture{ pigment {C_gray_black} finish {F_gloss} normal {N_flat}};
#declare T_gray_black_metal = texture{ pigment {C_gray_black} finish {F_metal} normal {N_flat}};

#declare T_gray5_matt = texture{ pigment {C_gray5} finish {F_matt} normal {N_flat}};
#declare T_gray5_dull = texture{ pigment {C_gray5} finish {F_dull} normal {N_flat}};
#declare T_gray5_satin = texture{ pigment {C_gray5} finish {F_satin} normal {N_flat}};
#declare T_gray5_gloss = texture{ pigment {C_gray5} finish {F_gloss} normal {N_flat}};
#declare T_gray5_metal = texture{ pigment {C_gray5} finish {F_metal} normal {N_flat}};

#declare T_gray10_matt = texture{ pigment {C_gray10} finish {F_matt} normal {N_flat}};
#declare T_gray10_dull = texture{ pigment {C_gray10} finish {F_dull} normal {N_flat}};
#declare T_gray10_satin = texture{ pigment {C_gray10} finish {F_satin} normal {N_flat}};
#declare T_gray10_gloss = texture{ pigment {C_gray10} finish {F_gloss} normal {N_flat}};
#declare T_gray10_metal = texture{ pigment {C_gray10} finish {F_metal} normal {N_flat}};

#declare T_gray20_matt = texture{ pigment {C_gray20} finish {F_matt} normal {N_flat}};
#declare T_gray20_dull = texture{ pigment {C_gray20} finish {F_dull} normal {N_flat}};
#declare T_gray20_satin = texture{ pigment {C_gray20} finish {F_satin} normal {N_flat}};
#declare T_gray20_gloss = texture{ pigment {C_gray20} finish {F_gloss} normal {N_flat}};
#declare T_gray20_metal = texture{ pigment {C_gray20} finish {F_metal} normal {N_flat}};

#declare T_gray30_matt = texture{ pigment {C_gray30} finish {F_matt} normal {N_flat}};
#declare T_gray30_dull = texture{ pigment {C_gray30} finish {F_dull} normal {N_flat}};
#declare T_gray30_satin = texture{ pigment {C_gray30} finish {F_satin} normal {N_flat}};
#declare T_gray30_gloss = texture{ pigment {C_gray30} finish {F_gloss} normal {N_flat}};
#declare T_gray30_metal = texture{ pigment {C_gray30} finish {F_metal} normal {N_flat}};

#declare T_gray40_matt = texture{ pigment {C_gray40} finish {F_matt} normal {N_flat}};
#declare T_gray40_dull = texture{ pigment {C_gray40} finish {F_dull} normal {N_flat}};
#declare T_gray40_satin = texture{ pigment {C_gray40} finish {F_satin} normal {N_flat}};
#declare T_gray40_gloss = texture{ pigment {C_gray40} finish {F_gloss} normal {N_flat}};
#declare T_gray40_metal = texture{ pigment {C_gray40} finish {F_metal} normal {N_flat}};

#declare T_gray50_matt = texture{ pigment {C_gray50} finish {F_matt} normal {N_flat}};
#declare T_gray50_dull = texture{ pigment {C_gray50} finish {F_dull} normal {N_flat}};
#declare T_gray50_satin = texture{ pigment {C_gray50} finish {F_satin} normal {N_flat}};
#declare T_gray50_gloss = texture{ pigment {C_gray50} finish {F_gloss} normal {N_flat}};
#declare T_gray50_metal = texture{ pigment {C_gray50} finish {F_metal} normal {N_flat}};

#declare T_gray60_matt = texture{ pigment {C_gray60} finish {F_matt} normal {N_flat}};
#declare T_gray60_dull = texture{ pigment {C_gray60} finish {F_dull} normal {N_flat}};
#declare T_gray60_satin = texture{ pigment {C_gray60} finish {F_satin} normal {N_flat}};
#declare T_gray60_gloss = texture{ pigment {C_gray60} finish {F_gloss} normal {N_flat}};
#declare T_gray60_metal = texture{ pigment {C_gray60} finish {F_metal} normal {N_flat}};

#declare T_gray70_matt = texture{ pigment {C_gray70} finish {F_matt} normal {N_flat}};
#declare T_gray70_dull = texture{ pigment {C_gray70} finish {F_dull} normal {N_flat}};
#declare T_gray70_satin = texture{ pigment {C_gray70} finish {F_satin} normal {N_flat}};
#declare T_gray70_gloss = texture{ pigment {C_gray70} finish {F_gloss} normal {N_flat}};
#declare T_gray70_metal = texture{ pigment {C_gray70} finish {F_metal} normal {N_flat}};

#declare T_gray80_matt = texture{ pigment {C_gray80} finish {F_matt} normal {N_flat}};
#declare T_gray80_dull = texture{ pigment {C_gray80} finish {F_dull} normal {N_flat}};
#declare T_gray80_satin = texture{ pigment {C_gray80} finish {F_satin} normal {N_flat}};
#declare T_gray80_gloss = texture{ pigment {C_gray80} finish {F_gloss} normal {N_flat}};
#declare T_gray80_metal = texture{ pigment {C_gray80} finish {F_metal} normal {N_flat}};

#declare T_gray90_matt = texture{ pigment {C_gray90} finish {F_matt} normal {N_flat}};
#declare T_gray90_dull = texture{ pigment {C_gray90} finish {F_dull} normal {N_flat}};
#declare T_gray90_satin = texture{ pigment {C_gray90} finish {F_satin} normal {N_flat}};
#declare T_gray90_gloss = texture{ pigment {C_gray90} finish {F_gloss} normal {N_flat}};
#declare T_gray90_metal = texture{ pigment {C_gray90} finish {F_metal} normal {N_flat}};

#declare T_cool_gray_matt = texture{ pigment {C_cool_gray} finish {F_matt} normal {N_flat}};
#declare T_cool_gray_dull = texture{ pigment {C_cool_gray} finish {F_dull} normal {N_flat}};
#declare T_cool_gray_satin = texture{ pigment {C_cool_gray} finish {F_satin} normal {N_flat}};
#declare T_cool_gray_gloss = texture{ pigment {C_cool_gray} finish {F_gloss} normal {N_flat}};
#declare T_cool_gray_metal = texture{ pigment {C_cool_gray} finish {F_metal} normal {N_flat}};

#declare T_warm_gray_matt = texture{ pigment {C_warm_gray} finish {F_matt} normal {N_flat}};
#declare T_warm_gray_dull = texture{ pigment {C_warm_gray} finish {F_dull} normal {N_flat}};
#declare T_warm_gray_satin = texture{ pigment {C_warm_gray} finish {F_satin} normal {N_flat}};
#declare T_warm_gray_gloss = texture{ pigment {C_warm_gray} finish {F_gloss} normal {N_flat}};
#declare T_warm_gray_metal = texture{ pigment {C_warm_gray} finish {F_metal} normal {N_flat}};

#declare T_yellow_gray_matt = texture{ pigment {C_yellow_gray} finish {F_matt} normal {N_flat}};
#declare T_yellow_gray_dull = texture{ pigment {C_yellow_gray} finish {F_dull} normal {N_flat}};
#declare T_yellow_gray_satin = texture{ pigment {C_yellow_gray} finish {F_satin} normal {N_flat}};
#declare T_yellow_gray_gloss = texture{ pigment {C_yellow_gray} finish {F_gloss} normal {N_flat}};
#declare T_yellow_gray_metal = texture{ pigment {C_yellow_gray} finish {F_metal} normal {N_flat}};

#declare T_brown_gray_matt = texture{ pigment {C_brown_gray} finish {F_matt} normal {N_flat}};
#declare T_brown_gray_dull = texture{ pigment {C_brown_gray} finish {F_dull} normal {N_flat}};
#declare T_brown_gray_satin = texture{ pigment {C_brown_gray} finish {F_satin} normal {N_flat}};
#declare T_brown_gray_gloss = texture{ pigment {C_brown_gray} finish {F_gloss} normal {N_flat}};
#declare T_brown_gray_metal = texture{ pigment {C_brown_gray} finish {F_metal} normal {N_flat}};

#declare T_putty_matt = texture{ pigment {C_putty} finish {F_matt} normal {N_flat}};
#declare T_putty_dull = texture{ pigment {C_putty} finish {F_dull} normal {N_flat}};
#declare T_putty_satin = texture{ pigment {C_putty} finish {F_satin} normal {N_flat}};
#declare T_putty_gloss = texture{ pigment {C_putty} finish {F_gloss} normal {N_flat}};
#declare T_putty_metal = texture{ pigment {C_putty} finish {F_metal} normal {N_flat}};

#declare T_tan_matt = texture{ pigment {C_tan} finish {F_matt} normal {N_flat}};
#declare T_tan_dull = texture{ pigment {C_tan} finish {F_dull} normal {N_flat}};
#declare T_tan_satin = texture{ pigment {C_tan} finish {F_satin} normal {N_flat}};
#declare T_tan_gloss = texture{ pigment {C_tan} finish {F_gloss} normal {N_flat}};
#declare T_tan_metal = texture{ pigment {C_tan} finish {F_metal} normal {N_flat}};

#declare T_light_tan_matt = texture{ pigment {C_light_tan} finish {F_matt} normal {N_flat}};
#declare T_light_tan_dull = texture{ pigment {C_light_tan} finish {F_dull} normal {N_flat}};
#declare T_light_tan_satin = texture{ pigment {C_light_tan} finish {F_satin} normal {N_flat}};
#declare T_light_tan_gloss = texture{ pigment {C_light_tan} finish {F_gloss} normal {N_flat}};
#declare T_light_tan_metal = texture{ pigment {C_light_tan} finish {F_metal} normal {N_flat}};

#declare T_dark_tan_matt = texture{ pigment {C_dark_tan} finish {F_matt} normal {N_flat}};
#declare T_dark_tan_dull = texture{ pigment {C_dark_tan} finish {F_dull} normal {N_flat}};
#declare T_dark_tan_satin = texture{ pigment {C_dark_tan} finish {F_satin} normal {N_flat}};
#declare T_dark_tan_gloss = texture{ pigment {C_dark_tan} finish {F_gloss} normal {N_flat}};
#declare T_dark_tan_metal = texture{ pigment {C_dark_tan} finish {F_metal} normal {N_flat}};

#declare T_beige_matt = texture{ pigment {C_beige} finish {F_matt} normal {N_flat}};
#declare T_beige_dull = texture{ pigment {C_beige} finish {F_dull} normal {N_flat}};
#declare T_beige_satin = texture{ pigment {C_beige} finish {F_satin} normal {N_flat}};
#declare T_beige_gloss = texture{ pigment {C_beige} finish {F_gloss} normal {N_flat}};
#declare T_beige_metal = texture{ pigment {C_beige} finish {F_metal} normal {N_flat}};

#declare T_sand_matt = texture{ pigment {C_sand} finish {F_matt} normal {N_flat}};
#declare T_sand_dull = texture{ pigment {C_sand} finish {F_dull} normal {N_flat}};
#declare T_sand_satin = texture{ pigment {C_sand} finish {F_satin} normal {N_flat}};
#declare T_sand_gloss = texture{ pigment {C_sand} finish {F_gloss} normal {N_flat}};
#declare T_sand_metal = texture{ pigment {C_sand} finish {F_metal} normal {N_flat}};

#declare T_off_white_matt = texture{ pigment {C_off_white} finish {F_matt} normal {N_flat}};
#declare T_off_white_dull = texture{ pigment {C_off_white} finish {F_dull} normal {N_flat}};
#declare T_off_white_satin = texture{ pigment {C_off_white} finish {F_satin} normal {N_flat}};
#declare T_off_white_gloss = texture{ pigment {C_off_white} finish {F_gloss} normal {N_flat}};
#declare T_off_white_metal = texture{ pigment {C_off_white} finish {F_metal} normal {N_flat}};

#declare T_pearl_matt = texture{ pigment {C_pearl} finish {F_matt} normal {N_flat}};
#declare T_pearl_dull = texture{ pigment {C_pearl} finish {F_dull} normal {N_flat}};
#declare T_pearl_satin = texture{ pigment {C_pearl} finish {F_satin} normal {N_flat}};
#declare T_pearl_gloss = texture{ pigment {C_pearl} finish {F_gloss} normal {N_flat}};
#declare T_pearl_metal = texture{ pigment {C_pearl} finish {F_metal} normal {N_flat}};

#declare T_ivory_matt = texture{ pigment {C_ivory} finish {F_matt} normal {N_flat}};
#declare T_ivory_dull = texture{ pigment {C_ivory} finish {F_dull} normal {N_flat}};
#declare T_ivory_satin = texture{ pigment {C_ivory} finish {F_satin} normal {N_flat}};
#declare T_ivory_gloss = texture{ pigment {C_ivory} finish {F_gloss} normal {N_flat}};
#declare T_ivory_metal = texture{ pigment {C_ivory} finish {F_metal} normal {N_flat}};

#declare T_cream_matt = texture{ pigment {C_cream} finish {F_matt} normal {N_flat}};
#declare T_cream_dull = texture{ pigment {C_cream} finish {F_dull} normal {N_flat}};
#declare T_cream_satin = texture{ pigment {C_cream} finish {F_satin} normal {N_flat}};
#declare T_cream_gloss = texture{ pigment {C_cream} finish {F_gloss} normal {N_flat}};
#declare T_cream_metal = texture{ pigment {C_cream} finish {F_metal} normal {N_flat}};

#declare T_dark_cream_matt = texture{ pigment {C_dark_cream} finish {F_matt} normal {N_flat}};
#declare T_dark_cream_dull = texture{ pigment {C_dark_cream} finish {F_dull} normal {N_flat}};
#declare T_dark_cream_satin = texture{ pigment {C_dark_cream} finish {F_satin} normal {N_flat}};
#declare T_dark_cream_gloss = texture{ pigment {C_dark_cream} finish {F_gloss} normal {N_flat}};
#declare T_dark_cream_metal = texture{ pigment {C_dark_cream} finish {F_metal} normal {N_flat}};

#declare T_champagne_matt = texture{ pigment {C_champagne} finish {F_matt} normal {N_flat}};
#declare T_champagne_dull = texture{ pigment {C_champagne} finish {F_dull} normal {N_flat}};
#declare T_champagne_satin = texture{ pigment {C_champagne} finish {F_satin} normal {N_flat}};
#declare T_champagne_gloss = texture{ pigment {C_champagne} finish {F_gloss} normal {N_flat}};
#declare T_champagne_metal = texture{ pigment {C_champagne} finish {F_metal} normal {N_flat}};

#declare T_wheat_matt = texture{ pigment {C_wheat} finish {F_matt} normal {N_flat}};
#declare T_wheat_dull = texture{ pigment {C_wheat} finish {F_dull} normal {N_flat}};
#declare T_wheat_satin = texture{ pigment {C_wheat} finish {F_satin} normal {N_flat}};
#declare T_wheat_gloss = texture{ pigment {C_wheat} finish {F_gloss} normal {N_flat}};
#declare T_wheat_metal = texture{ pigment {C_wheat} finish {F_metal} normal {N_flat}};




#declare T_bevel_overlay =  
texture{ 
    pigment {P_bevel_overlay} 
    normal  {N_bevel bump_size .8} 
    finish  {F_dull}
}

#declare T_bevel_overlay_dark =  
texture{ 
    pigment {P_bevel_overlay translate <.5,.5,.5>}
    normal  {N_bevel_tile bump_size 2} 
    //finish  {F_satin}
}


// -----------------------------------------------------------------------------------------
//                      M A T E R I A L S
//------------------------------------------------------------------------------------------ 

#declare M_clear_matt = material{ texture{T_clear_matt}};
#declare M_clear_dull = material{ texture{T_clear_dull}};
#declare M_clear_satin = material{ texture{T_clear_satin}};
#declare M_clear_gloss = material{ texture{T_clear_gloss}};
#declare M_clear_metal = material{ texture{T_clear_metal}};

#declare M_white_matt = material{ texture{T_white_matt}};
#declare M_white_dull = material{ texture{T_white_dull}};
#declare M_white_satin = material{ texture{T_white_satin}};
#declare M_white_gloss = material{ texture{T_white_gloss}};
#declare M_white_metal = material{ texture{T_white_metal}};

#declare M_black_matt = material{ texture{T_black_matt}};
#declare M_black_dull = material{ texture{T_black_dull}};
#declare M_black_satin = material{ texture{T_black_satin}};
#declare M_black_gloss = material{ texture{T_black_gloss}};
#declare M_black_metal = material{ texture{T_black_metal}};

#declare M_red_matt = material{ texture{T_red_matt}};
#declare M_red_dull = material{ texture{T_red_dull}};
#declare M_red_satin = material{ texture{T_red_satin}};
#declare M_red_gloss = material{ texture{T_red_gloss}};
#declare M_red_metal = material{ texture{T_red_metal}};

#declare M_light_red_matt = material{ texture{T_light_red_matt}};
#declare M_light_red_dull = material{ texture{T_light_red_dull}};
#declare M_light_red_satin = material{ texture{T_light_red_satin}};
#declare M_light_red_gloss = material{ texture{T_light_red_gloss}};
#declare M_light_red_metal = material{ texture{T_light_red_metal}};

#declare M_dark_red_matt = material{ texture{T_dark_red_matt}};
#declare M_dark_red_dull = material{ texture{T_dark_red_dull}};
#declare M_dark_red_satin = material{ texture{T_dark_red_satin}};
#declare M_dark_red_gloss = material{ texture{T_dark_red_gloss}};
#declare M_dark_red_metal = material{ texture{T_dark_red_metal}};

#declare M_scarlet_red_matt = material{ texture{T_scarlet_red_matt}};
#declare M_scarlet_red_dull = material{ texture{T_scarlet_red_dull}};
#declare M_scarlet_red_satin = material{ texture{T_scarlet_red_satin}};
#declare M_scarlet_red_gloss = material{ texture{T_scarlet_red_gloss}};
#declare M_scarlet_red_metal = material{ texture{T_scarlet_red_metal}};

#declare M_vermilion_matt = material{ texture{T_vermilion_matt}};
#declare M_vermilion_dull = material{ texture{T_vermilion_dull}};
#declare M_vermilion_satin = material{ texture{T_vermilion_satin}};
#declare M_vermilion_gloss = material{ texture{T_vermilion_gloss}};
#declare M_vermilion_metal = material{ texture{T_vermilion_metal}};

#declare M_blood_red_matt = material{ texture{T_blood_red_matt}};
#declare M_blood_red_dull = material{ texture{T_blood_red_dull}};
#declare M_blood_red_satin = material{ texture{T_blood_red_satin}};
#declare M_blood_red_gloss = material{ texture{T_blood_red_gloss}};
#declare M_blood_red_metal = material{ texture{T_blood_red_metal}};

#declare M_crimson_red_matt = material{ texture{T_crimson_red_matt}};
#declare M_crimson_red_dull = material{ texture{T_crimson_red_dull}};
#declare M_crimson_red_satin = material{ texture{T_crimson_red_satin}};
#declare M_crimson_red_gloss = material{ texture{T_crimson_red_gloss}};
#declare M_crimson_red_metal = material{ texture{T_crimson_red_metal}};

#declare M_midnight_matt = material{ texture{T_midnight_matt}};
#declare M_midnight_dull = material{ texture{T_midnight_dull}};
#declare M_midnight_satin = material{ texture{T_midnight_satin}};
#declare M_midnight_gloss = material{ texture{T_midnight_gloss}};
#declare M_midnight_metal = material{ texture{T_midnight_metal}};

#declare M_salmon_matt = material{ texture{T_salmon_matt}};
#declare M_salmon_dull = material{ texture{T_salmon_dull}};
#declare M_salmon_satin = material{ texture{T_salmon_satin}};
#declare M_salmon_gloss = material{ texture{T_salmon_gloss}};
#declare M_salmon_metal = material{ texture{T_salmon_metal}};

#declare M_rose_matt = material{ texture{T_rose_matt}};
#declare M_rose_dull = material{ texture{T_rose_dull}};
#declare M_rose_satin = material{ texture{T_rose_satin}};
#declare M_rose_gloss = material{ texture{T_rose_gloss}};
#declare M_rose_metal = material{ texture{T_rose_metal}};

#declare M_dusty_rose_matt = material{ texture{T_dusty_rose_matt}};
#declare M_dusty_rose_dull = material{ texture{T_dusty_rose_dull}};
#declare M_dusty_rose_satin = material{ texture{T_dusty_rose_satin}};
#declare M_dusty_rose_gloss = material{ texture{T_dusty_rose_gloss}};
#declare M_dusty_rose_metal = material{ texture{T_dusty_rose_metal}};

#declare M_pink_matt = material{ texture{T_pink_matt}};
#declare M_pink_dull = material{ texture{T_pink_dull}};
#declare M_pink_satin = material{ texture{T_pink_satin}};
#declare M_pink_gloss = material{ texture{T_pink_gloss}};
#declare M_pink_metal = material{ texture{T_pink_metal}};

#declare M_coral_matt = material{ texture{T_coral_matt}};
#declare M_coral_dull = material{ texture{T_coral_dull}};
#declare M_coral_satin = material{ texture{T_coral_satin}};
#declare M_coral_gloss = material{ texture{T_coral_gloss}};
#declare M_coral_metal = material{ texture{T_coral_metal}};

#declare M_cyan_matt = material{ texture{T_cyan_matt}};
#declare M_cyan_dull = material{ texture{T_cyan_dull}};
#declare M_cyan_satin = material{ texture{T_cyan_satin}};
#declare M_cyan_gloss = material{ texture{T_cyan_gloss}};
#declare M_cyan_metal = material{ texture{T_cyan_metal}};

#declare M_light_cyan_matt = material{ texture{T_light_cyan_matt}};
#declare M_light_cyan_dull = material{ texture{T_light_cyan_dull}};
#declare M_light_cyan_satin = material{ texture{T_light_cyan_satin}};
#declare M_light_cyan_gloss = material{ texture{T_light_cyan_gloss}};
#declare M_light_cyan_metal = material{ texture{T_light_cyan_metal}};

#declare M_dark_cyan_matt = material{ texture{T_dark_cyan_matt}};
#declare M_dark_cyan_dull = material{ texture{T_dark_cyan_dull}};
#declare M_dark_cyan_satin = material{ texture{T_dark_cyan_satin}};
#declare M_dark_cyan_gloss = material{ texture{T_dark_cyan_gloss}};
#declare M_dark_cyan_metal = material{ texture{T_dark_cyan_metal}};

#declare M_blue_matt = material{ texture{T_blue_matt}};
#declare M_blue_dull = material{ texture{T_blue_dull}};
#declare M_blue_satin = material{ texture{T_blue_satin}};
#declare M_blue_gloss = material{ texture{T_blue_gloss}};
#declare M_blue_metal = material{ texture{T_blue_metal}};

#declare M_light_blue_matt = material{ texture{T_light_blue_matt}};
#declare M_light_blue_dull = material{ texture{T_light_blue_dull}};
#declare M_light_blue_satin = material{ texture{T_light_blue_satin}};
#declare M_light_blue_gloss = material{ texture{T_light_blue_gloss}};
#declare M_light_blue_metal = material{ texture{T_light_blue_metal}};

#declare M_dark_blue_matt = material{ texture{T_dark_blue_matt}};
#declare M_dark_blue_dull = material{ texture{T_dark_blue_dull}};
#declare M_dark_blue_satin = material{ texture{T_dark_blue_satin}};
#declare M_dark_blue_gloss = material{ texture{T_dark_blue_gloss}};
#declare M_dark_blue_metal = material{ texture{T_dark_blue_metal}};

#declare M_dark_gray_blue_matt = material{ texture{T_dark_gray_blue_matt}};
#declare M_dark_gray_blue_dull = material{ texture{T_dark_gray_blue_dull}};
#declare M_dark_gray_blue_satin = material{ texture{T_dark_gray_blue_satin}};
#declare M_dark_gray_blue_gloss = material{ texture{T_dark_gray_blue_gloss}};
#declare M_dark_gray_blue_metal = material{ texture{T_dark_gray_blue_metal}};

#declare M_charcoal_blue_matt = material{ texture{T_charcoal_blue_matt}};
#declare M_charcoal_blue_dull = material{ texture{T_charcoal_blue_dull}};
#declare M_charcoal_blue_satin = material{ texture{T_charcoal_blue_satin}};
#declare M_charcoal_blue_gloss = material{ texture{T_charcoal_blue_gloss}};
#declare M_charcoal_blue_metal = material{ texture{T_charcoal_blue_metal}};

#declare M_navy_blue_matt = material{ texture{T_navy_blue_matt}};
#declare M_navy_blue_dull = material{ texture{T_navy_blue_dull}};
#declare M_navy_blue_satin = material{ texture{T_navy_blue_satin}};
#declare M_navy_blue_gloss = material{ texture{T_navy_blue_gloss}};
#declare M_navy_blue_metal = material{ texture{T_navy_blue_metal}};

#declare M_horizon_blue_matt = material{ texture{T_horizon_blue_matt}};
#declare M_horizon_blue_dull = material{ texture{T_horizon_blue_dull}};
#declare M_horizon_blue_satin = material{ texture{T_horizon_blue_satin}};
#declare M_horizon_blue_gloss = material{ texture{T_horizon_blue_gloss}};
#declare M_horizon_blue_metal = material{ texture{T_horizon_blue_metal}};

#declare M_sky_blue_matt = material{ texture{T_sky_blue_matt}};
#declare M_sky_blue_dull = material{ texture{T_sky_blue_dull}};
#declare M_sky_blue_satin = material{ texture{T_sky_blue_satin}};
#declare M_sky_blue_gloss = material{ texture{T_sky_blue_gloss}};
#declare M_sky_blue_metal = material{ texture{T_sky_blue_metal}};

#declare M_cornflower_blue_matt = material{ texture{T_cornflower_blue_matt}};
#declare M_cornflower_blue_dull = material{ texture{T_cornflower_blue_dull}};
#declare M_cornflower_blue_satin = material{ texture{T_cornflower_blue_satin}};
#declare M_cornflower_blue_gloss = material{ texture{T_cornflower_blue_gloss}};
#declare M_cornflower_blue_metal = material{ texture{T_cornflower_blue_metal}};

#declare M_powder_blue_matt = material{ texture{T_powder_blue_matt}};
#declare M_powder_blue_dull = material{ texture{T_powder_blue_dull}};
#declare M_powder_blue_satin = material{ texture{T_powder_blue_satin}};
#declare M_powder_blue_gloss = material{ texture{T_powder_blue_gloss}};
#declare M_powder_blue_metal = material{ texture{T_powder_blue_metal}};

#declare M_midnight_blue_matt = material{ texture{T_midnight_blue_matt}};
#declare M_midnight_blue_dull = material{ texture{T_midnight_blue_dull}};
#declare M_midnight_blue_satin = material{ texture{T_midnight_blue_satin}};
#declare M_midnight_blue_gloss = material{ texture{T_midnight_blue_gloss}};
#declare M_midnight_blue_metal = material{ texture{T_midnight_blue_metal}};

#declare M_cobalt_blue_matt = material{ texture{T_cobalt_blue_matt}};
#declare M_cobalt_blue_dull = material{ texture{T_cobalt_blue_dull}};
#declare M_cobalt_blue_satin = material{ texture{T_cobalt_blue_satin}};
#declare M_cobalt_blue_gloss = material{ texture{T_cobalt_blue_gloss}};
#declare M_cobalt_blue_metal = material{ texture{T_cobalt_blue_metal}};

#declare M_teal_matt = material{ texture{T_teal_matt}};
#declare M_teal_dull = material{ texture{T_teal_dull}};
#declare M_teal_satin = material{ texture{T_teal_satin}};
#declare M_teal_gloss = material{ texture{T_teal_gloss}};
#declare M_teal_metal = material{ texture{T_teal_metal}};

#declare M_purple_matt = material{ texture{T_purple_matt}};
#declare M_purple_dull = material{ texture{T_purple_dull}};
#declare M_purple_satin = material{ texture{T_purple_satin}};
#declare M_purple_gloss = material{ texture{T_purple_gloss}};
#declare M_purple_metal = material{ texture{T_purple_metal}};

#declare M_light_purple_matt = material{ texture{T_light_purple_matt}};
#declare M_light_purple_dull = material{ texture{T_light_purple_dull}};
#declare M_light_purple_satin = material{ texture{T_light_purple_satin}};
#declare M_light_purple_gloss = material{ texture{T_light_purple_gloss}};
#declare M_light_purple_metal = material{ texture{T_light_purple_metal}};

#declare M_dark_purple_matt = material{ texture{T_dark_purple_matt}};
#declare M_dark_purple_dull = material{ texture{T_dark_purple_dull}};
#declare M_dark_purple_satin = material{ texture{T_dark_purple_satin}};
#declare M_dark_purple_gloss = material{ texture{T_dark_purple_gloss}};
#declare M_dark_purple_metal = material{ texture{T_dark_purple_metal}};

#declare M_maroon_matt = material{ texture{T_maroon_matt}};
#declare M_maroon_dull = material{ texture{T_maroon_dull}};
#declare M_maroon_satin = material{ texture{T_maroon_satin}};
#declare M_maroon_gloss = material{ texture{T_maroon_gloss}};
#declare M_maroon_metal = material{ texture{T_maroon_metal}};

#declare M_purple_maroon_matt = material{ texture{T_purple_maroon_matt}};
#declare M_purple_maroon_dull = material{ texture{T_purple_maroon_dull}};
#declare M_purple_maroon_satin = material{ texture{T_purple_maroon_satin}};
#declare M_purple_maroon_gloss = material{ texture{T_purple_maroon_gloss}};
#declare M_purple_maroon_metal = material{ texture{T_purple_maroon_metal}};

#declare M_mauve_matt = material{ texture{T_mauve_matt}};
#declare M_mauve_dull = material{ texture{T_mauve_dull}};
#declare M_mauve_satin = material{ texture{T_mauve_satin}};
#declare M_mauve_gloss = material{ texture{T_mauve_gloss}};
#declare M_mauve_metal = material{ texture{T_mauve_metal}};

#declare M_dark_mauve_matt = material{ texture{T_dark_mauve_matt}};
#declare M_dark_mauve_dull = material{ texture{T_dark_mauve_dull}};
#declare M_dark_mauve_satin = material{ texture{T_dark_mauve_satin}};
#declare M_dark_mauve_gloss = material{ texture{T_dark_mauve_gloss}};
#declare M_dark_mauve_metal = material{ texture{T_dark_mauve_metal}};

#declare M_plum_matt = material{ texture{T_plum_matt}};
#declare M_plum_dull = material{ texture{T_plum_dull}};
#declare M_plum_satin = material{ texture{T_plum_satin}};
#declare M_plum_gloss = material{ texture{T_plum_gloss}};
#declare M_plum_metal = material{ texture{T_plum_metal}};

#declare M_lavender_matt = material{ texture{T_lavender_matt}};
#declare M_lavender_dull = material{ texture{T_lavender_dull}};
#declare M_lavender_satin = material{ texture{T_lavender_satin}};
#declare M_lavender_gloss = material{ texture{T_lavender_gloss}};
#declare M_lavender_metal = material{ texture{T_lavender_metal}};

#declare M_cranberry_matt = material{ texture{T_cranberry_matt}};
#declare M_cranberry_dull = material{ texture{T_cranberry_dull}};
#declare M_cranberry_satin = material{ texture{T_cranberry_satin}};
#declare M_cranberry_gloss = material{ texture{T_cranberry_gloss}};
#declare M_cranberry_metal = material{ texture{T_cranberry_metal}};

#declare M_magenta_matt = material{ texture{T_magenta_matt}};
#declare M_magenta_dull = material{ texture{T_magenta_dull}};
#declare M_magenta_satin = material{ texture{T_magenta_satin}};
#declare M_magenta_gloss = material{ texture{T_magenta_gloss}};
#declare M_magenta_metal = material{ texture{T_magenta_metal}};

#declare M_violet_matt = material{ texture{T_violet_matt}};
#declare M_violet_dull = material{ texture{T_violet_dull}};
#declare M_violet_satin = material{ texture{T_violet_satin}};
#declare M_violet_gloss = material{ texture{T_violet_gloss}};
#declare M_violet_metal = material{ texture{T_violet_metal}};

#declare M_lilac_matt = material{ texture{T_lilac_matt}};
#declare M_lilac_dull = material{ texture{T_lilac_dull}};
#declare M_lilac_satin = material{ texture{T_lilac_satin}};
#declare M_lilac_gloss = material{ texture{T_lilac_gloss}};
#declare M_lilac_metal = material{ texture{T_lilac_metal}};

#declare M_grape_matt = material{ texture{T_grape_matt}};
#declare M_grape_dull = material{ texture{T_grape_dull}};
#declare M_grape_satin = material{ texture{T_grape_satin}};
#declare M_grape_gloss = material{ texture{T_grape_gloss}};
#declare M_grape_metal = material{ texture{T_grape_metal}};

#declare M_green_matt = material{ texture{T_green_matt}};
#declare M_green_dull = material{ texture{T_green_dull}};
#declare M_green_satin = material{ texture{T_green_satin}};
#declare M_green_gloss = material{ texture{T_green_gloss}};
#declare M_green_metal = material{ texture{T_green_metal}};

#declare M_dark_green_matt = material{ texture{T_dark_green_matt}};
#declare M_dark_green_dull = material{ texture{T_dark_green_dull}};
#declare M_dark_green_satin = material{ texture{T_dark_green_satin}};
#declare M_dark_green_gloss = material{ texture{T_dark_green_gloss}};
#declare M_dark_green_metal = material{ texture{T_dark_green_metal}};

#declare M_light_green_matt = material{ texture{T_light_green_matt}};
#declare M_light_green_dull = material{ texture{T_light_green_dull}};
#declare M_light_green_satin = material{ texture{T_light_green_satin}};
#declare M_light_green_gloss = material{ texture{T_light_green_gloss}};
#declare M_light_green_metal = material{ texture{T_light_green_metal}};

#declare M_emerald_green_matt = material{ texture{T_emerald_green_matt}};
#declare M_emerald_green_dull = material{ texture{T_emerald_green_dull}};
#declare M_emerald_green_satin = material{ texture{T_emerald_green_satin}};
#declare M_emerald_green_gloss = material{ texture{T_emerald_green_gloss}};
#declare M_emerald_green_metal = material{ texture{T_emerald_green_metal}};

#declare M_lime_green_matt = material{ texture{T_lime_green_matt}};
#declare M_lime_green_dull = material{ texture{T_lime_green_dull}};
#declare M_lime_green_satin = material{ texture{T_lime_green_satin}};
#declare M_lime_green_gloss = material{ texture{T_lime_green_gloss}};
#declare M_lime_green_metal = material{ texture{T_lime_green_metal}};

#declare M_green_apple_matt = material{ texture{T_green_apple_matt}};
#declare M_green_apple_dull = material{ texture{T_green_apple_dull}};
#declare M_green_apple_satin = material{ texture{T_green_apple_satin}};
#declare M_green_apple_gloss = material{ texture{T_green_apple_gloss}};
#declare M_green_apple_metal = material{ texture{T_green_apple_metal}};

#declare M_pea_green_matt = material{ texture{T_pea_green_matt}};
#declare M_pea_green_dull = material{ texture{T_pea_green_dull}};
#declare M_pea_green_satin = material{ texture{T_pea_green_satin}};
#declare M_pea_green_gloss = material{ texture{T_pea_green_gloss}};
#declare M_pea_green_metal = material{ texture{T_pea_green_metal}};

#declare M_forest_green_matt = material{ texture{T_forest_green_matt}};
#declare M_forest_green_dull = material{ texture{T_forest_green_dull}};
#declare M_forest_green_satin = material{ texture{T_forest_green_satin}};
#declare M_forest_green_gloss = material{ texture{T_forest_green_gloss}};
#declare M_forest_green_metal = material{ texture{T_forest_green_metal}};

#declare M_olive_green_matt = material{ texture{T_olive_green_matt}};
#declare M_olive_green_dull = material{ texture{T_olive_green_dull}};
#declare M_olive_green_satin = material{ texture{T_olive_green_satin}};
#declare M_olive_green_gloss = material{ texture{T_olive_green_gloss}};
#declare M_olive_green_metal = material{ texture{T_olive_green_metal}};

#declare M_yellow_green_matt = material{ texture{T_yellow_green_matt}};
#declare M_yellow_green_dull = material{ texture{T_yellow_green_dull}};
#declare M_yellow_green_satin = material{ texture{T_yellow_green_satin}};
#declare M_yellow_green_gloss = material{ texture{T_yellow_green_gloss}};
#declare M_yellow_green_metal = material{ texture{T_yellow_green_metal}};

#declare M_kelly_green_matt = material{ texture{T_kelly_green_matt}};
#declare M_kelly_green_dull = material{ texture{T_kelly_green_dull}};
#declare M_kelly_green_satin = material{ texture{T_kelly_green_satin}};
#declare M_kelly_green_gloss = material{ texture{T_kelly_green_gloss}};
#declare M_kelly_green_metal = material{ texture{T_kelly_green_metal}};

#declare M_chartreuse_matt = material{ texture{T_chartreuse_matt}};
#declare M_chartreuse_dull = material{ texture{T_chartreuse_dull}};
#declare M_chartreuse_satin = material{ texture{T_chartreuse_satin}};
#declare M_chartreuse_gloss = material{ texture{T_chartreuse_gloss}};
#declare M_chartreuse_metal = material{ texture{T_chartreuse_metal}};

#declare M_mint_green_matt = material{ texture{T_mint_green_matt}};
#declare M_mint_green_dull = material{ texture{T_mint_green_dull}};
#declare M_mint_green_satin = material{ texture{T_mint_green_satin}};
#declare M_mint_green_gloss = material{ texture{T_mint_green_gloss}};
#declare M_mint_green_metal = material{ texture{T_mint_green_metal}};

#declare M_sea_green_matt = material{ texture{T_sea_green_matt}};
#declare M_sea_green_dull = material{ texture{T_sea_green_dull}};
#declare M_sea_green_satin = material{ texture{T_sea_green_satin}};
#declare M_sea_green_gloss = material{ texture{T_sea_green_gloss}};
#declare M_sea_green_metal = material{ texture{T_sea_green_metal}};

#declare M_khaki_green_matt = material{ texture{T_khaki_green_matt}};
#declare M_khaki_green_dull = material{ texture{T_khaki_green_dull}};
#declare M_khaki_green_satin = material{ texture{T_khaki_green_satin}};
#declare M_khaki_green_gloss = material{ texture{T_khaki_green_gloss}};
#declare M_khaki_green_metal = material{ texture{T_khaki_green_metal}};

#declare M_turquoise_matt = material{ texture{T_turquoise_matt}};
#declare M_turquoise_dull = material{ texture{T_turquoise_dull}};
#declare M_turquoise_satin = material{ texture{T_turquoise_satin}};
#declare M_turquoise_gloss = material{ texture{T_turquoise_gloss}};
#declare M_turquoise_metal = material{ texture{T_turquoise_metal}};

#declare M_yellow_matt = material{ texture{T_yellow_matt}};
#declare M_yellow_dull = material{ texture{T_yellow_dull}};
#declare M_yellow_satin = material{ texture{T_yellow_satin}};
#declare M_yellow_gloss = material{ texture{T_yellow_gloss}};
#declare M_yellow_metal = material{ texture{T_yellow_metal}};

#declare M_light_yellow_matt = material{ texture{T_light_yellow_matt}};
#declare M_light_yellow_dull = material{ texture{T_light_yellow_dull}};
#declare M_light_yellow_satin = material{ texture{T_light_yellow_satin}};
#declare M_light_yellow_gloss = material{ texture{T_light_yellow_gloss}};
#declare M_light_yellow_metal = material{ texture{T_light_yellow_metal}};

#declare M_mustard_yellow_matt = material{ texture{T_mustard_yellow_matt}};
#declare M_mustard_yellow_dull = material{ texture{T_mustard_yellow_dull}};
#declare M_mustard_yellow_satin = material{ texture{T_mustard_yellow_satin}};
#declare M_mustard_yellow_gloss = material{ texture{T_mustard_yellow_gloss}};
#declare M_mustard_yellow_metal = material{ texture{T_mustard_yellow_metal}};

#declare M_canary_yellow_matt = material{ texture{T_canary_yellow_matt}};
#declare M_canary_yellow_dull = material{ texture{T_canary_yellow_dull}};
#declare M_canary_yellow_satin = material{ texture{T_canary_yellow_satin}};
#declare M_canary_yellow_gloss = material{ texture{T_canary_yellow_gloss}};
#declare M_canary_yellow_metal = material{ texture{T_canary_yellow_metal}};

#declare M_safty_yellow_matt = material{ texture{T_safty_yellow_matt}};
#declare M_safty_yellow_dull = material{ texture{T_safty_yellow_dull}};
#declare M_safty_yellow_satin = material{ texture{T_safty_yellow_satin}};
#declare M_safty_yellow_gloss = material{ texture{T_safty_yellow_gloss}};
#declare M_safty_yellow_metal = material{ texture{T_safty_yellow_metal}};

#declare M_golden_yellow_matt = material{ texture{T_golden_yellow_matt}};
#declare M_golden_yellow_dull = material{ texture{T_golden_yellow_dull}};
#declare M_golden_yellow_satin = material{ texture{T_golden_yellow_satin}};
#declare M_golden_yellow_gloss = material{ texture{T_golden_yellow_gloss}};
#declare M_golden_yellow_metal = material{ texture{T_golden_yellow_metal}};

#declare M_goldenrod_matt = material{ texture{T_goldenrod_matt}};
#declare M_goldenrod_dull = material{ texture{T_goldenrod_dull}};
#declare M_goldenrod_satin = material{ texture{T_goldenrod_satin}};
#declare M_goldenrod_gloss = material{ texture{T_goldenrod_gloss}};
#declare M_goldenrod_metal = material{ texture{T_goldenrod_metal}};

#declare M_orange_matt = material{ texture{T_orange_matt}};
#declare M_orange_dull = material{ texture{T_orange_dull}};
#declare M_orange_satin = material{ texture{T_orange_satin}};
#declare M_orange_gloss = material{ texture{T_orange_gloss}};
#declare M_orange_metal = material{ texture{T_orange_metal}};

#declare M_light_orange_matt = material{ texture{T_light_orange_matt}};
#declare M_light_orange_dull = material{ texture{T_light_orange_dull}};
#declare M_light_orange_satin = material{ texture{T_light_orange_satin}};
#declare M_light_orange_gloss = material{ texture{T_light_orange_gloss}};
#declare M_light_orange_metal = material{ texture{T_light_orange_metal}};

#declare M_dark_orange_matt = material{ texture{T_dark_orange_matt}};
#declare M_dark_orange_dull = material{ texture{T_dark_orange_dull}};
#declare M_dark_orange_satin = material{ texture{T_dark_orange_satin}};
#declare M_dark_orange_gloss = material{ texture{T_dark_orange_gloss}};
#declare M_dark_orange_metal = material{ texture{T_dark_orange_metal}};

#declare M_peach_matt = material{ texture{T_peach_matt}};
#declare M_peach_dull = material{ texture{T_peach_dull}};
#declare M_peach_satin = material{ texture{T_peach_satin}};
#declare M_peach_gloss = material{ texture{T_peach_gloss}};
#declare M_peach_metal = material{ texture{T_peach_metal}};

#declare M_burnt_orange_matt = material{ texture{T_burnt_orange_matt}};
#declare M_burnt_orange_dull = material{ texture{T_burnt_orange_dull}};
#declare M_burnt_orange_satin = material{ texture{T_burnt_orange_satin}};
#declare M_burnt_orange_gloss = material{ texture{T_burnt_orange_gloss}};
#declare M_burnt_orange_metal = material{ texture{T_burnt_orange_metal}};

#declare M_rust_matt = material{ texture{T_rust_matt}};
#declare M_rust_dull = material{ texture{T_rust_dull}};
#declare M_rust_satin = material{ texture{T_rust_satin}};
#declare M_rust_gloss = material{ texture{T_rust_gloss}};
#declare M_rust_metal = material{ texture{T_rust_metal}};

#declare M_rust_red_matt = material{ texture{T_rust_red_matt}};
#declare M_rust_red_dull = material{ texture{T_rust_red_dull}};
#declare M_rust_red_satin = material{ texture{T_rust_red_satin}};
#declare M_rust_red_gloss = material{ texture{T_rust_red_gloss}};
#declare M_rust_red_metal = material{ texture{T_rust_red_metal}};

#declare M_rust_gray_matt = material{ texture{T_rust_gray_matt}};
#declare M_rust_gray_dull = material{ texture{T_rust_gray_dull}};
#declare M_rust_gray_satin = material{ texture{T_rust_gray_satin}};
#declare M_rust_gray_gloss = material{ texture{T_rust_gray_gloss}};
#declare M_rust_gray_metal = material{ texture{T_rust_gray_metal}};

#declare M_rust_gray_dark_matt = material{ texture{T_rust_gray_dark_matt}};
#declare M_rust_gray_dark_dull = material{ texture{T_rust_gray_dark_dull}};
#declare M_rust_gray_dark_satin = material{ texture{T_rust_gray_dark_satin}};
#declare M_rust_gray_dark_gloss = material{ texture{T_rust_gray_dark_gloss}};
#declare M_rust_gray_dark_metal = material{ texture{T_rust_gray_dark_metal}};

#declare M_brown_matt = material{ texture{T_brown_matt}};
#declare M_brown_dull = material{ texture{T_brown_dull}};
#declare M_brown_satin = material{ texture{T_brown_satin}};
#declare M_brown_gloss = material{ texture{T_brown_gloss}};
#declare M_brown_metal = material{ texture{T_brown_metal}};

#declare M_light_brown_matt = material{ texture{T_light_brown_matt}};
#declare M_light_brown_dull = material{ texture{T_light_brown_dull}};
#declare M_light_brown_satin = material{ texture{T_light_brown_satin}};
#declare M_light_brown_gloss = material{ texture{T_light_brown_gloss}};
#declare M_light_brown_metal = material{ texture{T_light_brown_metal}};

#declare M_dark_brown_matt = material{ texture{T_dark_brown_matt}};
#declare M_dark_brown_dull = material{ texture{T_dark_brown_dull}};
#declare M_dark_brown_satin = material{ texture{T_dark_brown_satin}};
#declare M_dark_brown_gloss = material{ texture{T_dark_brown_gloss}};
#declare M_dark_brown_metal = material{ texture{T_dark_brown_metal}};

#declare M_sepia_brown_matt = material{ texture{T_sepia_brown_matt}};
#declare M_sepia_brown_dull = material{ texture{T_sepia_brown_dull}};
#declare M_sepia_brown_satin = material{ texture{T_sepia_brown_satin}};
#declare M_sepia_brown_gloss = material{ texture{T_sepia_brown_gloss}};
#declare M_sepia_brown_metal = material{ texture{T_sepia_brown_metal}};

#declare M_sienna_brown_matt = material{ texture{T_sienna_brown_matt}};
#declare M_sienna_brown_dull = material{ texture{T_sienna_brown_dull}};
#declare M_sienna_brown_satin = material{ texture{T_sienna_brown_satin}};
#declare M_sienna_brown_gloss = material{ texture{T_sienna_brown_gloss}};
#declare M_sienna_brown_metal = material{ texture{T_sienna_brown_metal}};

#declare M_chocolate_brown_matt = material{ texture{T_chocolate_brown_matt}};
#declare M_chocolate_brown_dull = material{ texture{T_chocolate_brown_dull}};
#declare M_chocolate_brown_satin = material{ texture{T_chocolate_brown_satin}};
#declare M_chocolate_brown_gloss = material{ texture{T_chocolate_brown_gloss}};
#declare M_chocolate_brown_metal = material{ texture{T_chocolate_brown_metal}};

#declare M_oak_brown_matt = material{ texture{T_oak_brown_matt}};
#declare M_oak_brown_dull = material{ texture{T_oak_brown_dull}};
#declare M_oak_brown_satin = material{ texture{T_oak_brown_satin}};
#declare M_oak_brown_gloss = material{ texture{T_oak_brown_gloss}};
#declare M_oak_brown_metal = material{ texture{T_oak_brown_metal}};

#declare M_mohogany_brown_matt = material{ texture{T_mohogany_brown_matt}};
#declare M_mohogany_brown_dull = material{ texture{T_mohogany_brown_dull}};
#declare M_mohogany_brown_satin = material{ texture{T_mohogany_brown_satin}};
#declare M_mohogany_brown_gloss = material{ texture{T_mohogany_brown_gloss}};
#declare M_mohogany_brown_metal = material{ texture{T_mohogany_brown_metal}};

#declare M_almond_brown_matt = material{ texture{T_almond_brown_matt}};
#declare M_almond_brown_dull = material{ texture{T_almond_brown_dull}};
#declare M_almond_brown_satin = material{ texture{T_almond_brown_satin}};
#declare M_almond_brown_gloss = material{ texture{T_almond_brown_gloss}};
#declare M_almond_brown_metal = material{ texture{T_almond_brown_metal}};

#declare M_hazel_brown_matt = material{ texture{T_hazel_brown_matt}};
#declare M_hazel_brown_dull = material{ texture{T_hazel_brown_dull}};
#declare M_hazel_brown_satin = material{ texture{T_hazel_brown_satin}};
#declare M_hazel_brown_gloss = material{ texture{T_hazel_brown_gloss}};
#declare M_hazel_brown_metal = material{ texture{T_hazel_brown_metal}};

#declare M_golden_brown_matt = material{ texture{T_golden_brown_matt}};
#declare M_golden_brown_dull = material{ texture{T_golden_brown_dull}};
#declare M_golden_brown_satin = material{ texture{T_golden_brown_satin}};
#declare M_golden_brown_gloss = material{ texture{T_golden_brown_gloss}};
#declare M_golden_brown_metal = material{ texture{T_golden_brown_metal}};

#declare M_coffee_matt = material{ texture{T_coffee_matt}};
#declare M_coffee_dull = material{ texture{T_coffee_dull}};
#declare M_coffee_satin = material{ texture{T_coffee_satin}};
#declare M_coffee_gloss = material{ texture{T_coffee_gloss}};
#declare M_coffee_metal = material{ texture{T_coffee_metal}};

#declare M_khaki_matt = material{ texture{T_khaki_matt}};
#declare M_khaki_dull = material{ texture{T_khaki_dull}};
#declare M_khaki_satin = material{ texture{T_khaki_satin}};
#declare M_khaki_gloss = material{ texture{T_khaki_gloss}};
#declare M_khaki_metal = material{ texture{T_khaki_metal}};

#declare M_copper_matt = material{ texture{T_copper_matt}};
#declare M_copper_dull = material{ texture{T_copper_dull}};
#declare M_copper_satin = material{ texture{T_copper_satin}};
#declare M_copper_gloss = material{ texture{T_copper_gloss}};
#declare M_copper_metal = material{ texture{T_copper_metal}};

#declare M_light_copper_matt = material{ texture{T_light_copper_matt}};
#declare M_light_copper_dull = material{ texture{T_light_copper_dull}};
#declare M_light_copper_satin = material{ texture{T_light_copper_satin}};
#declare M_light_copper_gloss = material{ texture{T_light_copper_gloss}};
#declare M_light_copper_metal = material{ texture{T_light_copper_metal}};

#declare M_dark_copper_matt = material{ texture{T_dark_copper_matt}};
#declare M_dark_copper_dull = material{ texture{T_dark_copper_dull}};
#declare M_dark_copper_satin = material{ texture{T_dark_copper_satin}};
#declare M_dark_copper_gloss = material{ texture{T_dark_copper_gloss}};
#declare M_dark_copper_metal = material{ texture{T_dark_copper_metal}};

#declare M_silver_matt = material{ texture{T_silver_matt}};
#declare M_silver_dull = material{ texture{T_silver_dull}};
#declare M_silver_satin = material{ texture{T_silver_satin}};
#declare M_silver_gloss = material{ texture{T_silver_gloss}};
#declare M_silver_metal = material{ texture{T_silver_metal}};

#declare M_brass_matt = material{ texture{T_brass_matt}};
#declare M_brass_dull = material{ texture{T_brass_dull}};
#declare M_brass_satin = material{ texture{T_brass_satin}};
#declare M_brass_gloss = material{ texture{T_brass_gloss}};
#declare M_brass_metal = material{ texture{T_brass_metal}};

#declare M_bronze_matt = material{ texture{T_bronze_matt}};
#declare M_bronze_dull = material{ texture{T_bronze_dull}};
#declare M_bronze_satin = material{ texture{T_bronze_satin}};
#declare M_bronze_gloss = material{ texture{T_bronze_gloss}};
#declare M_bronze_metal = material{ texture{T_bronze_metal}};

#declare M_antique_bronze_matt = material{ texture{T_antique_bronze_matt}};
#declare M_antique_bronze_dull = material{ texture{T_antique_bronze_dull}};
#declare M_antique_bronze_satin = material{ texture{T_antique_bronze_satin}};
#declare M_antique_bronze_gloss = material{ texture{T_antique_bronze_gloss}};
#declare M_antique_bronze_metal = material{ texture{T_antique_bronze_metal}};

#declare M_galvanize1_matt = material{ texture{T_galvanize1_matt}};
#declare M_galvanize1_dull = material{ texture{T_galvanize1_dull}};
#declare M_galvanize1_satin = material{ texture{T_galvanize1_satin}};
#declare M_galvanize1_gloss = material{ texture{T_galvanize1_gloss}};
#declare M_galvanize1_metal = material{ texture{T_galvanize1_metal}};

#declare M_galvanize2_matt = material{ texture{T_galvanize2_matt}};
#declare M_galvanize2_dull = material{ texture{T_galvanize2_dull}};
#declare M_galvanize2_satin = material{ texture{T_galvanize2_satin}};
#declare M_galvanize2_gloss = material{ texture{T_galvanize2_gloss}};
#declare M_galvanize2_metal = material{ texture{T_galvanize2_metal}};

#declare M_gold_matt = material{ texture{T_gold_matt}};
#declare M_gold_dull = material{ texture{T_gold_dull}};
#declare M_gold_satin = material{ texture{T_gold_satin}};
#declare M_gold_gloss = material{ texture{T_gold_gloss}};
#declare M_gold_metal = material{ texture{T_gold_metal}};

#declare M_bright_gold_matt = material{ texture{T_bright_gold_matt}};
#declare M_bright_gold_dull = material{ texture{T_bright_gold_dull}};
#declare M_bright_gold_satin = material{ texture{T_bright_gold_satin}};
#declare M_bright_gold_gloss = material{ texture{T_bright_gold_gloss}};
#declare M_bright_gold_metal = material{ texture{T_bright_gold_metal}};

#declare M_dark_gold_matt = material{ texture{T_dark_gold_matt}};
#declare M_dark_gold_dull = material{ texture{T_dark_gold_dull}};
#declare M_dark_gold_satin = material{ texture{T_dark_gold_satin}};
#declare M_dark_gold_gloss = material{ texture{T_dark_gold_gloss}};
#declare M_dark_gold_metal = material{ texture{T_dark_gold_metal}};

#declare M_saffron_gold_matt = material{ texture{T_saffron_gold_matt}};
#declare M_saffron_gold_dull = material{ texture{T_saffron_gold_dull}};
#declare M_saffron_gold_satin = material{ texture{T_saffron_gold_satin}};
#declare M_saffron_gold_gloss = material{ texture{T_saffron_gold_gloss}};
#declare M_saffron_gold_metal = material{ texture{T_saffron_gold_metal}};

#declare M_rose_gold_matt = material{ texture{T_rose_gold_matt}};
#declare M_rose_gold_dull = material{ texture{T_rose_gold_dull}};
#declare M_rose_gold_satin = material{ texture{T_rose_gold_satin}};
#declare M_rose_gold_gloss = material{ texture{T_rose_gold_gloss}};
#declare M_rose_gold_metal = material{ texture{T_rose_gold_metal}};

#declare M_gray_dark_matt = material{ texture{T_gray_dark_matt}};
#declare M_gray_dark_dull = material{ texture{T_gray_dark_dull}};
#declare M_gray_dark_satin = material{ texture{T_gray_dark_satin}};
#declare M_gray_dark_gloss = material{ texture{T_gray_dark_gloss}};
#declare M_gray_dark_metal = material{ texture{T_gray_dark_metal}};

#declare M_gray_black_matt = material{ texture{T_gray_black_matt}};
#declare M_gray_black_dull = material{ texture{T_gray_black_dull}};
#declare M_gray_black_satin = material{ texture{T_gray_black_satin}};
#declare M_gray_black_gloss = material{ texture{T_gray_black_gloss}};
#declare M_gray_black_metal = material{ texture{T_gray_black_metal}};

#declare M_gray5_matt = material{ texture{T_gray5_matt}};
#declare M_gray5_dull = material{ texture{T_gray5_dull}};
#declare M_gray5_satin = material{ texture{T_gray5_satin}};
#declare M_gray5_gloss = material{ texture{T_gray5_gloss}};
#declare M_gray5_metal = material{ texture{T_gray5_metal}};

#declare M_gray10_matt = material{ texture{T_gray10_matt}};
#declare M_gray10_dull = material{ texture{T_gray10_dull}};
#declare M_gray10_satin = material{ texture{T_gray10_satin}};
#declare M_gray10_gloss = material{ texture{T_gray10_gloss}};
#declare M_gray10_metal = material{ texture{T_gray10_metal}};

#declare M_gray20_matt = material{ texture{T_gray20_matt}};
#declare M_gray20_dull = material{ texture{T_gray20_dull}};
#declare M_gray20_satin = material{ texture{T_gray20_satin}};
#declare M_gray20_gloss = material{ texture{T_gray20_gloss}};
#declare M_gray20_metal = material{ texture{T_gray20_metal}};

#declare M_gray30_matt = material{ texture{T_gray30_matt}};
#declare M_gray30_dull = material{ texture{T_gray30_dull}};
#declare M_gray30_satin = material{ texture{T_gray30_satin}};
#declare M_gray30_gloss = material{ texture{T_gray30_gloss}};
#declare M_gray30_metal = material{ texture{T_gray30_metal}};

#declare M_gray40_matt = material{ texture{T_gray40_matt}};
#declare M_gray40_dull = material{ texture{T_gray40_dull}};
#declare M_gray40_satin = material{ texture{T_gray40_satin}};
#declare M_gray40_gloss = material{ texture{T_gray40_gloss}};
#declare M_gray40_metal = material{ texture{T_gray40_metal}};

#declare M_gray50_matt = material{ texture{T_gray50_matt}};
#declare M_gray50_dull = material{ texture{T_gray50_dull}};
#declare M_gray50_satin = material{ texture{T_gray50_satin}};
#declare M_gray50_gloss = material{ texture{T_gray50_gloss}};
#declare M_gray50_metal = material{ texture{T_gray50_metal}};

#declare M_gray60_matt = material{ texture{T_gray60_matt}};
#declare M_gray60_dull = material{ texture{T_gray60_dull}};
#declare M_gray60_satin = material{ texture{T_gray60_satin}};
#declare M_gray60_gloss = material{ texture{T_gray60_gloss}};
#declare M_gray60_metal = material{ texture{T_gray60_metal}};

#declare M_gray70_matt = material{ texture{T_gray70_matt}};
#declare M_gray70_dull = material{ texture{T_gray70_dull}};
#declare M_gray70_satin = material{ texture{T_gray70_satin}};
#declare M_gray70_gloss = material{ texture{T_gray70_gloss}};
#declare M_gray70_metal = material{ texture{T_gray70_metal}};

#declare M_gray80_matt = material{ texture{T_gray80_matt}};
#declare M_gray80_dull = material{ texture{T_gray80_dull}};
#declare M_gray80_satin = material{ texture{T_gray80_satin}};
#declare M_gray80_gloss = material{ texture{T_gray80_gloss}};
#declare M_gray80_metal = material{ texture{T_gray80_metal}};

#declare M_gray90_matt = material{ texture{T_gray90_matt}};
#declare M_gray90_dull = material{ texture{T_gray90_dull}};
#declare M_gray90_satin = material{ texture{T_gray90_satin}};
#declare M_gray90_gloss = material{ texture{T_gray90_gloss}};
#declare M_gray90_metal = material{ texture{T_gray90_metal}};

#declare M_cool_gray_matt = material{ texture{T_cool_gray_matt}};
#declare M_cool_gray_dull = material{ texture{T_cool_gray_dull}};
#declare M_cool_gray_satin = material{ texture{T_cool_gray_satin}};
#declare M_cool_gray_gloss = material{ texture{T_cool_gray_gloss}};
#declare M_cool_gray_metal = material{ texture{T_cool_gray_metal}};

#declare M_warm_gray_matt = material{ texture{T_warm_gray_matt}};
#declare M_warm_gray_dull = material{ texture{T_warm_gray_dull}};
#declare M_warm_gray_satin = material{ texture{T_warm_gray_satin}};
#declare M_warm_gray_gloss = material{ texture{T_warm_gray_gloss}};
#declare M_warm_gray_metal = material{ texture{T_warm_gray_metal}};

#declare M_yellow_gray_matt = material{ texture{T_yellow_gray_matt}};
#declare M_yellow_gray_dull = material{ texture{T_yellow_gray_dull}};
#declare M_yellow_gray_satin = material{ texture{T_yellow_gray_satin}};
#declare M_yellow_gray_gloss = material{ texture{T_yellow_gray_gloss}};
#declare M_yellow_gray_metal = material{ texture{T_yellow_gray_metal}};

#declare M_brown_gray_matt = material{ texture{T_brown_gray_matt}};
#declare M_brown_gray_dull = material{ texture{T_brown_gray_dull}};
#declare M_brown_gray_satin = material{ texture{T_brown_gray_satin}};
#declare M_brown_gray_gloss = material{ texture{T_brown_gray_gloss}};
#declare M_brown_gray_metal = material{ texture{T_brown_gray_metal}};

#declare M_putty_matt = material{ texture{T_putty_matt}};
#declare M_putty_dull = material{ texture{T_putty_dull}};
#declare M_putty_satin = material{ texture{T_putty_satin}};
#declare M_putty_gloss = material{ texture{T_putty_gloss}};
#declare M_putty_metal = material{ texture{T_putty_metal}};

#declare M_tan_matt = material{ texture{T_tan_matt}};
#declare M_tan_dull = material{ texture{T_tan_dull}};
#declare M_tan_satin = material{ texture{T_tan_satin}};
#declare M_tan_gloss = material{ texture{T_tan_gloss}};
#declare M_tan_metal = material{ texture{T_tan_metal}};

#declare M_light_tan_matt = material{ texture{T_light_tan_matt}};
#declare M_light_tan_dull = material{ texture{T_light_tan_dull}};
#declare M_light_tan_satin = material{ texture{T_light_tan_satin}};
#declare M_light_tan_gloss = material{ texture{T_light_tan_gloss}};
#declare M_light_tan_metal = material{ texture{T_light_tan_metal}};

#declare M_dark_tan_matt = material{ texture{T_dark_tan_matt}};
#declare M_dark_tan_dull = material{ texture{T_dark_tan_dull}};
#declare M_dark_tan_satin = material{ texture{T_dark_tan_satin}};
#declare M_dark_tan_gloss = material{ texture{T_dark_tan_gloss}};
#declare M_dark_tan_metal = material{ texture{T_dark_tan_metal}};

#declare M_beige_matt = material{ texture{T_beige_matt}};
#declare M_beige_dull = material{ texture{T_beige_dull}};
#declare M_beige_satin = material{ texture{T_beige_satin}};
#declare M_beige_gloss = material{ texture{T_beige_gloss}};
#declare M_beige_metal = material{ texture{T_beige_metal}};

#declare M_sand_matt = material{ texture{T_sand_matt}};
#declare M_sand_dull = material{ texture{T_sand_dull}};
#declare M_sand_satin = material{ texture{T_sand_satin}};
#declare M_sand_gloss = material{ texture{T_sand_gloss}};
#declare M_sand_metal = material{ texture{T_sand_metal}};

#declare M_off_white_matt = material{ texture{T_off_white_matt}};
#declare M_off_white_dull = material{ texture{T_off_white_dull}};
#declare M_off_white_satin = material{ texture{T_off_white_satin}};
#declare M_off_white_gloss = material{ texture{T_off_white_gloss}};
#declare M_off_white_metal = material{ texture{T_off_white_metal}};

#declare M_pearl_matt = material{ texture{T_pearl_matt}};
#declare M_pearl_dull = material{ texture{T_pearl_dull}};
#declare M_pearl_satin = material{ texture{T_pearl_satin}};
#declare M_pearl_gloss = material{ texture{T_pearl_gloss}};
#declare M_pearl_metal = material{ texture{T_pearl_metal}};

#declare M_ivory_matt = material{ texture{T_ivory_matt}};
#declare M_ivory_dull = material{ texture{T_ivory_dull}};
#declare M_ivory_satin = material{ texture{T_ivory_satin}};
#declare M_ivory_gloss = material{ texture{T_ivory_gloss}};
#declare M_ivory_metal = material{ texture{T_ivory_metal}};

#declare M_cream_matt = material{ texture{T_cream_matt}};
#declare M_cream_dull = material{ texture{T_cream_dull}};
#declare M_cream_satin = material{ texture{T_cream_satin}};
#declare M_cream_gloss = material{ texture{T_cream_gloss}};
#declare M_cream_metal = material{ texture{T_cream_metal}};

#declare M_dark_cream_matt = material{ texture{T_dark_cream_matt}};
#declare M_dark_cream_dull = material{ texture{T_dark_cream_dull}};
#declare M_dark_cream_satin = material{ texture{T_dark_cream_satin}};
#declare M_dark_cream_gloss = material{ texture{T_dark_cream_gloss}};
#declare M_dark_cream_metal = material{ texture{T_dark_cream_metal}};

#declare M_champagne_matt = material{ texture{T_champagne_matt}};
#declare M_champagne_dull = material{ texture{T_champagne_dull}};
#declare M_champagne_satin = material{ texture{T_champagne_satin}};
#declare M_champagne_gloss = material{ texture{T_champagne_gloss}};
#declare M_champagne_metal = material{ texture{T_champagne_metal}};

#declare M_wheat_matt = material{ texture{T_wheat_matt}};
#declare M_wheat_dull = material{ texture{T_wheat_dull}};
#declare M_wheat_satin = material{ texture{T_wheat_satin}};
#declare M_wheat_gloss = material{ texture{T_wheat_gloss}};
#declare M_wheat_metal = material{ texture{T_wheat_metal}};

#declare M_default = material{M_sand_metal};







// -----------------------------------------------------------------------------------------
//                      M A C R O   S T A N D A R D   M A T E R I A L S 
//------------------------------------------------------------------------------------------ 
#macro macro_material () 
#declare _material = 
material { 
     texture {
        
        #if (_c_map = 0)
            pigment{ _pigment turbulence _turb scale _size }
        #end 
        
        finish { _finish }
        
        #if (_n_map = 0)
            normal{ _normal scale _size bump_size _bump_size }
        #end
         
        }
        interior{_interior}

}
#end

// -----------------------------------------------------------------------------------------
//                      A G E D  T E X T U R E S  +  M A T E R I A L S
//------------------------------------------------------------------------------------------ 


//--- scuff spots
#declare sz = <1,1,1>*.5 ;   
#declare turb = .2; 
#declare bump = .1; 
#declare T_scuff_spots =
texture { 
    pigment { 
        spotted 
        color_map {CM_scuff_overlay} 
        turbulence turb
        scale sz
        } 

    finish{F_dull}
    
    normal {
        pigment_pattern{ 
            spotted 
            color_map {CM_rust_normal} 
            turbulence turb
            scale sz
         }  
         bump_size bump
     }   
 }
 
//--- old rust spots
#declare sz = <1,1,1>*.5 ;   
#declare turb = 1.1; 
#declare bump = .05; 
#declare T_rust_spots =
texture { 
    pigment { 
        spotted 
        color_map {CM_rust_overlay} 
        turbulence turb
        scale sz
        } 

    finish{F_dull}
    
    normal {
        pigment_pattern{ 
            spotted 
            color_map {CM_rust_normal} 
            turbulence turb
            scale sz
         }  
         bump_size bump
     }   
 }
 
 
//--- steel old
#declare sz = <2,2,2> ;   
#declare turb = 1.1; 
#declare bump = .15; 

#declare T_steel_old =
texture { 
    pigment { spotted  color_map {CM_gray_spot}  turbulence turb scale sz } 
    finish{F_steel}
    normal { crackle turbulence turb bump_size bump scale sz }   
 }


//--- alum old
#declare sz = <.25,.25,.25> ;   
#declare turb = 1.1; 
#declare bump = .1; 
#declare T_alum_old =
texture { 
    pigment { bozo  color_map {CM_sliver_spot}  turbulence turb scale sz } 
    finish{F_metal_dull}
    normal { spotted turbulence turb bump_size bump scale sz }   
 }



//--- copper old        
#declare sz = <.25,.25,.25> ;   
#declare turb = 1.1; 
#declare bump = .1; 
#declare T_copper_old =
texture {
    pigment { bozo color_map {CM_old_copper } turbulence turb scale sz }  
    finish {F_metal_dull}
} 

  
  
//--- galvanize
#declare sz = 1;   
#declare turb = 1.1; 
#declare bump = .7; 

#declare T_galvanize = 
texture{ 
    pigment{ spotted color_map {CM_galvanize} turbulence turb scale sz } 
    finish{F_galvanize}
    normal { crackle turbulence turb bump_size bump scale sz }   
}
#declare M_galvanize = material { texture {T_galvanize } scale <.65,.65,.65> }


// -----------------------------------------------------------------------------------------
//                      M E T A L S
//------------------------------------------------------------------------------------------ 
//--- chrome
#declare T_chrome = texture{ pigment{C_silver} finish {F_metal_polished}}; 
#declare M_chrome = material{texture{T_chrome}} ;

//--- steel
#declare T_steel = texture{ pigment{C_gray70} finish {F_steel}}; 
#declare M_steel = material{texture{T_steel}} ;

//--- blue steel
#declare T_blue_steel = texture{ pigment{C_cool_gray} finish {F_steel}}; 
#declare M_blue_steel = material{texture{T_blue_steel}} ;

//--- warm steel
#declare T_warm_steel = texture{ pigment{C_warm_gray} finish {F_steel}}; 
#declare M_warm_steel = material{texture{T_warm_steel}} ;

//--- gold
#declare T_metal_gold = texture{ pigment{C_bright_gold} finish {F_metal_polished}}; 
#declare M_metal_gold = material{texture{T_metal_gold}} ;

//--- gold
#declare T_metal_dark_gold = texture{ pigment{C_dark_gold} finish {F_steel}}; 
#declare M_metal_dark_gold = material{texture{T_metal_dark_gold}} ;


//--- copper
#declare T_metal_copper = texture{ pigment{C_light_copper} finish {F_steel}}; 
#declare M_metal_copper = material{texture{T_metal_copper}} ;

//--- bronze
#declare T_metal_bronze = texture{ pigment{C_antique_bronze} finish {F_steel}}; 
#declare M_metal_bronze = material{texture{T_metal_bronze}} ;

//--- dark bronze
#declare T_metal_dark_bronze = texture{ pigment{C_dark_bronze} finish {F_steel}}; 
#declare M_metal_dark_bronze = material{texture{T_metal_dark_bronze}} ;

//--- alum
#declare T_metal_alum = texture{ pigment{C_silver} finish {F_metal_dull}}; 
#declare M_metal_alum = material{texture{T_metal_alum}} ;
                                    
                                    
                                
                                    
// -----------------------------------------------------------------------------------------
//                      R U B B E R 
//------------------------------------------------------------------------------------------ 

#declare N_rubber = normal {N_bozo scale <.02,.02,.02> turbulence 4 bump_size .5} ;

//--- red rubber
#declare T_red_rubber = texture {pigment{C_red} finish{F_rubber} normal {N_rubber}} ;
#declare M_red_rubber = material{texture{T_red_rubber}} ;  
 
//--- gold rubber
#declare T_gold_rubber = texture {pigment{C_gold} finish{F_rubber} normal {N_rubber} } ;
#declare M_gold_rubber = material{texture{T_gold_rubber}} ;  

//--- dark gray rubber
#declare T_dark_gray_rubber = texture {pigment{C_gray5} finish{F_rubber} normal {N_rubber}} ;
#declare M_dark_gray_rubber = material{texture{T_dark_gray_rubber}} ;

//--- black rubber
#declare T_black_rubber = texture {pigment{C_black} finish{F_rubber} normal {N_rubber}} ;
#declare M_black_rubber = material{texture{T_black_rubber}} ;
 
#declare T_black_rubber_grip = texture{ pigment{C_gray_black} finish{F_rubber} normal {N_rubber bump_size 3} }
#declare M_black_rubber_grip = material{texture{T_black_rubber_grip}} ;
 





// -----------------------------------------------------------------------------------------
//                      M A C R O  -  A G E D  C O L O R  F I N I S H
//------------------------------------------------------------------------------------------ 
#macro macro_aged_paint (_color,_finish)   
#declare _texture =
    texture{ 
        pigment { 
            spotted 
            colour_map {
                [0.00, _color *.90] 
                [0.55, _color *.99]
                [0.6,  _color *.95]
                [0.7,  _color *.85]
                [0.8,  _color *.99]
                [1.00, _color *.90]
        } 
        turbulence turb
        scale sz
        } 
        finish {_finish}
        normal { 
            pigment_pattern{ 
            spotted 
            turbulence turb
            colour_map {
                [0.00, rgb  .7] 
                [0.55, rgb   1]
                [0.6,  rgb   0]
                [0.7,  rgb  .6]
                [0.8,  rgb   1]
                [1.00, rgb  .7]
            } 
        } 
        bump_size bump
        scale sz
        }
    } 
#end  

#declare sz = 1 ;   
#declare turb = 1.25; 
#declare bump = .15;     
macro_aged_paint(C_cornflower_blue,F_soft_plastic)
#declare M_blue_paint_old = material {texture{_texture}} 


#declare sz = 1 ;   
#declare turb = 1.25; 
#declare bump = .05; 
macro_aged_paint(C_dusty_rose,F_soft_plastic)
#declare M_rose_paint_old = material {texture{_texture}} 


#declare sz = 1 ;   
#declare turb = 1.25; 
#declare bump = .05; 
macro_aged_paint(C_ivory,F_soft_plastic)
#declare M_ivory_paint_old = material {texture{_texture}}







// -----------------------------------------------------------------------------------------
//                      M A C R O    2   L A Y E R    F I N I S H    P A T T E R N
//------------------------------------------------------------------------------------------ 
// pattern types
#declare _agate     = 1;
#declare _bozo      = 2;
#declare _bumps     = 3;
#declare _crackle   = 4;
#declare _dents     = 5;
#declare _gradient  = 6;
#declare _leopard   = 7;
#declare _marble    = 8;
#declare _onion     = 9;
#declare _spotted   = 10;
#declare _wood      = 11;
#declare _wrinkles  = 12;


#macro macro_layer_material () 
#declare _material = material { 
     
     #if (show_base_material)
        texture {_base_tex}
     #end   
     
     #if (show_top_material)
     texture{
        
        #if (_use_cm)
            pigment {
                #switch (_pattern) 
                    #case (1)  agate        #break 
                    #case (2)  bozo         #break
                    #case (3)  bumps        #break 
                    #case (4)  crackle      #break 
                    #case (5)  dents        #break 
                    #case (6)  gradient y   #break
                    #case (7)  leopard      #break 
                    #case (8)  marble       #break
                    #case (9)  onion        #break 
                    #case (10) spotted      #break
                    #case (11) wood         #break 
                    #case (12) wrinkles     #break
                #end 
                
                colour_map { _c_map } 
                turbulence _turb
                scale _size
            }
        #end 
        
        finish {_finish}
       
       
       
        normal {
        #if (_use_cm) 
            pigment_pattern{ 
                #switch (_pattern) 
                    #case (1)  agate        #break 
                    #case (2)  bozo         #break
                    #case (3)  bumps        #break 
                    #case (4)  crackle      #break 
                    #case (5)  dents        #break 
                    #case (6)  gradient y   #break
                    #case (7)  leopard      #break 
                    #case (8)  marble       #break
                    #case (9)  onion        #break 
                    #case (10) spotted      #break
                    #case (11) wood         #break 
                    #case (12) wrinkles     #break
                #end 
                turbulence _turb
                colour_map { _n_map } 
            }
        #end
        bump_size _bump_size
        scale _size
        }
    }    
    #end
 }   
#end 



// -----------------------------------------------------------------------------------------
//                      G L A S S 
//------------------------------------------------------------------------------------------ 

#declare _size =        1 ;   
#declare _turb =        0 ; 
#declare _bump_size =   0 ;  
#declare _c_map =       0; 
#declare _n_map =       0; 


#declare T_glass =         texture {pigment {C_clear} finish {F_glass} normal {N_flat}} ;
#declare T_glass_gold =    texture {pigment {C_gold}  finish {F_glass} normal {N_flat}} ;
#declare T_glass_red =     texture {pigment {C_red}   finish {F_glass} normal {N_flat}} ;
#declare T_glass_blue =    texture {pigment {C_blue}  finish {F_glass} normal {N_flat}} ;
#declare T_glass_green =   texture {pigment {C_green}  finish {F_glass} normal {N_flat}} ;
#declare T_glass_wripple = texture {pigment {C_clear}  finish {F_glass} normal {N_leopard bump_size .3}} ;



// glass 
#declare _pigment =     C_clear  ;
#declare _finish =      F_glass  ; 
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_clear}  ;
macro_material ()       #declare M_glass = material {_material} ;
                                     
// glass                                       
#declare _pigment =     C_tint50  ;
#declare _finish =      F_glass  ; 
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_dark}  ; 
macro_material ()       #declare M_glass_dark = material {_material} ;
      
// glass
#declare _pigment =     C_clear  ;
#declare _finish =      F_glass  ;
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_red}  ; 
macro_material ()       #declare M_glass_red = material {_material} ;
                                            
// glass gold                                          
#declare _pigment =     C_clear  ;
#declare _finish =      F_glass  ;
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_gold}  ; 
macro_material ()       #declare M_glass_gold = material {_material} ;

// glass green
#declare _pigment =     C_clear  ;
#declare _finish =      F_glass  ;
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_green}  ; 
macro_material ()       #declare M_glass_green = material {_material} ;

// glass_blue
#declare _pigment =     C_clear  ;
#declare _finish =      F_glass  ;
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_blue}  ; 
macro_material ()       #declare M_glass_blue = material {_material} ;  

// glass milk
#declare _pigment =     C_milk  ;
#declare _finish =      F_milky  ;
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_white}  ; 
macro_material ()       #declare M_glass_milk = material {_material} ;

// glass frosted
#declare _size =        .005 ;   
#declare _turb =        1.1 ; 
#declare _bump_size =   5 ;  
#declare _pigment =     C_milk  ;
#declare _finish =      F_milky  ;
#declare _normal =      N_bozo   ;
#declare _interior =    interior{I_white}  ; 
macro_material ()       #declare M_glass_frosted = material {_material} ;
                             
                             
// glass wripple                             
#declare _size =        .2 ;   
#declare _turb =        .2 ; 
#declare _bump_size =   2 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_glass      ;
#declare _normal =      N_leopard   ;
#declare _interior =    interior{I_clear}  ; 
macro_material ()       #declare M_glass_wripple = material {_material} ;


// glass gold frost
#declare _size =        .005 ;   
#declare _turb =        1.1 ; 
#declare _bump_size =   5 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_milky      ;
#declare _normal =      N_bozo   ;
#declare _interior =    interior{I_gold}  ; 
macro_material ()       #declare M_glass_gold_frost = material {_material} ;




// glass red pillow
#declare _size =        .05 ;   
#declare _turb =        .1 ; 
#declare _bump_size =   5 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_milky      ;
#declare _normal =      N_pillow   ;
#declare _interior =    interior{I_red}  ; 
macro_material ()       #declare M_glass_red_pillow = material {_material} ;


// glass clear pillow
#declare _size =        .1 ;   
#declare _turb =        .1 ; 
#declare _bump_size =   5 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_milky      ;
#declare _normal =      N_pillow   ;
#declare _interior =    interior{I_clear}  ; 
macro_material ()       #declare M_glass_clear_pillow = material {_material} ;


// glass gold wripple
#declare _size =        .2 ;   
#declare _turb =        .2 ; 
#declare _bump_size =   2 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_glass      ;
#declare _normal =      N_leopard   ;
#declare _interior =    interior{I_gold}  ; 
macro_material ()       #declare M_glass_gold_wripple = material {_material} ;


// glass gold wripple
#declare _size =        1 ;   
#declare _turb =        .2 ; 
#declare _bump_size =   0.8 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_glass      ;
#declare _normal =      N_leopard   ;
#declare _interior =    interior{I_green}  ; 
macro_material ()       #declare M_glass_green_water = material {_material} ;

// glass dark blue
#declare _size =        1 ;   
#declare _turb =        .2 ; 
#declare _bump_size =   0.8 ;  
#declare _pigment =     C_clear       ;
#declare _finish =      F_glass      ;
#declare _normal =      N_flat   ;
#declare _interior =    interior{I_blue_dark}  ; 
macro_material ()       #declare M_glass_dark_blue = material {_material} ;


// -----------------------------------------------------------------------------------------
//                      A G E D  
//------------------------------------------------------------------------------------------ 

// steel old
#declare _size =                .2 ;   
#declare _turb =                1.25; 
#declare _bump_size =           .25;
#declare _base_tex =            T_steel_old; 
#declare _use_cm =              1 ;
#declare _pattern =             _bozo ;
#declare _c_map =               CM_rust_overlay; 
#declare _n_map =               CM_rust_normal; 
#declare _finish =              F_steel;
#declare show_top_material =    1;  
#declare show_base_material=    1;
macro_layer_material () #declare M_steel_old = material {_material} ;

// alum old
#declare _size =                .5 ;   
#declare _turb =                1.15; 
#declare _bump_size =           .2;
#declare _base_tex =            T_alum_old; 
#declare _use_cm =              1 ;
#declare _pattern =             _spotted ;
#declare _c_map =               CM_dirt_overlay; 
#declare _n_map =               CM_rust_normal; 
#declare _finish =              F_dull; 
#declare show_top_material =    1;  
#declare show_base_material=    1;
macro_layer_material () #declare M_alum_old = material {_material scale <.5,.5,.5>} ;
 

// copper old
#declare _size =                .5 ;   
#declare _turb =                1.25; 
#declare _bump_size =           .1;  
#declare _base_tex =            T_copper_old;
#declare _use_cm =              1 ;
#declare _pattern =             _spotted ; 
#declare _c_map =               CM_rust_overlay; 
#declare _n_map =               CM_rust_normal; 
#declare _finish =              F_dull; 
#declare show_top_material =    1;  
#declare show_base_material=    1;
macro_layer_material ()  #declare M_copper_old = material {_material scale <.5,.5,.5>} ;


// glass old
#declare _size =                .5 ;   
#declare _turb =                .35; 
#declare _bump_size =           .3;  
#declare _base_tex =            T_glass;
#declare _use_cm =              1 ;
#declare _pattern =             _bozo ; 
#declare _c_map =               CM_rust_overlay; 
#declare _n_map =               CM_rust_normal; 
#declare _finish =              F_dull; 
#declare show_top_material =    1;  
#declare show_base_material=    1;
macro_layer_material ()  #declare M_glass_old = material {_material} ;  



// chipped blue paint over gold
#declare _size =                .5 ;   
#declare _turb =                .65; 
#declare _bump_size =           .25;  
#declare _base_tex =            T_metal_gold;
#declare _use_cm =              1 ;
#declare _pattern =             _spotted ; 
#declare _c_map =               CM_chipped_blue; 
#declare _n_map =               CM_chipped_normal; 
#declare _finish =              F_soft_plastic; 
#declare show_top_material =    1;  
#declare show_base_material=    1;
macro_layer_material ()  #declare M_chipped_blue_gold = material {_material} ;


// chipped paint blue over gray gloss
#declare _size =                .5 ;   
#declare _turb =                .65; 
#declare _bump_size =           .25;  
#declare _base_tex =            T_gray80_gloss;
#declare _use_cm =              1 ;
#declare _pattern =             _spotted ; 
#declare _c_map =               CM_chipped_white; 
#declare _n_map =               CM_chipped_normal; 
#declare _finish =              F_soft_plastic; 
#declare show_top_material =    1;  
#declare show_base_material=    1;
macro_layer_material ()  #declare M_chipped_white_gray = material {_material} ;




// -----------------------------------------------------------------------------------------
//                      S K Y D O M E   G R A D I E N T S  
//------------------------------------------------------------------------------------------
 
#declare P_blue_teal = pigment{ gradient y color_map {CM_blue_teal} turbulence 0 } ;
#declare T_sky_blue_teal = texture{ pigment{P_blue_teal} scale <1.05,1.05,1.05>translate <0,-.502,0> } ; 
#declare M_sky_blue_teal = material{texture{T_sky_blue_teal}}   ; 

#declare P_gray_blue = pigment{ gradient y color_map {CM_gray_blue} turbulence 0 } ;
#declare T_sky_gray_blue = texture{ pigment{P_gray_blue} scale <1.05,1.05,1.05>translate <0,-.502,0>} ; 
#declare M_sky_gray_blue = material{texture{T_sky_gray_blue}}   ; 

#declare P_teal_purple = pigment{ gradient y color_map {CM_teal_purple} turbulence 0 } ;
#declare T_teal_purple = texture{ pigment{P_teal_purple} scale <1.05,1.05,1.05>translate <0,-.502,0> } ; 
#declare M_teal_purple = material{texture{T_teal_purple}}   ; 

#declare P_ground_sky =   pigment{ gradient y color_map {CM_ground_sky} turbulence 0 } ;
#declare T_ground_sky = texture{ pigment{P_ground_sky} scale <1.05,1.05,1.05>translate <0,-.502,0> } ; 
#declare M_ground_sky = material{texture{T_ground_sky}}   ; 

#declare T_ground_sky_chrome = texture{ pigment{P_ground_sky} scale <1.05,1.05,1.05>translate <0,-.502,0> finish {F_metal_polished}} ; 
#declare M_ground_sky_chrome = material{texture{T_ground_sky_chrome} }   ; 

// -----------------------------------------------------------------------------------------
//                      M A R B L E  / S W I R L S
//------------------------------------------------------------------------------------------

#declare P_blue_purple_milk = pigment{ spotted color_map {CM_blue_purple_milk} turbulence .05 } ;
#declare T_blue_purple_milk = texture{ pigment{P_blue_purple_milk} scale <1.05,1.05,1.05> translate <0,-.502,0> } ; 
#declare M_blue_purple_milk = material{texture{T_blue_purple_milk} interior{I_crystal} scale <.3,.3,.3>}   ; 


#declare T_blue_purple_milk_film = 
texture{ 
    pigment{
        spotted 
        color_map { CM_blue_purple_milk_film} 
        turbulence .15 
        scale <1.05,1.05,1.05> 
        translate <0,-.502,0> 
        }
        finish{F_matt}
}




#declare M_gold_violet_swirl = material {
    texture{T_metal_gold} 
    texture{T_blue_purple_milk_film}
    scale <.5,.5,.5>
    }
                             
                             
                             
#declare _size =        .3 ;   
#declare _turb =        .1 ; 
#declare _bump_size =   2 ;
#declare T_shroom_A =
texture {
 pigment { 
    crackle     
    color_map {CM_shroom_A}
    turbulence _turb 
    lambda 1
    omega 1
    octaves 2 
    scale _size
    }
    finish {
        specular 1 
        diffuse 1  
        roughness 0.0001
        phong 0.1
        phong_size 45
        brilliance 3
        reflection {0.03, .3 fresnel on}
        conserve_energy
    }  
        normal { 
            crackle  
            lambda 1
            omega 1
            octaves 2
            scale _size
            turbulence _turb 
            bump_size _bump_size
            }
}

#declare M_shroom_A = material{ texture{T_shroom_A}} ; 






#declare T_glass_gold_swirl = 
texture {
    gradient y
    texture_map {
        [0   T_glass        ]   
        [.3  T_metal_gold   ]  
        [.6  T_shroom_A     ]
        [1   T_glass        ]
    }
    warp {
    turbulence 1.1
    }
}  


#declare M_glass_gold_swirl = material{ texture{T_glass_gold_swirl} interior {I_clear} } 


//   M_glass 
//   M_glass_dark
//   M_glass_dark 
//   M_glass_red 
//   M_glass_gold 
//   M_glass_green 
//   M_glass_blue 
//   M_glass_milk 
//   M_glass_frosted 
//   M_glass_wripple 
//   M_glass_gold_frost 
//   M_glass_gold_wripple 
//   M_glass_green_water 
//   M_glass_old 
//   M_glass_dark_blue 
//   M_glass_red_pillow 
//   M_glass_clear_pillow 

#declare M_glass_swirl_A =
material { 
    texture {
        wood
        texture_map {
          [ 0.0  T_glass_green ]
          [ 0.2  T_glass_green ]
          [ 0.6  T_glass_wripple ]
          [ 0.8  T_glass_blue ]  
          [ 1.0  T_glass_blue ]
        }
    }
    interior{I_clear} 
    scale <.3,.2,.3>
    rotate <20,20,20>
}

#declare M_glass_swirl_B =
material { 
    texture {
        wood
        texture_map {
          [ 0.0  T_glass_red ]
          [ 0.2  T_glass_red ]
          [ 0.6  T_metal_gold ]
          [ 0.8  T_glass_gold ]  
          [ 1.0  T_glass_gold ]
        }
    }
    interior{I_clear} 
    scale <.3,.2,.3>
    rotate <20,20,20>
}

#declare M_glass_block =
material { 
    texture { T_glass_wripple scale .1  normal{ N_bozo turbulence 2 scale .1 bump_size .5}}
    texture { T_bevel_overlay_dark scale .5 normal{ scale 1 bump_size 5}} 
    interior{ I_dark}
}    

// -----------------------------------------------------------------------------------------
//                      W O O D 
//------------------------------------------------------------------------------------------

//C_sepia_brown =        rgb <0.44, 0.24, 0.1> ; 
//C_sienna_brown =       rgb <0.44, 0.2, 0.1> ; 
//C_chocolate_brown =    rgb <0.19, 0.05, 0.02> ; 
//C_oak_brown =          rgb <0.31, 0.1, 0.04> ; 
//C_mohogany_brown =     rgb <0.13, 0.025, 0.01> ; 
//C_almond_brown =       rgb <0.46, 0.25, 0.09> ; 
//C_hazel_brown =        rgb <0.40, 0.17, 0.08> ; 
//C_golden_brown =       rgb <0.40, 0.2, 0.05> ;  



#declare _turb =   0.04;
#declare _omega =  0.66;
#declare _lambda = 2.40;
#declare _scale =  <0.25, 0.25, 1.0>;
#declare P_wood_blond =
pigment {
    wood
    turbulence _turb
    omega _omega
    lambda _lambda
    scale _scale
    color_map {
        [0.250 color rgbt <0.60000, 0.43353, 0.21565, 0.000> *1.5]
        [0.350 color rgbt <0.66275, 0.28607, 0.10000, 0.000> *1.5]
        [0.525 color rgbt <0.60000, 0.43353, 0.21565, 0.000> *1.5]
        [0.600 color rgbt <0.66475, 0.38647, 0.15000, 0.000> *1.5]
        [0.750 color rgbt <0.60000, 0.43353, 0.21565, 0.000> *1.5]
        [0.850 color rgbt <0.66275, 0.38667, 0.15000, 0.000> *1.5]
        [1.000 color rgbt <0.60000, 0.43353, 0.21565, 0.000> *1.5]
    }
}




#declare _turb =   0.04;
#declare _omega =  0.46;
#declare _lambda = 3.40;
#declare _scale =  <0.25, 0.25, 1.0>;
#declare P_wood_sepia =
pigment {
    wood 
    turbulence _turb
    omega _omega
    lambda _lambda
    scale _scale
    color_map {
        [0.0 C_sienna_brown *1.1]
        [0.2 C_sepia_brown *.85]
        [0.4 C_sienna_brown *1.1]
        [0.6 C_sepia_brown *.85]
        [0.8 C_sienna_brown *1.1]
        [.95 C_sepia_brown *.85]
        [1.0 C_sienna_brown *1.1]
    }
}


#declare _turb =   0.04;
#declare _omega =  0.46;
#declare _lambda = 3.40;
#declare _scale =  <0.25, 0.25, 1.0>;
#declare P_wood_hazel_oak =
pigment {
    wood 
    turbulence _turb
    omega _omega
    lambda _lambda
    scale _scale
    color_map {
        [0.0 C_hazel_brown ]
        [0.2 C_oak_brown *.78]
        [0.4 C_hazel_brown ]
        [0.6 C_oak_brown *.78]
        [0.8 C_hazel_brown ]
        [.95 C_oak_brown *.78]
        [1.0 C_hazel_brown]
    }
}

#declare _turb =   0.04;
#declare _omega =  0.46;
#declare _lambda = 3.40;
#declare _scale =  <0.25, 0.25, 1.0>;
#declare P_wood_mohogany =
pigment {
    wood 
    turbulence _turb
    omega _omega
    lambda _lambda
    scale _scale
    color_map {
        [0.0 C_mohogany_gray *.79]
        [0.2 C_mohogany_brown *1.3]
        [0.4 C_mohogany_gray *.79]
        [0.6 C_mohogany_brown *1.3]
        [0.8 C_mohogany_gray *.79]
        [.95 C_mohogany_brown *1.3]
        [1.0 C_mohogany_gray *.79]
    }
}



#declare _turb =   0.04;
#declare _omega =  0.06;
#declare _lambda = 3.40;
#declare _scale =  <0.25, 0.25, 1.0>;
#declare P_wood_warm_gray =
pigment {
    wood 
    turbulence _turb
    omega _omega
    lambda _lambda
    scale _scale
    color_map {
        [0.0 C_warm_gray]
        [0.2 C_warm_gray*1.21]
        [0.4 C_warm_gray]
        [0.6 C_warm_gray*1.21]
        [0.8 C_warm_gray]
        [.95 C_warm_gray*1.21]
        [1.0 C_warm_gray]
    }
}

#declare _turb =   0.04;
#declare _omega =  0.16;
#declare _lambda = 3.40;
#declare _scale =  <0.25, 0.25, 1.0>;
#declare _bump = .1;
#declare N_wood = 
normal {
    pigment_pattern{ 
        wood 
        turbulence _turb
        omega _omega
        lambda _lambda
        scale _scale
        color_map {
            [0.0 C_black]
            [0.19 C_black]
            [0.2 C_white]
            [0.39 C_white]
            [0.4 C_black]
            [0.59 C_black]
            [0.6 C_white]
            [0.79 C_white]
            [0.8 C_black]
            [0.95 C_black]
            [.95 C_white]
            [1.0 C_black]
        }
    }    
}




#declare P_green_apple_bands = 
pigment { 
    gradient y 
    scale <1,1,1>
    color_map { CM_green_apple_bands }
}    





#declare T_wood_blond_dull =  texture{ pigment {P_wood_blond} finish {F_dull}}; 
#declare T_wood_blond_satin = texture{ pigment {P_wood_blond} finish {F_satin}}; 
#declare T_wood_sepia_satin =  texture{ pigment {P_wood_sepia}  finish {F_satin}}; 
#declare T_wood_hazel_oak_satin =  texture{ pigment {P_wood_hazel_oak}  finish {F_satin}}; 
#declare T_wood_mohogany_satin =  texture{ pigment {P_wood_mohogany}  finish {F_satin}}; 

#declare T_wood_painted_gray =  
texture{ 
    pigment {P_wood_warm_gray} 
    normal  {N_wood bump_size .02} 
    finish  {F_satin}
} 


#declare M_wood_blond_dull =  material{ texture{T_wood_blond_dull}  scale .5} ;
#declare M_wood_blond_satin = material{ texture{T_wood_blond_satin} scale .5} ;
#declare M_wood_sepia_satin = material{ texture {T_wood_sepia_satin}  scale 1} ;
#declare M_wood_hazel_oak_satin = material{ texture {T_wood_hazel_oak_satin}  scale 1} ;
#declare M_wood_mohogany_satin = material{ texture {T_wood_mohogany_satin}  scale 1} ;

#declare M_wood_painted_gray = material{ texture {T_wood_painted_gray}  scale .75} ;


// -----------------------------------------------------------------------------------------
//                      M I S C 
//------------------------------------------------------------------------------------------


#declare T_purple_bevel_satin =  
texture{ 
    pigment {C_purple} 
    normal  {N_bevel bump_size 1} 
    finish  {F_satin}
}


#declare M_purple_bevel_satin = material{ texture{T_purple_bevel_satin} scale .4}


#declare M_metal_gold_grid = material{texture{T_metal_gold normal{N_bevel_tile} scale .2 }} 


#declare M_green_apple_bands =  
material {
    texture{ 
        pigment {P_green_apple_bands scale 2 translate y*.5} 
        normal  {N_bevel bump_size .5} 
        finish  {F_satin}
    }
    rotate <0,0,90> 
    scale .15  
}



//--- green apple
#declare P_green_apple_base =  pigment{ bozo color_map {CM_green_apple} turbulence .002 } ;
#declare P_green_apple_spots = pigment{ crackle color_map {CM_green_apple_spots} turbulence .02 } ;
 
#declare P_yellow_apple_base =  pigment{ bozo color_map {CM_yellow_apple} turbulence .002 } ;
#declare T_yellow_apple_base =  texture{ pigment{P_yellow_apple_base} scale 2 finish {F_gloss}} ;
 

#declare T_green_apple_base =  texture{ pigment{P_green_apple_base} scale 2 finish {F_gloss}} ; 
#declare T_green_apple_spots = texture{ pigment{P_green_apple_spots} } ; 


#declare T_green_apple_blend = 
texture {
    gradient y
    texture_map {
        [0   T_green_apple_base        ]   
        [.3  T_green_apple_base        ]  
        [.6  T_yellow_apple_base       ]
        [1   T_green_apple_base        ]
    }
    warp {
    turbulence 1.1
    }
    
}  

#declare M_green_apple = 
material{
    texture{T_green_apple_blend  scale <0.02,0.06,0.02>  }
    
}       

#declare C_seabottom_sage = rgb <0.46, 0.54, 0.35> ; 
#declare C_seabottom_teal = rgb <0.67, 0.76, 0.67> ; 
#declare C_seabottom_gold = rgb <0.95, 0.40, 0.15> ; 
#declare C_black_gold =       color rgb<.1,.15,.2>   ; 


#declare CM_black_gold_cranberry =  
        color_map {
            [0.00       C_black] 
            [0.4        C_gold*.5]
            [0.8        C_cranberry *.9]
            [1.1        C_black]

        }

#declare CM_blue_gold_cranberry =  
        color_map {
            [0.00       C_blood_red] 
            [0.4        C_gold*.5]
            [0.8        C_cranberry *.9]
            [1.1        C_black]

        }

#declare CM_white_gold_cranberry =  
        color_map {
            [0.00       C_seabottom_sage] 
            [0.5       C_seabottom_gold] 
            [0.7        C_blood_red*.5]
            [0.8        C_blood_red *.8]
            [1.1        C_blood_red]

        }


//------ spotted mushroom
#declare T_black_gold_cranberry = 
#declare sz = 2;   
#declare turb = 0.02; 
#declare bump = 5;  //over the top
texture{
    pigment{ 
        leopard  
        turbulence turb
        color_map{ CM_black_gold_cranberry }
        scale sz
        } 
             
    normal { 
        pigment_pattern{ 
            leopard 
            turbulence turb
            colour_map {
                        [0.00, rgb 0]
 
                        [0.5,  rgb 1] 

                        [1.00, rgb 0]
                        } 
         }
         scale sz 
         bump_size bump 
    }   
        
    finish { F_satin }
} 

//------ spotted mushroom
#declare T_blue_gold_spotted = 
#declare sz = 2;   
#declare turb = 0.02; 
#declare bump = 5;  //over the top
texture{
    pigment{ 
        leopard  
        turbulence turb
        color_map{ CM_blue_gold_cranberry }
        scale sz
        } 
             
    normal { 
        pigment_pattern{ 
            leopard 
            turbulence turb
            colour_map {
                        [0.00, rgb 0]
                        [0.2,  rgb 0]  
                        [0.5,  rgb 1] 
                        [0.7,  rgb 1]
                        [1.00, rgb 0]
                        } 
         }
         scale sz 
         bump_size bump 
    }   
        
    finish {F_matt}
} 



//------ spotted mushroom
#declare T_white_gold_cranberry = 
#declare sz = 2;   
#declare turb = 0.02; 
#declare bump = 5;  //over the top
texture{
    pigment{ 
        leopard  
        turbulence turb
        color_map{ CM_white_gold_cranberry }
        scale sz
        } 
             
    normal { 
        pigment_pattern{ 
            leopard 
            turbulence turb
            colour_map {
                        [0.00, rgb 0]
                        [0.2,  rgb 0]  
                        [0.5,  rgb 1] 
                        [0.7,  rgb 1]
                        [1.00, rgb 0]
                        } 
         }
         scale sz 
         bump_size bump 
    }   
        
    finish {F_gloss}
} 



#declare T_spotted_weed_A = 
texture {
    leopard
    texture_map {
        [0   T_black_gold_cranberry     ]   
        [1   T_blue_gold_spotted        ]
    }
    warp {
    turbulence .05
    }
} 


#declare T_spotted_weed_B = 
texture { 
    leopard
    texture_map {
        [0   T_white_gold_cranberry       ] 
        [1   T_purple_metal ]
    }
    warp {
    turbulence 0.1 
    }

} 



#declare M_spotted_weed_A = material { texture{T_spotted_weed_A} scale .02}
#declare M_spotted_weed_B = material { texture{T_spotted_weed_B} scale .03 rotate <8,8,8>}



//--- pitted crack
#declare T_pitted = 
#declare _sz = .5;   
#declare _turb = .08;    
#declare _bump = 4;
texture{
    pigment{ 
        spotted  
        turbulence _turb
        color_map{ 
            [0.03 color C_black transmit .2] 
            [0.1 color C_black transmit .9]  
            [0.10 color C_gray50 transmit .8] 
            [0.9 color C_warm_gray transmit .2] 
            [1.00 color C_black transmit .2]
            } 
        }    
    normal { 
        pigment_pattern{ 
            spotted 
            turbulence _turb
            colour_map {
                [0.03 rgb 0] 
                [0.20 rgb 0 ]  
                [0.30 rgb 1] 
                [0.50 rgb 1] 
                [1.00 rgb 1]
                } 
         }
         bump_size _bump 
    } 
    finish {  
        phong .5
        phong_size 30
        ambient .2
        diffuse .8
        }    
    
}     


#declare M_galvanize_pitted = 
material { 
    texture {T_galvanize scale 1}
    texture {T_pitted scale .06} 
    
} 




// -----------------------------------------------------------------------------------------
//                      T I L E S 
//------------------------------------------------------------------------------------------

#declare P_checker_purple_teal =
pigment {
   checker
   color C_purple,
   color C_teal
}
       
#declare P_checker_black_gray =
pigment {
   checker
   color C_black,
   color C_gray10
}

#declare P_checker_ivory =
pigment {
   checker
   color C_ivory*1.3,
   color C_ivory*1.4
}

#macro make_tiles ()
#declare _material =
material {
    texture{ pigment{_pigment} scale <2,2,2> translate <0,0,0> finish {_finish}}
    texture {
         pigment{ 
            pavement  
            number_of_sides 4 
            number_of_tiles 4 
            pattern 4 
            exterior 0 
            interior 0  
            form 3
            
            #declare p1 = 1-_grout_thickness;
            #declare p2 = (p1+.02);
            color_map{
                       [ 0.00  C_clear      ] 
                       [ 0.00  C_clear      ]
                       [ p1    C_clear      ]
                       [ p2    _grout_color ] 
                       [ 1.00  _grout_color ] 
                     } 

            scale 1
           
         }
         finish { emission _grout_emission } 
         #if (_bump>0)
            normal {N_bevel_grid scale <2,2,2> translate <0,0,0> bump_size _bump}
         #end   
       }
       interior{_interior}
}         
#end




#declare _grout_color = C_gray90 ;
#declare _grout_emission = 0 ; 
#declare _grout_thickness = .09 ;
#declare _pigment =     P_checker_purple_teal ; 
#declare _finish =      F_gloss ;   
#declare _bump =        5 ;
#declare _interior =    interior{I_solid}  ;
make_tiles ()     #declare M_purple_teal_tile = material{_material scale .2} ;



#declare _grout_color = C_white ;
#declare _grout_emission = .02 ; 
#declare _grout_thickness = .08 ;
#declare _pigment =     P_checker_ivory ; 
#declare _finish =      F_gloss ;   
#declare _bump =        .18 ;
#declare _interior =    interior{I_solid}  ;
make_tiles ()     #declare M_ivory_tile = material{_material scale .1 rotate <90,0,0>} ;



#declare _grout_color = C_purple ;
#declare _grout_emission = 1.2 ; 
#declare _grout_thickness = .09 ;
#declare _pigment =     P_checker_black_gray ; 
#declare _finish =      F_gloss ; 
#declare _bump =        0 ; 
#declare _interior =    interior{I_solid}  ;
make_tiles ()     #declare M_black_gray_tile = material{_material scale .128 rotate <90,0,0>} ;




#declare _grout_color = C_white ;
#declare _grout_emission = .3 ; 
#declare _grout_thickness = .2 ;
#declare _pigment =     C_clear ; 
#declare _finish =      F_glass ; 
#declare _bump =        2 ; 
#declare _interior =    interior{I_crystal}  ;
make_tiles ()     #declare M_glass_block2 = material{_material scale .12 rotate <90,0,0>} ;




#declare CM_bw_end =
colour_map{
    [0.00, rgb 0]
    [0.25, rgb 1]
    [0.75, rgb 1]
    [1.00, rgb 0]
} 

#declare CM_bw_center =
colour_map{
    [0.00, rgb  1]
    [0.20, rgb  1]
    [0.40, rgb  .5]
    [0.50, rgb  0]
    [0.60, rgb  .5] 
    [0.80, rgb  1]
    [1.00, rgb  1]
}







// -----------------------------------------------------------------------------------------
//                      A N O T H E R   T W E A K E D   T E X T U R E    M A C R O   
//------------------------------------------------------------------------------------------

#macro make_texture () 
#declare _texture = 
texture { 
    pigment{
        #switch (_pattern) 
            #case (1)  agate        #break 
            #case (2)  bozo         #break
            #case (3)  bumps        #break 
            #case (4)  crackle      #break 
            #case (5)  dents        #break 
            #case (6)  gradient y   #break
            #case (7)  leopard      #break 
            #case (8)  marble       #break
            #case (9)  onion        #break 
            #case (10) spotted      #break
            #case (11) wood         #break 
            #case (12) wrinkles     #break 
            #case (13) granite      #break
        #end 
        colour_map { _CM_pigment } 
        turbulence _turb
        scale _size
    }

    finish {_finish}

    normal {
        pigment_pattern{ 
            #switch (_pattern) 
                #case (1)  agate        #break 
                #case (2)  bozo         #break
                #case (3)  bumps        #break 
                #case (4)  crackle      #break 
                #case (5)  dents        #break 
                #case (6)  gradient y   #break
                #case (7)  leopard      #break 
                #case (8)  marble       #break
                #case (9)  onion        #break 
                #case (10) spotted      #break
                #case (11) wood         #break 
                #case (12) wrinkles     #break 
                #case (13) granite      #break
            #end 
            turbulence _turb
            colour_map { _CM_normal } 
            }
        bump_size _bump
        scale _size
    }
}    

#end 


// -----------------------------------------------------------------------------------------
//                      G R O U N D  -  R O C K 
//------------------------------------------------------------------------------------------

// pattern types
#declare _agate     = 1;
#declare _bozo      = 2;
#declare _bumps     = 3;
#declare _crackle   = 4;
#declare _dents     = 5;
#declare _gradient  = 6;
#declare _leopard   = 7;
#declare _marble    = 8;
#declare _onion     = 9;
#declare _spotted   = 10;
#declare _wood      = 11;
#declare _wrinkles  = 12;
#declare _granite   = 13;


//---  ground green
#declare _pattern =     _granite;
#declare _CM_pigment =  CM_ground_green ; 
#declare _CM_normal  =  CM_bw_end ; 
#declare _finish =      F_dirt
#declare _size =        1;   
#declare _turb =        0.02; 
#declare _bump =        1; 
make_texture ()         #declare T_ground_green = texture{_texture} ;
#declare M_ground_green = material{texture{T_ground_green} scale 2} ;

//--- ground tan mud
#declare _pattern =     _wrinkles;
#declare _CM_pigment =  CM_ground_mud ; 
#declare _CM_normal  =  CM_bw_center ; 
#declare _finish =      F_dirt
#declare _size =        1;   
#declare _turb =        0; 
#declare _bump =        1; 
make_texture ()         #declare T_ground_mud = texture{_texture}
#declare M_ground_mud = material{texture{T_ground_mud} scale .5} ;

//--- ground tan mud overlay
#declare _pattern =     _wrinkles;
#declare _CM_pigment =  CM_ground_mud_overlay ; 
#declare _CM_normal  =  CM_bw_center ; 
#declare _finish =      F_dull
#declare _size =        1;   
#declare _turb =        0; 
#declare _bump =        1; 
make_texture ()         #declare T_ground_mud_overlay = texture{_texture}
#declare M_ground_mud_overlay = material{texture{T_ground_mud_overlay} scale .5} ;


//--- ground tan sand
#declare _pattern =     _wrinkles;
#declare _CM_pigment =  CM_ground_sand ; 
#declare _CM_normal  =  CM_bw_center ; 
#declare _finish =      F_dirt
#declare _size =        1;   
#declare _turb =        0; 
#declare _bump =        .8; 
make_texture ()         #declare T_ground_sand = texture{_texture}
#declare M_ground_sand = material{texture{T_ground_sand} scale .05} ;




#declare M_ground_dirty_sand = 
material{
    texture{T_ground_sand           scale .05} 
    texture{T_ground_mud_overlay    scale .5 }
}



//--------- Gray Tan with Rose
#declare T_Grnt0 =
texture {
pigment
 {granite
  turbulence 0.4
  color_map
   {[0.000, 0.153   color rgbt <0.729, 0.502, 0.451, 0.000>
                    color rgbt <0.769, 0.686, 0.592, 0.000>]
    [0.153, 0.398   color rgbt <0.769, 0.686, 0.592, 0.000>
                    color rgbt <0.843, 0.753, 0.718, 0.000>]
    [0.398, 0.559   color rgbt <0.843, 0.753, 0.718, 0.000>
                    color rgbt <0.780, 0.667, 0.561, 0.000>]
    [0.559, 0.729   color rgbt <0.780, 0.667, 0.561, 0.000>
                    color rgbt <0.741, 0.659, 0.576, 0.000>]
    [0.729, 1.001   color rgbt <0.741, 0.659, 0.576, 0.000>
                    color rgbt <0.729, 0.502, 0.451, 0.000>]
   }
 }
 }

//----- Creamy Whites with yellow & light gray
#declare T_Grnt1 =
texture {
pigment
 {granite
  turbulence 0.6
  color_map
   {[0.000, 0.212   color rgbt <0.898, 0.898, 0.851, 0.000>
                    color rgbt <0.969, 0.980, 0.875, 0.000>]
    [0.212, 0.424   color rgbt <0.969, 0.980, 0.875, 0.000>
                    color rgbt <0.859, 0.859, 0.859, 0.000>]
    [0.424, 0.627   color rgbt <0.859, 0.859, 0.859, 0.000>
                    color rgbt <0.992, 0.922, 0.659, 0.000>]
    [0.627, 0.881   color rgbt <0.992, 0.922, 0.659, 0.000>
                    color rgbt <0.937, 0.965, 0.902, 0.000>]
    [0.881, 1.001   color rgbt <0.937, 0.965, 0.902, 0.000>
                    color rgbt <0.898, 0.898, 0.851, 0.000>]
   }
 }
 }

//------- Deep Cream with light rose, yellow orchid & tan
#declare T_Grnt2 =
texture {
pigment
 {granite
  turbulence 0.5
  color_map
   {[0.000, 0.178   color rgbt <0.863, 0.757, 0.596, 0.000>
                    color rgbt <0.925, 0.792, 0.714, 0.000>]
    [0.178, 0.356   color rgbt <0.925, 0.792, 0.714, 0.000>
                    color rgbt <0.871, 0.702, 0.659, 0.000>]
    [0.356, 0.525   color rgbt <0.871, 0.702, 0.659, 0.000>
                    color rgbt <0.992, 0.922, 0.659, 0.000>]
    [0.525, 0.729   color rgbt <0.992, 0.922, 0.659, 0.000>
                    color rgbt <0.902, 0.812, 0.714, 0.000>]
    [0.729, 1.001   color rgbt <0.902, 0.812, 0.714, 0.000>
                    color rgbt <0.863, 0.757, 0.596, 0.000>]
   }
 }
 }

//------- Warm tans olive & light rose with cream
#declare T_Grnt3 =
texture {
pigment
 {granite
  turbulence 0.5
  color_map
   {[0.000, 0.178   color rgbt <0.831, 0.631, 0.569, 0.000>
                    color rgbt <0.925, 0.831, 0.714, 0.000>]
    [0.178, 0.356   color rgbt <0.925, 0.831, 0.714, 0.000>
                    color rgbt <0.871, 0.702, 0.659, 0.000>]
    [0.356, 0.525   color rgbt <0.871, 0.702, 0.659, 0.000>
                    color rgbt <0.831, 0.631, 0.569, 0.000>]
    [0.525, 0.729   color rgbt <0.831, 0.631, 0.569, 0.000>
                    color rgbt <0.937, 0.882, 0.820, 0.000>]
    [0.729, 1.001   color rgbt <0.937, 0.882, 0.820, 0.000>
                    color rgbt <0.831, 0.631, 0.569, 0.000>]
   }
 }
 }

//-------- Orchid sand & mouve
#declare T_Grnt4 =
texture {
pigment
 {granite
  turbulence 0.5
  color_map
   {[0.000, 0.178   color rgbt <0.804, 0.569, 0.494, 0.000>
                    color rgbt <0.816, 0.725, 0.537, 0.000>]
    [0.178, 0.356   color rgbt <0.816, 0.725, 0.537, 0.000>
                    color rgbt <0.820, 0.580, 0.522, 0.000>]
    [0.356, 0.525   color rgbt <0.820, 0.580, 0.522, 0.000>
                    color rgbt <0.882, 0.725, 0.537, 0.000>]
    [0.525, 0.729   color rgbt <0.882, 0.725, 0.537, 0.000>
                    color rgbt <0.855, 0.729, 0.584, 0.000>]
    [0.729, 1.001   color rgbt <0.855, 0.729, 0.584, 0.000>
                    color rgbt <0.804, 0.569, 0.494, 0.000>]
   }
 }
 }




// -----------------------------------------------------------------------------------------
//                      W O O D S   F R O M   w o o d s . i n c   
//------------------------------------------------------------------------------------------

#include "woods.inc"
#declare F_satin = finish {ambient .2 diffuse 1 phong .35 phong_size 20}

#declare M_Wood01 = material{texture{T_Wood1 finish{F_satin}}} ; 
#declare M_Wood02 = material{texture{T_Wood2 finish{F_satin}}} ;
#declare M_Wood03 = material{texture{T_Wood3 finish{F_satin}}} ;
#declare M_Wood04 = material{texture{T_Wood4 finish{F_satin}}} ;
#declare M_Wood05 = material{texture{T_Wood5 finish{F_satin}}} ;
#declare M_Wood06 = material{texture{T_Wood6 finish{F_satin}}} ;
#declare M_Wood07 = material{texture{T_Wood7 finish{F_satin}}} ;
#declare M_Wood08 = material{texture{T_Wood8 finish{F_satin}}} ;
#declare M_Wood09 = material{texture{T_Wood9 finish{F_satin}}} ;
#declare M_Wood10 = material{texture{T_Wood10 finish{F_satin}}} ;
#declare M_Wood11 = material{texture{T_Wood11 finish{F_satin}}} ;
#declare M_Wood12 = material{texture{T_Wood12 finish{F_satin}}} ;
#declare M_Wood13 = material{texture{T_Wood13 finish{F_satin}}} ;
#declare M_Wood14 = material{texture{T_Wood14 finish{F_satin}}} ;
#declare M_Wood15 = material{texture{T_Wood15 finish{F_satin}}} ;
#declare M_Wood16 = material{texture{T_Wood16 finish{F_satin}}} ;
#declare M_Wood17 = material{texture{T_Wood17 finish{F_satin}}} ;
#declare M_Wood18 = material{texture{T_Wood18 finish{F_satin}}} ;
#declare M_Wood19 = material{texture{T_Wood19 finish{F_satin}}} ;
#declare M_Wood20 = material{texture{T_Wood20 finish{F_satin}}} ;
#declare M_Wood21 = material{texture{T_Wood21 finish{F_satin}}} ;
#declare M_Wood22 = material{texture{T_Wood22 finish{F_satin}}} ;
#declare M_Wood23 = material{texture{T_Wood23 finish{F_satin}}} ;
#declare M_Wood24 = material{texture{T_Wood24 finish{F_satin}}} ;
#declare M_Wood25 = material{texture{T_Wood25 finish{F_satin}}} ;
#declare M_Wood26 = material{texture{T_Wood26 finish{F_satin}}} ;
#declare M_Wood27 = material{texture{T_Wood27 finish{F_satin}}} ;
#declare M_Wood28 = material{texture{T_Wood28 finish{F_satin}}} ;
#declare M_Wood29 = material{texture{T_Wood29 finish{F_satin}}} ;
#declare M_Wood30 = material{texture{T_Wood30 finish{F_satin}}} ;
#declare M_Wood31 = material{texture{T_Wood30 finish{F_satin}}} ;
#declare M_Wood32 = material{texture{T_Wood30 finish{F_satin}}} ;
#declare M_Wood33 = material{texture{T_Wood30 finish{F_satin}}} ;
#declare M_Wood34 = material{texture{T_Wood30 finish{F_satin}}} ;
#declare M_Wood35 = material{texture{T_Wood30 finish{F_satin}}} ;