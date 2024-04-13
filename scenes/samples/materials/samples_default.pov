// material review
// m.miller 05.25.23
#version 3.8; 
global_settings {    
    max_trace_level 7
    ambient_light <.01,.01,.01> * 10
    assumed_gamma 1                  
}                        

#declare mat_count = 1000;        
#declare mat_array = array mixed [mat_count][2];

#declare M_default = material{texture{pigment{rgb.85} finish{ambient .25 phong .5 phong_size 50 reflection .2 metallic}}};

//--- fill array with default material
#for (i,0,mat_count-1)
    #declare mat_array [i][0] = "M_default" ;
    #declare mat_array [i][1] =  M_default  ;    
#end
 
// -----------------------------------------------------------------------------------------
//                      S A M P L E S
//------------------------------------------------------------------------------------------ 
#include "default_materials.inc" 
#include "materials_wood.inc"

//--- cut and paste material array
#declare mat_array [1][0] = "M_clear_dull" ;
#declare mat_array [1][1] = M_clear_dull ;

#declare mat_array [2][0] = "M_clear_gloss" ;
#declare mat_array [2][1] = M_clear_gloss ;

#declare mat_array [3][0] = "M_clear_metal" ;
#declare mat_array [3][1] = M_clear_metal ;

#declare mat_array [4][0] = "M_white_dull" ;
#declare mat_array [4][1] = M_white_dull ;

#declare mat_array [5][0] = "M_white_gloss" ;
#declare mat_array [5][1] = M_white_gloss ;

#declare mat_array [6][0] = "M_white_metal" ;
#declare mat_array [6][1] = M_white_metal ;

#declare mat_array [7][0] = "M_black_dull" ;
#declare mat_array [7][1] = M_black_dull ;

#declare mat_array [8][0] = "M_black_gloss" ;
#declare mat_array [8][1] = M_black_gloss ;

#declare mat_array [9][0] = "M_black_metal" ;
#declare mat_array [9][1] = M_black_metal ;

//---   r e d s 
#declare mat_array [10][0] = "M_red_dull" ;
#declare mat_array [10][1] = M_red_dull ;

#declare mat_array [11][0] = "M_red_gloss" ;
#declare mat_array [11][1] = M_red_gloss ;

#declare mat_array [12][0] = "M_red_metal" ;
#declare mat_array [12][1] = M_red_metal ;

#declare mat_array [13][0] = "M_light_red_dull" ;
#declare mat_array [13][1] = M_light_red_dull ;

#declare mat_array [14][0] = "M_light_red_gloss" ;
#declare mat_array [14][1] = M_light_red_gloss ;

#declare mat_array [15][0] = "M_light_red_metal" ;
#declare mat_array [15][1] = M_light_red_metal ;

#declare mat_array [16][0] = "M_dark_red_dull" ;
#declare mat_array [16][1] = M_dark_red_dull ;

#declare mat_array [17][0] = "M_dark_red_gloss" ;
#declare mat_array [17][1] = M_dark_red_gloss ;

#declare mat_array [18][0] = "M_dark_red_metal" ;
#declare mat_array [18][1] = M_dark_red_metal ;

#declare mat_array [19][0] = "M_scarlet_red_dull" ;
#declare mat_array [19][1] = M_scarlet_red_dull ;

#declare mat_array [20][0] = "M_scarlet_red_gloss" ;
#declare mat_array [20][1] = M_scarlet_red_gloss ;

#declare mat_array [21][0] = "M_scarlet_red_metal" ;
#declare mat_array [21][1] = M_scarlet_red_metal ;

#declare mat_array [22][0] = "M_vermilion_dull" ;
#declare mat_array [22][1] = M_vermilion_dull ;

#declare mat_array [23][0] = "M_vermilion_gloss" ;
#declare mat_array [23][1] = M_vermilion_gloss ;

#declare mat_array [24][0] = "M_vermilion_metal" ;
#declare mat_array [24][1] = M_vermilion_metal ;

#declare mat_array [25][0] = "M_blood_red_dull" ;
#declare mat_array [25][1] = M_blood_red_dull ;

#declare mat_array [26][0] = "M_blood_red_gloss" ;
#declare mat_array [26][1] = M_blood_red_gloss ;

#declare mat_array [27][0] = "M_blood_red_metal" ;
#declare mat_array [27][1] = M_blood_red_metal ;

#declare mat_array [28][0] = "M_crimson_red_dull" ;
#declare mat_array [28][1] = M_crimson_red_dull ;

#declare mat_array [29][0] = "M_crimson_red_gloss" ;
#declare mat_array [29][1] = M_crimson_red_gloss ;

#declare mat_array [30][0] = "M_crimson_red_metal" ;
#declare mat_array [30][1] = M_crimson_red_metal ;

#declare mat_array [31][0] = "M_midnight_dull" ;
#declare mat_array [31][1] = M_midnight_dull ;

#declare mat_array [32][0] = "M_midnight_gloss" ;
#declare mat_array [32][1] = M_midnight_gloss ;

#declare mat_array [33][0] = "M_midnight_metal" ;
#declare mat_array [33][1] = M_midnight_metal ;

#declare mat_array [34][0] = "M_salmon_dull" ;
#declare mat_array [34][1] = M_salmon_dull ;

#declare mat_array [35][0] = "M_salmon_gloss" ;
#declare mat_array [35][1] = M_salmon_gloss ;

#declare mat_array [36][0] = "M_salmon_metal" ;
#declare mat_array [36][1] = M_salmon_metal ;

#declare mat_array [37][0] = "M_rose_dull" ;
#declare mat_array [37][1] = M_rose_dull ;

#declare mat_array [38][0] = "M_rose_gloss" ;
#declare mat_array [38][1] = M_rose_gloss ;

#declare mat_array [39][0] = "M_rose_metal" ;
#declare mat_array [39][1] = M_rose_metal ;

#declare mat_array [40][0] = "M_dusty_rose_dull" ;
#declare mat_array [40][1] = M_dusty_rose_dull ;

#declare mat_array [41][0] = "M_dusty_rose_gloss" ;
#declare mat_array [41][1] = M_dusty_rose_gloss ;

#declare mat_array [42][0] = "M_dusty_rose_metal" ;
#declare mat_array [42][1] = M_dusty_rose_metal ;

#declare mat_array [43][0] = "M_pink_dull" ;
#declare mat_array [43][1] = M_pink_dull ;

#declare mat_array [44][0] = "M_pink_gloss" ;
#declare mat_array [44][1] = M_pink_gloss ;

#declare mat_array [45][0] = "M_pink_metal" ;
#declare mat_array [45][1] = M_pink_metal ;

#declare mat_array [46][0] = "M_coral_dull" ;
#declare mat_array [46][1] = M_coral_dull ;

#declare mat_array [47][0] = "M_coral_gloss" ;
#declare mat_array [47][1] = M_coral_gloss ;

#declare mat_array [48][0] = "M_coral_metal" ;
#declare mat_array [48][1] = M_coral_metal ;

//---   b l u e s
#declare mat_array [49][0] = "M_cyan_dull" ;
#declare mat_array [49][1] = M_cyan_dull ;

#declare mat_array [50][0] = "M_cyan_gloss" ;
#declare mat_array [50][1] = M_cyan_gloss ;

#declare mat_array [51][0] = "M_cyan_metal" ;
#declare mat_array [51][1] = M_cyan_metal ;

#declare mat_array [52][0] = "M_light_cyan_dull" ;
#declare mat_array [52][1] = M_light_cyan_dull ;

#declare mat_array [53][0] = "M_light_cyan_gloss" ;
#declare mat_array [53][1] = M_light_cyan_gloss ;

#declare mat_array [54][0] = "M_light_cyan_metal" ;
#declare mat_array [54][1] = M_light_cyan_metal ;

#declare mat_array [55][0] = "M_dark_cyan_dull" ;
#declare mat_array [55][1] = M_dark_cyan_dull ;

#declare mat_array [56][0] = "M_dark_cyan_gloss" ;
#declare mat_array [56][1] = M_dark_cyan_gloss ;

#declare mat_array [57][0] = "M_dark_cyan_metal" ;
#declare mat_array [57][1] = M_dark_cyan_metal ;

#declare mat_array [58][0] = "M_blue_dull" ;
#declare mat_array [58][1] = M_blue_dull ;

#declare mat_array [59][0] = "M_blue_gloss" ;
#declare mat_array [59][1] = M_blue_gloss ;

#declare mat_array [60][0] = "M_blue_metal" ;
#declare mat_array [60][1] = M_blue_metal ;

#declare mat_array [61][0] = "M_light_blue_dull" ;
#declare mat_array [61][1] = M_light_blue_dull ;

#declare mat_array [62][0] = "M_light_blue_gloss" ;
#declare mat_array [62][1] = M_light_blue_gloss ;

#declare mat_array [63][0] = "M_light_blue_metal" ;
#declare mat_array [63][1] = M_light_blue_metal ;

#declare mat_array [64][0] = "M_dark_blue_dull" ;
#declare mat_array [64][1] = M_dark_blue_dull ;

#declare mat_array [65][0] = "M_dark_blue_gloss" ;
#declare mat_array [65][1] = M_dark_blue_gloss ;

#declare mat_array [66][0] = "M_dark_blue_metal" ;
#declare mat_array [66][1] = M_dark_blue_metal ;

#declare mat_array [67][0] = "M_dark_gray_blue_dull" ;
#declare mat_array [67][1] = M_dark_gray_blue_dull ;

#declare mat_array [68][0] = "M_dark_gray_blue_gloss" ;
#declare mat_array [68][1] = M_dark_gray_blue_gloss ;

#declare mat_array [69][0] = "M_dark_gray_blue_metal" ;
#declare mat_array [69][1] = M_dark_gray_blue_metal ;

#declare mat_array [70][0] = "M_charcoal_blue_dull" ;
#declare mat_array [70][1] = M_charcoal_blue_dull ;

#declare mat_array [71][0] = "M_charcoal_blue_gloss" ;
#declare mat_array [71][1] = M_charcoal_blue_gloss ;

#declare mat_array [72][0] = "M_charcoal_blue_metal" ;
#declare mat_array [72][1] = M_charcoal_blue_metal ;

#declare mat_array [73][0] = "M_navy_blue_dull" ;
#declare mat_array [73][1] = M_navy_blue_dull ;

#declare mat_array [74][0] = "M_navy_blue_gloss" ;
#declare mat_array [74][1] = M_navy_blue_gloss ;

#declare mat_array [75][0] = "M_navy_blue_metal" ;
#declare mat_array [75][1] = M_navy_blue_metal ;

#declare mat_array [76][0] = "M_horizon_blue_dull" ;
#declare mat_array [76][1] = M_horizon_blue_dull ;

#declare mat_array [77][0] = "M_horizon_blue_gloss" ;
#declare mat_array [77][1] = M_horizon_blue_gloss ;

#declare mat_array [78][0] = "M_horizon_blue_metal" ;
#declare mat_array [78][1] = M_horizon_blue_metal ;

#declare mat_array [79][0] = "M_sky_blue_dull" ;
#declare mat_array [79][1] = M_sky_blue_dull ;

#declare mat_array [80][0] = "M_sky_blue_gloss" ;
#declare mat_array [80][1] = M_sky_blue_gloss ;

#declare mat_array [81][0] = "M_sky_blue_metal" ;
#declare mat_array [81][1] = M_sky_blue_metal ;

#declare mat_array [82][0] = "M_cornflower_blue_dull" ;
#declare mat_array [82][1] = M_cornflower_blue_dull ;

#declare mat_array [83][0] = "M_cornflower_blue_gloss" ;
#declare mat_array [83][1] = M_cornflower_blue_gloss ;

#declare mat_array [84][0] = "M_cornflower_blue_metal" ;
#declare mat_array [84][1] = M_cornflower_blue_metal ;

#declare mat_array [85][0] = "M_powder_blue_dull" ;
#declare mat_array [85][1] = M_powder_blue_dull ;

#declare mat_array [86][0] = "M_powder_blue_gloss" ;
#declare mat_array [86][1] = M_powder_blue_gloss ;

#declare mat_array [87][0] = "M_powder_blue_metal" ;
#declare mat_array [87][1] = M_powder_blue_metal ;

#declare mat_array [88][0] = "M_midnight_blue_dull" ;
#declare mat_array [88][1] = M_midnight_blue_dull ;

#declare mat_array [89][0] = "M_midnight_blue_gloss" ;
#declare mat_array [89][1] = M_midnight_blue_gloss ;

#declare mat_array [90][0] = "M_midnight_blue_metal" ;
#declare mat_array [90][1] = M_midnight_blue_metal ;

#declare mat_array [91][0] = "M_cobalt_blue_dull" ;
#declare mat_array [91][1] = M_cobalt_blue_dull ;

#declare mat_array [92][0] = "M_cobalt_blue_gloss" ;
#declare mat_array [92][1] = M_cobalt_blue_gloss ;

#declare mat_array [93][0] = "M_cobalt_blue_metal" ;
#declare mat_array [93][1] = M_cobalt_blue_metal ;

#declare mat_array [94][0] = "M_teal_dull" ;
#declare mat_array [94][1] = M_teal_dull ;

#declare mat_array [95][0] = "M_teal_gloss" ;
#declare mat_array [95][1] = M_teal_gloss ;

#declare mat_array [96][0] = "M_teal_metal" ;
#declare mat_array [96][1] = M_teal_metal ;
                 
//---   p u r p l e s  - v i o l e t s
#declare mat_array [97][0] = "M_purple_dull" ;
#declare mat_array [97][1] = M_purple_dull ;

#declare mat_array [98][0] = "M_purple_gloss" ;
#declare mat_array [98][1] = M_purple_gloss ;

#declare mat_array [99][0] = "M_purple_metal" ;
#declare mat_array [99][1] = M_purple_metal ;

#declare mat_array [100][0] = "M_light_purple_dull" ;
#declare mat_array [100][1] = M_light_purple_dull ;

#declare mat_array [101][0] = "M_light_purple_gloss" ;
#declare mat_array [101][1] = M_light_purple_gloss ;

#declare mat_array [102][0] = "M_light_purple_metal" ;
#declare mat_array [102][1] = M_light_purple_metal ;

#declare mat_array [103][0] = "M_dark_purple_dull" ;
#declare mat_array [103][1] = M_dark_purple_dull ;

#declare mat_array [104][0] = "M_dark_purple_gloss" ;
#declare mat_array [104][1] = M_dark_purple_gloss ;

#declare mat_array [105][0] = "M_dark_purple_metal" ;
#declare mat_array [105][1] = M_dark_purple_metal ;

#declare mat_array [106][0] = "M_maroon_dull" ;
#declare mat_array [106][1] = M_maroon_dull ;

#declare mat_array [107][0] = "M_maroon_gloss" ;
#declare mat_array [107][1] = M_maroon_gloss ;

#declare mat_array [108][0] = "M_maroon_metal" ;
#declare mat_array [108][1] = M_maroon_metal ;

#declare mat_array [109][0] = "M_purple_maroon_dull" ;
#declare mat_array [109][1] = M_purple_maroon_dull ;

#declare mat_array [110][0] = "M_purple_maroon_gloss" ;
#declare mat_array [110][1] = M_purple_maroon_gloss ;

#declare mat_array [111][0] = "M_purple_maroon_metal" ;
#declare mat_array [111][1] = M_purple_maroon_metal ;

#declare mat_array [112][0] = "M_mauve_dull" ;
#declare mat_array [112][1] = M_mauve_dull ;

#declare mat_array [113][0] = "M_mauve_gloss" ;
#declare mat_array [113][1] = M_mauve_gloss ;

#declare mat_array [114][0] = "M_mauve_metal" ;
#declare mat_array [114][1] = M_mauve_metal ;

#declare mat_array [115][0] = "M_dark_mauve_dull" ;
#declare mat_array [115][1] = M_dark_mauve_dull ;

#declare mat_array [116][0] = "M_dark_mauve_gloss" ;
#declare mat_array [116][1] = M_dark_mauve_gloss ;

#declare mat_array [117][0] = "M_dark_mauve_metal" ;
#declare mat_array [117][1] = M_dark_mauve_metal ;

#declare mat_array [118][0] = "M_plum_dull" ;
#declare mat_array [118][1] = M_plum_dull ;

#declare mat_array [119][0] = "M_plum_gloss" ;
#declare mat_array [119][1] = M_plum_gloss ;

#declare mat_array [120][0] = "M_plum_metal" ;
#declare mat_array [120][1] = M_plum_metal ;

#declare mat_array [121][0] = "M_lavender_dull" ;
#declare mat_array [121][1] = M_lavender_dull ;

#declare mat_array [122][0] = "M_lavender_gloss" ;
#declare mat_array [122][1] = M_lavender_gloss ;

#declare mat_array [123][0] = "M_lavender_metal" ;
#declare mat_array [123][1] = M_lavender_metal ;

#declare mat_array [124][0] = "M_cranberry_dull" ;
#declare mat_array [124][1] = M_cranberry_dull ;

#declare mat_array [125][0] = "M_cranberry_gloss" ;
#declare mat_array [125][1] = M_cranberry_gloss ;

#declare mat_array [126][0] = "M_cranberry_metal" ;
#declare mat_array [126][1] = M_cranberry_metal ;

#declare mat_array [127][0] = "M_magenta_dull" ;
#declare mat_array [127][1] = M_magenta_dull ;

#declare mat_array [128][0] = "M_magenta_gloss" ;
#declare mat_array [128][1] = M_magenta_gloss ;

#declare mat_array [129][0] = "M_magenta_metal" ;
#declare mat_array [129][1] = M_magenta_metal ;

#declare mat_array [130][0] = "M_violet_dull" ;
#declare mat_array [130][1] = M_violet_dull ;

#declare mat_array [131][0] = "M_violet_gloss" ;
#declare mat_array [131][1] = M_violet_gloss ;

#declare mat_array [132][0] = "M_violet_metal" ;
#declare mat_array [132][1] = M_violet_metal ;

#declare mat_array [133][0] = "M_lilac_dull" ;
#declare mat_array [133][1] = M_lilac_dull ;

#declare mat_array [134][0] = "M_lilac_gloss" ;
#declare mat_array [134][1] = M_lilac_gloss ;

#declare mat_array [135][0] = "M_lilac_metal" ;
#declare mat_array [135][1] = M_lilac_metal ;

#declare mat_array [136][0] = "M_grape_dull" ;
#declare mat_array [136][1] = M_grape_dull ;

#declare mat_array [137][0] = "M_grape_gloss" ;
#declare mat_array [137][1] = M_grape_gloss ;

#declare mat_array [138][0] = "M_grape_metal" ;
#declare mat_array [138][1] = M_grape_metal ;

//---   g r e e n s
#declare mat_array [139][0] = "M_green_dull" ;
#declare mat_array [139][1] = M_green_dull ;

#declare mat_array [140][0] = "M_green_gloss" ;
#declare mat_array [140][1] = M_green_gloss ;

#declare mat_array [141][0] = "M_green_metal" ;
#declare mat_array [141][1] = M_green_metal ;

#declare mat_array [142][0] = "M_dark_green_dull" ;
#declare mat_array [142][1] = M_dark_green_dull ;

#declare mat_array [143][0] = "M_dark_green_gloss" ;
#declare mat_array [143][1] = M_dark_green_gloss ;

#declare mat_array [144][0] = "M_dark_green_metal" ;
#declare mat_array [144][1] = M_dark_green_metal ;

#declare mat_array [145][0] = "M_light_green_dull" ;
#declare mat_array [145][1] = M_light_green_dull ;

#declare mat_array [146][0] = "M_light_green_gloss" ;
#declare mat_array [146][1] = M_light_green_gloss ;

#declare mat_array [147][0] = "M_light_green_metal" ;
#declare mat_array [147][1] = M_light_green_metal ;

#declare mat_array [148][0] = "M_emerald_green_dull" ;
#declare mat_array [148][1] = M_emerald_green_dull ;

#declare mat_array [149][0] = "M_emerald_green_gloss" ;
#declare mat_array [149][1] = M_emerald_green_gloss ;

#declare mat_array [150][0] = "M_emerald_green_metal" ;
#declare mat_array [150][1] = M_emerald_green_metal ;

#declare mat_array [151][0] = "M_lime_green_dull" ;
#declare mat_array [151][1] = M_lime_green_dull ;

#declare mat_array [152][0] = "M_lime_green_gloss" ;
#declare mat_array [152][1] = M_lime_green_gloss ;

#declare mat_array [153][0] = "M_lime_green_metal" ;
#declare mat_array [153][1] = M_lime_green_metal ;

#declare mat_array [154][0] = "M_green_apple_dull" ;
#declare mat_array [154][1] = M_green_apple_dull ;

#declare mat_array [155][0] = "M_green_apple_gloss" ;
#declare mat_array [155][1] = M_green_apple_gloss ;

#declare mat_array [156][0] = "M_green_apple_metal" ;
#declare mat_array [156][1] = M_green_apple_metal ;

#declare mat_array [157][0] = "M_pea_green_dull" ;
#declare mat_array [157][1] = M_pea_green_dull ;

#declare mat_array [158][0] = "M_pea_green_gloss" ;
#declare mat_array [158][1] = M_pea_green_gloss ;

#declare mat_array [159][0] = "M_pea_green_metal" ;
#declare mat_array [159][1] = M_pea_green_metal ;

#declare mat_array [160][0] = "M_forest_green_dull" ;
#declare mat_array [160][1] = M_forest_green_dull ;

#declare mat_array [161][0] = "M_forest_green_gloss" ;
#declare mat_array [161][1] = M_forest_green_gloss ;

#declare mat_array [162][0] = "M_forest_green_metal" ;
#declare mat_array [162][1] = M_forest_green_metal ;

#declare mat_array [163][0] = "M_olive_green_dull" ;
#declare mat_array [163][1] = M_olive_green_dull ;

#declare mat_array [164][0] = "M_olive_green_gloss" ;
#declare mat_array [164][1] = M_olive_green_gloss ;

#declare mat_array [165][0] = "M_olive_green_metal" ;
#declare mat_array [165][1] = M_olive_green_metal ;

#declare mat_array [166][0] = "M_yellow_green_dull" ;
#declare mat_array [166][1] = M_yellow_green_dull ;

#declare mat_array [167][0] = "M_yellow_green_gloss" ;
#declare mat_array [167][1] = M_yellow_green_gloss ;

#declare mat_array [168][0] = "M_yellow_green_metal" ;
#declare mat_array [168][1] = M_yellow_green_metal ;

#declare mat_array [169][0] = "M_kelly_green_dull" ;
#declare mat_array [169][1] = M_kelly_green_dull ;

#declare mat_array [170][0] = "M_kelly_green_gloss" ;
#declare mat_array [170][1] = M_kelly_green_gloss ;

#declare mat_array [171][0] = "M_kelly_green_metal" ;
#declare mat_array [171][1] = M_kelly_green_metal ;

#declare mat_array [172][0] = "M_chartreuse_dull" ;
#declare mat_array [172][1] = M_chartreuse_dull ;

#declare mat_array [173][0] = "M_chartreuse_gloss" ;
#declare mat_array [173][1] = M_chartreuse_gloss ;

#declare mat_array [174][0] = "M_chartreuse_metal" ;
#declare mat_array [174][1] = M_chartreuse_metal ;

#declare mat_array [175][0] = "M_mint_green_dull" ;
#declare mat_array [175][1] = M_mint_green_dull ;

#declare mat_array [176][0] = "M_mint_green_gloss" ;
#declare mat_array [176][1] = M_mint_green_gloss ;

#declare mat_array [177][0] = "M_mint_green_metal" ;
#declare mat_array [177][1] = M_mint_green_metal ;

#declare mat_array [178][0] = "M_sea_green_dull" ;
#declare mat_array [178][1] = M_sea_green_dull ;

#declare mat_array [179][0] = "M_sea_green_gloss" ;
#declare mat_array [179][1] = M_sea_green_gloss ;

#declare mat_array [180][0] = "M_sea_green_metal" ;
#declare mat_array [180][1] = M_sea_green_metal ;

#declare mat_array [181][0] = "M_khaki_green_dull" ;
#declare mat_array [181][1] = M_khaki_green_dull ;

#declare mat_array [182][0] = "M_khaki_green_gloss" ;
#declare mat_array [182][1] = M_khaki_green_gloss ;

#declare mat_array [183][0] = "M_khaki_green_metal" ;
#declare mat_array [183][1] = M_khaki_green_metal ;

#declare mat_array [184][0] = "M_turquoise_dull" ;
#declare mat_array [184][1] = M_turquoise_dull ;

#declare mat_array [185][0] = "M_turquoise_gloss" ;
#declare mat_array [185][1] = M_turquoise_gloss ;

#declare mat_array [186][0] = "M_turquoise_metal" ;
#declare mat_array [186][1] = M_turquoise_metal ;

//---   y e l l o w s  -  o r a n g e s
#declare mat_array [187][0] = "M_yellow_dull" ;
#declare mat_array [187][1] = M_yellow_dull ;

#declare mat_array [188][0] = "M_yellow_gloss" ;
#declare mat_array [188][1] = M_yellow_gloss ;

#declare mat_array [189][0] = "M_yellow_metal" ;
#declare mat_array [189][1] = M_yellow_metal ;

#declare mat_array [190][0] = "M_light_yellow_dull" ;
#declare mat_array [190][1] = M_light_yellow_dull ;

#declare mat_array [191][0] = "M_light_yellow_gloss" ;
#declare mat_array [191][1] = M_light_yellow_gloss ;

#declare mat_array [192][0] = "M_light_yellow_metal" ;
#declare mat_array [192][1] = M_light_yellow_metal ;

#declare mat_array [193][0] = "M_mustard_yellow_dull" ;
#declare mat_array [193][1] = M_mustard_yellow_dull ;

#declare mat_array [194][0] = "M_mustard_yellow_gloss" ;
#declare mat_array [194][1] = M_mustard_yellow_gloss ;

#declare mat_array [195][0] = "M_mustard_yellow_metal" ;
#declare mat_array [195][1] = M_mustard_yellow_metal ;

#declare mat_array [196][0] = "M_canary_yellow_dull" ;
#declare mat_array [196][1] = M_canary_yellow_dull ;

#declare mat_array [197][0] = "M_canary_yellow_gloss" ;
#declare mat_array [197][1] = M_canary_yellow_gloss ;

#declare mat_array [198][0] = "M_canary_yellow_metal" ;
#declare mat_array [198][1] = M_canary_yellow_metal ;

#declare mat_array [199][0] = "M_safty_yellow_dull" ;
#declare mat_array [199][1] = M_safty_yellow_dull ;

#declare mat_array [200][0] = "M_safty_yellow_gloss" ;
#declare mat_array [200][1] = M_safty_yellow_gloss ;

#declare mat_array [201][0] = "M_safty_yellow_metal" ;
#declare mat_array [201][1] = M_safty_yellow_metal ;

#declare mat_array [202][0] = "M_golden_yellow_dull" ;
#declare mat_array [202][1] = M_golden_yellow_dull ;

#declare mat_array [203][0] = "M_golden_yellow_gloss" ;
#declare mat_array [203][1] = M_golden_yellow_gloss ;

#declare mat_array [204][0] = "M_golden_yellow_metal" ;
#declare mat_array [204][1] = M_golden_yellow_metal ;

#declare mat_array [205][0] = "M_goldenrod_dull" ;
#declare mat_array [205][1] = M_goldenrod_dull ;

#declare mat_array [206][0] = "M_goldenrod_gloss" ;
#declare mat_array [206][1] = M_goldenrod_gloss ;

#declare mat_array [207][0] = "M_goldenrod_metal" ;
#declare mat_array [207][1] = M_goldenrod_metal ;

#declare mat_array [208][0] = "M_orange_dull" ;
#declare mat_array [208][1] = M_orange_dull ;

#declare mat_array [209][0] = "M_orange_gloss" ;
#declare mat_array [209][1] = M_orange_gloss ;

#declare mat_array [210][0] = "M_orange_metal" ;
#declare mat_array [210][1] = M_orange_metal ;

#declare mat_array [211][0] = "M_light_orange_dull" ;
#declare mat_array [211][1] = M_light_orange_dull ;

#declare mat_array [212][0] = "M_light_orange_gloss" ;
#declare mat_array [212][1] = M_light_orange_gloss ;

#declare mat_array [213][0] = "M_light_orange_metal" ;
#declare mat_array [213][1] = M_light_orange_metal ;

#declare mat_array [214][0] = "M_dark_orange_dull" ;
#declare mat_array [214][1] = M_dark_orange_dull ;

#declare mat_array [215][0] = "M_dark_orange_gloss" ;
#declare mat_array [215][1] = M_dark_orange_gloss ;

#declare mat_array [216][0] = "M_dark_orange_metal" ;
#declare mat_array [216][1] = M_dark_orange_metal ;

#declare mat_array [217][0] = "M_peach_dull" ;
#declare mat_array [217][1] = M_peach_dull ;

#declare mat_array [218][0] = "M_peach_gloss" ;
#declare mat_array [218][1] = M_peach_gloss ;

#declare mat_array [219][0] = "M_peach_metal" ;
#declare mat_array [219][1] = M_peach_metal ;

#declare mat_array [220][0] = "M_burnt_orange_dull" ;
#declare mat_array [220][1] = M_burnt_orange_dull ;

#declare mat_array [221][0] = "M_burnt_orange_gloss" ;
#declare mat_array [221][1] = M_burnt_orange_gloss ;

#declare mat_array [222][0] = "M_burnt_orange_metal" ;
#declare mat_array [222][1] = M_burnt_orange_metal ;

#declare mat_array [223][0] = "M_rust_dull" ;
#declare mat_array [223][1] = M_rust_dull ;

#declare mat_array [224][0] = "M_rust_gloss" ;
#declare mat_array [224][1] = M_rust_gloss ;

#declare mat_array [225][0] = "M_rust_metal" ;
#declare mat_array [225][1] = M_rust_metal ;

#declare mat_array [226][0] = "M_rust_red_dull" ;
#declare mat_array [226][1] = M_rust_red_dull ;

#declare mat_array [227][0] = "M_rust_red_gloss" ;
#declare mat_array [227][1] = M_rust_red_gloss ;

#declare mat_array [228][0] = "M_rust_red_metal" ;
#declare mat_array [228][1] = M_rust_red_metal ;

#declare mat_array [229][0] = "M_rust_gray_dull" ;
#declare mat_array [229][1] = M_rust_gray_dull ;

#declare mat_array [230][0] = "M_rust_gray_gloss" ;
#declare mat_array [230][1] = M_rust_gray_gloss ;

#declare mat_array [231][0] = "M_rust_gray_metal" ;
#declare mat_array [231][1] = M_rust_gray_metal ;

#declare mat_array [232][0] = "M_rust_gray_dark_dull" ;
#declare mat_array [232][1] = M_rust_gray_dark_dull ;

#declare mat_array [233][0] = "M_rust_gray_dark_gloss" ;
#declare mat_array [233][1] = M_rust_gray_dark_gloss ;

#declare mat_array [234][0] = "M_rust_gray_dark_metal" ;
#declare mat_array [234][1] = M_rust_gray_dark_metal ;


//---  b r o w n s 
#declare mat_array [235][0] = "M_brown_dull" ;
#declare mat_array [235][1] = M_brown_dull ;

#declare mat_array [236][0] = "M_brown_gloss" ;
#declare mat_array [236][1] = M_brown_gloss ;

#declare mat_array [237][0] = "M_brown_metal" ;
#declare mat_array [237][1] = M_brown_metal ;

#declare mat_array [238][0] = "M_light_brown_dull" ;
#declare mat_array [238][1] = M_light_brown_dull ;

#declare mat_array [239][0] = "M_light_brown_gloss" ;
#declare mat_array [239][1] = M_light_brown_gloss ;

#declare mat_array [240][0] = "M_light_brown_metal" ;
#declare mat_array [240][1] = M_light_brown_metal ;

#declare mat_array [241][0] = "M_dark_brown_dull" ;
#declare mat_array [241][1] = M_dark_brown_dull ;

#declare mat_array [242][0] = "M_dark_brown_gloss" ;
#declare mat_array [242][1] = M_dark_brown_gloss ;

#declare mat_array [243][0] = "M_dark_brown_metal" ;
#declare mat_array [243][1] = M_dark_brown_metal ;

#declare mat_array [244][0] = "M_sepia_brown_dull" ;
#declare mat_array [244][1] = M_sepia_brown_dull ;

#declare mat_array [245][0] = "M_sepia_brown_gloss" ;
#declare mat_array [245][1] = M_sepia_brown_gloss ;

#declare mat_array [246][0] = "M_sepia_brown_metal" ;
#declare mat_array [246][1] = M_sepia_brown_metal ;

#declare mat_array [247][0] = "M_sienna_brown_dull" ;
#declare mat_array [247][1] = M_sienna_brown_dull ;

#declare mat_array [248][0] = "M_sienna_brown_gloss" ;
#declare mat_array [248][1] = M_sienna_brown_gloss ;

#declare mat_array [249][0] = "M_sienna_brown_metal" ;
#declare mat_array [249][1] = M_sienna_brown_metal ;

#declare mat_array [250][0] = "M_chocolate_brown_dull" ;
#declare mat_array [250][1] = M_chocolate_brown_dull ;

#declare mat_array [251][0] = "M_chocolate_brown_gloss" ;
#declare mat_array [251][1] = M_chocolate_brown_gloss ;

#declare mat_array [252][0] = "M_chocolate_brown_metal" ;
#declare mat_array [252][1] = M_chocolate_brown_metal ;

#declare mat_array [253][0] = "M_oak_brown_dull" ;
#declare mat_array [253][1] = M_oak_brown_dull ;

#declare mat_array [254][0] = "M_oak_brown_gloss" ;
#declare mat_array [254][1] = M_oak_brown_gloss ;

#declare mat_array [255][0] = "M_oak_brown_metal" ;
#declare mat_array [255][1] = M_oak_brown_metal ;

#declare mat_array [256][0] = "M_mohogany_brown_dull" ;
#declare mat_array [256][1] = M_mohogany_brown_dull ;

#declare mat_array [257][0] = "M_mohogany_brown_gloss" ;
#declare mat_array [257][1] = M_mohogany_brown_gloss ;

#declare mat_array [258][0] = "M_mohogany_brown_metal" ;
#declare mat_array [258][1] = M_mohogany_brown_metal ;

#declare mat_array [259][0] = "M_almond_brown_dull" ;
#declare mat_array [259][1] = M_almond_brown_dull ;

#declare mat_array [260][0] = "M_almond_brown_gloss" ;
#declare mat_array [260][1] = M_almond_brown_gloss ;

#declare mat_array [261][0] = "M_almond_brown_metal" ;
#declare mat_array [261][1] = M_almond_brown_metal ;

#declare mat_array [262][0] = "M_hazel_brown_dull" ;
#declare mat_array [262][1] = M_hazel_brown_dull ;

#declare mat_array [263][0] = "M_hazen_brown_gloss" ;
#declare mat_array [263][1] = M_hazel_brown_gloss ;

#declare mat_array [264][0] = "M_hazen_brown_metal" ;
#declare mat_array [264][1] = M_hazel_brown_metal ;

#declare mat_array [265][0] = "M_golden_brown_dull" ;
#declare mat_array [265][1] = M_golden_brown_dull ;

#declare mat_array [266][0] = "M_golden_brown_gloss" ;
#declare mat_array [266][1] = M_golden_brown_gloss ;

#declare mat_array [267][0] = "M_golden_brown_metal" ;
#declare mat_array [267][1] = M_golden_brown_metal ;

#declare mat_array [268][0] = "M_coffee_dull" ;
#declare mat_array [268][1] = M_coffee_dull ;

#declare mat_array [269][0] = "M_coffee_gloss" ;
#declare mat_array [269][1] = M_coffee_gloss ;

#declare mat_array [270][0] = "M_coffee_metal" ;
#declare mat_array [270][1] = M_coffee_metal ;

#declare mat_array [271][0] = "M_khaki_dull" ;
#declare mat_array [271][1] = M_khaki_dull ;

#declare mat_array [272][0] = "M_khaki_gloss" ;
#declare mat_array [272][1] = M_khaki_gloss ;

#declare mat_array [273][0] = "M_khaki_metal" ;
#declare mat_array [273][1] = M_khaki_metal ;

#declare mat_array [274][0] = "M_copper_dull" ;
#declare mat_array [274][1] = M_copper_dull ;

#declare mat_array [275][0] = "M_copper_gloss" ;
#declare mat_array [275][1] = M_copper_gloss ;

#declare mat_array [276][0] = "M_copper_metal" ;
#declare mat_array [276][1] = M_copper_metal ;

#declare mat_array [277][0] = "M_light_copper_dull" ;
#declare mat_array [277][1] = M_light_copper_dull ;

#declare mat_array [278][0] = "M_light_copper_gloss" ;
#declare mat_array [278][1] = M_light_copper_gloss ;

#declare mat_array [279][0] = "M_light_copper_metal" ;
#declare mat_array [279][1] = M_light_copper_metal ;

#declare mat_array [280][0] = "M_dark_copper_dull" ;
#declare mat_array [280][1] = M_dark_copper_dull ;

#declare mat_array [281][0] = "M_dark_copper_gloss" ;
#declare mat_array [281][1] = M_dark_copper_gloss ;

#declare mat_array [282][0] = "M_dark_copper_metal" ;
#declare mat_array [282][1] = M_dark_copper_metal ;

//---  m e t a l   c o l o r s
#declare mat_array [283][0] = "M_silver_dull" ;
#declare mat_array [283][1] = M_silver_dull ;

#declare mat_array [284][0] = "M_silver_gloss" ;
#declare mat_array [284][1] = M_silver_gloss ;

#declare mat_array [285][0] = "M_silver_metal" ;
#declare mat_array [285][1] = M_silver_metal ;

#declare mat_array [286][0] = "M_brass_dull" ;
#declare mat_array [286][1] = M_brass_dull ;

#declare mat_array [287][0] = "M_brass_gloss" ;
#declare mat_array [287][1] = M_brass_gloss ;

#declare mat_array [288][0] = "M_brass_metal" ;
#declare mat_array [288][1] = M_brass_metal ;

#declare mat_array [289][0] = "M_bronze_dull" ;
#declare mat_array [289][1] = M_bronze_dull ;

#declare mat_array [290][0] = "M_bronze_gloss" ;
#declare mat_array [290][1] = M_bronze_gloss ;

#declare mat_array [291][0] = "M_bronze_metal" ;
#declare mat_array [291][1] = M_bronze_metal ;

#declare mat_array [292][0] = "M_antique_bronze_dull" ;
#declare mat_array [292][1] = M_antique_bronze_dull ;

#declare mat_array [293][0] = "M_antique_bronze_gloss" ;
#declare mat_array [293][1] = M_antique_bronze_gloss ;

#declare mat_array [294][0] = "M_antique_bronze_metal" ;
#declare mat_array [294][1] = M_antique_bronze_metal ;

#declare mat_array [295][0] = "M_galvanize1_dull" ;
#declare mat_array [295][1] = M_galvanize1_dull ;

#declare mat_array [296][0] = "M_galvanize1_gloss" ;
#declare mat_array [296][1] = M_galvanize1_gloss ;

#declare mat_array [297][0] = "M_galvanize1_metal" ;
#declare mat_array [297][1] = M_galvanize1_metal ;

#declare mat_array [298][0] = "M_galvanize2_dull" ;
#declare mat_array [298][1] = M_galvanize2_dull ;

#declare mat_array [299][0] = "M_galvanize2_gloss" ;
#declare mat_array [299][1] = M_galvanize2_gloss ;

#declare mat_array [300][0] = "M_galvanize2_metal" ;
#declare mat_array [300][1] = M_galvanize2_metal ;

#declare mat_array [301][0] = "M_gold_dull" ;
#declare mat_array [301][1] = M_gold_dull ;

#declare mat_array [302][0] = "M_gold_gloss" ;
#declare mat_array [302][1] = M_gold_gloss ;

#declare mat_array [303][0] = "M_gold_metal" ;
#declare mat_array [303][1] = M_gold_metal ;

#declare mat_array [304][0] = "M_bright_gold_dull" ;
#declare mat_array [304][1] = M_bright_gold_dull ;

#declare mat_array [305][0] = "M_bright_gold_gloss" ;
#declare mat_array [305][1] = M_bright_gold_gloss ;

#declare mat_array [306][0] = "M_bright_gold_metal" ;
#declare mat_array [306][1] = M_bright_gold_metal ;

#declare mat_array [307][0] = "M_dark_gold_dull" ;
#declare mat_array [307][1] = M_dark_gold_dull ;

#declare mat_array [308][0] = "M_dark_gold_gloss" ;
#declare mat_array [308][1] = M_dark_gold_gloss ;

#declare mat_array [309][0] = "M_dark_gold_metal" ;
#declare mat_array [309][1] = M_dark_gold_metal ;

#declare mat_array [310][0] = "M_saffron_gold_dull" ;
#declare mat_array [310][1] = M_saffron_gold_dull ;

#declare mat_array [311][0] = "M_saffron_gold_gloss" ;
#declare mat_array [311][1] = M_saffron_gold_gloss ;

#declare mat_array [312][0] = "M_saffron_gold_metal" ;
#declare mat_array [312][1] = M_saffron_gold_metal ;

#declare mat_array [313][0] = "M_rose_gold_dull" ;
#declare mat_array [313][1] = M_rose_gold_dull ;

#declare mat_array [314][0] = "M_rose_gold_gloss" ;
#declare mat_array [314][1] = M_rose_gold_gloss ;

#declare mat_array [315][0] = "M_rose_gold_metal" ;
#declare mat_array [315][1] = M_rose_gold_metal ;

//---   g r a y s 
#declare mat_array [316][0] = "M_gray_dark_dull" ;
#declare mat_array [316][1] = M_gray_dark_dull ;

#declare mat_array [317][0] = "M_gray_dark_gloss" ;
#declare mat_array [317][1] = M_gray_dark_gloss ;

#declare mat_array [318][0] = "M_gray_dark_metal" ;
#declare mat_array [318][1] = M_gray_dark_metal ;

#declare mat_array [319][0] = "M_gray_black_dull" ;
#declare mat_array [319][1] = M_gray_black_dull ;

#declare mat_array [320][0] = "M_gray_black_gloss" ;
#declare mat_array [320][1] = M_gray_black_gloss ;

#declare mat_array [321][0] = "M_gray_black_metal" ;
#declare mat_array [321][1] = M_gray_black_metal ;

#declare mat_array [322][0] = "M_gray5_dull" ;
#declare mat_array [322][1] = M_gray5_dull ;

#declare mat_array [323][0] = "M_gray5_gloss" ;
#declare mat_array [323][1] = M_gray5_gloss ;

#declare mat_array [324][0] = "M_gray5_metal" ;
#declare mat_array [324][1] = M_gray5_metal ;

#declare mat_array [325][0] = "M_gray10_dull" ;
#declare mat_array [325][1] = M_gray10_dull ;

#declare mat_array [326][0] = "M_gray10_gloss" ;
#declare mat_array [326][1] = M_gray10_gloss ;

#declare mat_array [327][0] = "M_gray10_metal" ;
#declare mat_array [327][1] = M_gray10_metal ;

#declare mat_array [328][0] = "M_gray20_dull" ;
#declare mat_array [328][1] = M_gray20_dull ;

#declare mat_array [329][0] = "M_gray20_gloss" ;
#declare mat_array [329][1] = M_gray20_gloss ;

#declare mat_array [330][0] = "M_gray20_metal" ;
#declare mat_array [330][1] = M_gray20_metal ;

#declare mat_array [331][0] = "M_gray30_dull" ;
#declare mat_array [331][1] = M_gray30_dull ;

#declare mat_array [332][0] = "M_gray30_gloss" ;
#declare mat_array [332][1] = M_gray30_gloss ;

#declare mat_array [333][0] = "M_gray30_metal" ;
#declare mat_array [333][1] = M_gray30_metal ;

#declare mat_array [334][0] = "M_gray40_dull" ;
#declare mat_array [334][1] = M_gray40_dull ;

#declare mat_array [335][0] = "M_gray40_gloss" ;
#declare mat_array [335][1] = M_gray40_gloss ;

#declare mat_array [336][0] = "M_gray40_metal" ;
#declare mat_array [336][1] = M_gray40_metal ;

#declare mat_array [337][0] = "M_gray50_dull" ;
#declare mat_array [337][1] = M_gray50_dull ;

#declare mat_array [338][0] = "M_gray50_gloss" ;
#declare mat_array [338][1] = M_gray50_gloss ;

#declare mat_array [339][0] = "M_gray50_metal" ;
#declare mat_array [339][1] = M_gray50_metal ;

#declare mat_array [340][0] = "M_gray60_dull" ;
#declare mat_array [340][1] = M_gray60_dull ;

#declare mat_array [341][0] = "M_gray60_gloss" ;
#declare mat_array [341][1] = M_gray60_gloss ;

#declare mat_array [342][0] = "M_gray60_metal" ;
#declare mat_array [342][1] = M_gray60_metal ;

#declare mat_array [343][0] = "M_gray70_dull" ;
#declare mat_array [343][1] = M_gray70_dull ;

#declare mat_array [344][0] = "M_gray70_gloss" ;
#declare mat_array [344][1] = M_gray70_gloss ;

#declare mat_array [345][0] = "M_gray70_metal" ;
#declare mat_array [345][1] = M_gray70_metal ;

#declare mat_array [346][0] = "M_gray80_dull" ;
#declare mat_array [346][1] = M_gray80_dull ;

#declare mat_array [347][0] = "M_gray80_gloss" ;
#declare mat_array [347][1] = M_gray80_gloss ;

#declare mat_array [348][0] = "M_gray80_metal" ;
#declare mat_array [348][1] = M_gray80_metal ;

#declare mat_array [349][0] = "M_gray90_dull" ;
#declare mat_array [349][1] = M_gray90_dull ;

#declare mat_array [350][0] = "M_gray90_gloss" ;
#declare mat_array [350][1] = M_gray90_gloss ;

#declare mat_array [351][0] = "M_gray90_metal" ;
#declare mat_array [351][1] = M_gray90_metal ;

#declare mat_array [352][0] = "M_cool_gray_dull" ;
#declare mat_array [352][1] = M_cool_gray_dull ;

#declare mat_array [353][0] = "M_cool_gray_gloss" ;
#declare mat_array [353][1] = M_cool_gray_gloss ;

#declare mat_array [354][0] = "M_cool_gray_metal" ;
#declare mat_array [354][1] = M_cool_gray_metal ;

#declare mat_array [355][0] = "M_warm_gray_dull" ;
#declare mat_array [355][1] = M_warm_gray_dull ;

#declare mat_array [356][0] = "M_warm_gray_gloss" ;
#declare mat_array [356][1] = M_warm_gray_gloss ;

#declare mat_array [357][0] = "M_warm_gray_metal" ;
#declare mat_array [357][1] = M_warm_gray_metal ;

#declare mat_array [358][0] = "M_yellow_gray_dull" ;
#declare mat_array [358][1] = M_yellow_gray_dull ;

#declare mat_array [359][0] = "M_yellow_gray_gloss" ;
#declare mat_array [359][1] = M_yellow_gray_gloss ;

#declare mat_array [360][0] = "M_yellow_gray_metal" ;
#declare mat_array [360][1] = M_yellow_gray_metal ;

#declare mat_array [361][0] = "M_brown_gray_dull" ;
#declare mat_array [361][1] = M_brown_gray_dull ;

#declare mat_array [362][0] = "M_brown_gray_gloss" ;
#declare mat_array [362][1] = M_brown_gray_gloss ;

#declare mat_array [363][0] = "M_brown_gray_metal" ;
#declare mat_array [363][1] = M_brown_gray_metal ;

//---   t a n s  -  c r e a m s 

#declare mat_array [364][0] = "M_putty_dull" ;
#declare mat_array [364][1] = M_putty_dull ;

#declare mat_array [365][0] = "M_putty_gloss" ;
#declare mat_array [365][1] = M_putty_gloss ;

#declare mat_array [366][0] = "M_putty_metal" ;
#declare mat_array [366][1] = M_putty_metal ;

#declare mat_array [367][0] = "M_tan_dull" ;
#declare mat_array [367][1] = M_tan_dull ;

#declare mat_array [368][0] = "M_tan_gloss" ;
#declare mat_array [368][1] = M_tan_gloss ;

#declare mat_array [369][0] = "M_tan_metal" ;
#declare mat_array [369][1] = M_tan_metal ;

#declare mat_array [370][0] = "M_light_tan_dull" ;
#declare mat_array [370][1] = M_light_tan_dull ;

#declare mat_array [371][0] = "M_light_tan_gloss" ;
#declare mat_array [371][1] = M_light_tan_gloss ;

#declare mat_array [372][0] = "M_light_tan_metal" ;
#declare mat_array [372][1] = M_light_tan_metal ;

#declare mat_array [373][0] = "M_dark_tan_dull" ;
#declare mat_array [373][1] = M_dark_tan_dull ;

#declare mat_array [374][0] = "M_dark_tan_gloss" ;
#declare mat_array [374][1] = M_dark_tan_gloss ;

#declare mat_array [375][0] = "M_dark_tan_metal" ;
#declare mat_array [375][1] = M_dark_tan_metal ;

#declare mat_array [376][0] = "M_beige_dull" ;
#declare mat_array [376][1] = M_beige_dull ;

#declare mat_array [377][0] = "M_beige_gloss" ;
#declare mat_array [377][1] = M_beige_gloss ;

#declare mat_array [378][0] = "M_beige_metal" ;
#declare mat_array [378][1] = M_beige_metal ;

#declare mat_array [379][0] = "M_sand_dull" ;
#declare mat_array [379][1] = M_sand_dull ;

#declare mat_array [380][0] = "M_sand_gloss" ;
#declare mat_array [380][1] = M_sand_gloss ;

#declare mat_array [381][0] = "M_sand_metal" ;
#declare mat_array [381][1] = M_sand_metal ;

#declare mat_array [382][0] = "M_off_white_dull" ;
#declare mat_array [382][1] = M_off_white_dull ;

#declare mat_array [383][0] = "M_off_white_gloss" ;
#declare mat_array [383][1] = M_off_white_gloss ;

#declare mat_array [384][0] = "M_off_white_metal" ;
#declare mat_array [384][1] = M_off_white_metal ;

#declare mat_array [385][0] = "M_pearl_dull" ;
#declare mat_array [385][1] = M_pearl_dull ;

#declare mat_array [386][0] = "M_pearl_gloss" ;
#declare mat_array [386][1] = M_pearl_gloss ;

#declare mat_array [387][0] = "M_pearl_metal" ;
#declare mat_array [387][1] = M_pearl_metal ;

#declare mat_array [388][0] = "M_ivory_dull" ;
#declare mat_array [388][1] = M_ivory_dull ;

#declare mat_array [389][0] = "M_ivory_gloss" ;
#declare mat_array [389][1] = M_ivory_gloss ;

#declare mat_array [390][0] = "M_ivory_metal" ;
#declare mat_array [390][1] = M_ivory_metal ;

#declare mat_array [391][0] = "M_cream_dull" ;
#declare mat_array [391][1] = M_cream_dull ;

#declare mat_array [392][0] = "M_cream_gloss" ;
#declare mat_array [392][1] = M_cream_gloss ;

#declare mat_array [393][0] = "M_cream_metal" ;
#declare mat_array [393][1] = M_cream_metal ;

#declare mat_array [394][0] = "M_dark_cream_dull" ;
#declare mat_array [394][1] = M_dark_cream_dull ;

#declare mat_array [395][0] = "M_dark_cream_gloss" ;
#declare mat_array [395][1] = M_dark_cream_gloss ;

#declare mat_array [396][0] = "M_dark_cream_metal" ;
#declare mat_array [396][1] = M_dark_cream_metal ;

#declare mat_array [397][0] = "M_champagne_dull" ;
#declare mat_array [397][1] = M_champagne_dull ;

#declare mat_array [398][0] = "M_champagne_gloss" ;
#declare mat_array [398][1] = M_champagne_gloss ;

#declare mat_array [399][0] = "M_champagne_metal" ;
#declare mat_array [399][1] = M_champagne_metal ;

#declare mat_array [400][0] = "M_wheat_dull" ;
#declare mat_array [400][1] = M_wheat_dull ;

#declare mat_array [401][0] = "M_wheat_gloss" ;
#declare mat_array [401][1] = M_wheat_gloss ;

#declare mat_array [402][0] = "M_wheat_metal" ;
#declare mat_array [402][1] = M_wheat_metal ;

//---   m e t a l s
#declare mat_array [403][0] = "M_chrome" ;
#declare mat_array [403][1] = M_chrome ;

#declare mat_array [404][0] = "M_steel" ;
#declare mat_array [404][1] = M_steel ;

#declare mat_array [405][0] = "M_blue_steel" ;
#declare mat_array [405][1] = M_blue_steel ;

#declare mat_array [406][0] = "M_warm_steel" ;
#declare mat_array [406][1] = M_warm_steel ;

#declare mat_array [407][0] = "M_metal_gold" ;
#declare mat_array [407][1] = M_metal_gold ;

#declare mat_array [408][0] = "M_metal_dark_gold" ;
#declare mat_array [408][1] = M_metal_dark_gold ;

#declare mat_array [409][0] = "M_metal_copper" ;
#declare mat_array [409][1] = M_metal_copper ;

#declare mat_array [410][0] = "M_metal_bronze" ;
#declare mat_array [410][1] = M_metal_bronze ;

#declare mat_array [411][0] = "M_metal_dark_bronze" ;
#declare mat_array [411][1] = M_metal_dark_bronze ;

#declare mat_array [412][0] = "M_metal_alum" ;
#declare mat_array [412][1] = M_metal_alum ;

#declare mat_array [413][0] = "M_galvanize" ;
#declare mat_array [413][1] = M_galvanize ;

#declare mat_array [414][0] = "M_steel_old" ;
#declare mat_array [414][1] = M_steel_old ;

#declare mat_array [415][0] = "M_alum_old" ;
#declare mat_array [415][1] = M_alum_old ;

#declare mat_array [416][0] = "M_copper_old" ;
#declare mat_array [416][1] = M_copper_old ;

#declare mat_array [417][0] = "M_metal_gold_grid" ;
#declare mat_array [417][1] = M_metal_gold_grid ;

//---   o l d    p a i n t
#declare mat_array [447][0] = "M_blue_paint_old" ;
#declare mat_array [447][1] = M_blue_paint_old ;

#declare mat_array [448][0] = "M_rose_paint_old" ;
#declare mat_array [448][1] = M_rose_paint_old ;

#declare mat_array [449][0] = "M_ivory_paint_old" ;
#declare mat_array [449][1] = M_ivory_paint_old ;

//---   g l a s s
#declare mat_array [470][0] = "M_glass" ;
#declare mat_array [470][1] = M_glass ;

#declare mat_array [471][0] = "M_glass_dark" ;
#declare mat_array [471][1] = M_glass_dark ;

#declare mat_array [472][0] = "M_glass_red" ;
#declare mat_array [472][1] = M_glass_red ;

#declare mat_array [473][0] = "M_glass_gold" ;
#declare mat_array [473][1] = M_glass_gold ;

#declare mat_array [474][0] = "M_glass_green" ;
#declare mat_array [474][1] = M_glass_green ;

#declare mat_array [475][0] = "M_glass_blue" ;
#declare mat_array [475][1] = M_glass_blue ;

#declare mat_array [476][0] = "M_glass_milk" ;
#declare mat_array [476][1] = M_glass_milk ;

#declare mat_array [477][0] = "M_glass_frosted" ;
#declare mat_array [477][1] = M_glass_frosted ;

#declare mat_array [478][0] = "M_glass_wripple" ;
#declare mat_array [478][1] = M_glass_wripple ;

#declare mat_array [479][0] = "M_glass_gold_frost" ;
#declare mat_array [479][1] = M_glass_gold_frost ;

#declare mat_array [480][0] = "M_glass_gold_wripple" ;
#declare mat_array [480][1] = M_glass_gold_wripple ;

#declare mat_array [481][0] = "M_glass_green_water" ;
#declare mat_array [481][1] = M_glass_green_water ;

#declare mat_array [482][0] = "M_glass_old" ;
#declare mat_array [482][1] = M_glass_old ;

#declare mat_array [483][0] = "M_glass_dark_blue" ;
#declare mat_array [483][1] = M_glass_dark_blue ;

#declare mat_array [484][0] = "M_glass_red_pillow" ;
#declare mat_array [484][1] = M_glass_red_pillow ;

#declare mat_array [485][0] = "M_glass_clear_pillow" ;
#declare mat_array [485][1] = M_glass_clear_pillow ;

#declare mat_array [486][0] = "M_glass_swirl_A" ;
#declare mat_array [486][1] = M_glass_swirl_A ;

#declare mat_array [487][0] = "M_glass_swirl_B" ;
#declare mat_array [487][1] = M_glass_swirl_B ;
 
#declare mat_array [488][0] = "M_glass_block2" ;
#declare mat_array [488][1] = M_glass_block2 ;

//---   m i s c 
#declare mat_array [533][0] = "M_chipped_blue_gold" ;
#declare mat_array [533][1] = M_chipped_blue_gold ;

#declare mat_array [534][0] = "M_chipped_white_gray" ;
#declare mat_array [534][1] = M_chipped_white_gray ;

#declare mat_array [535][0] = "M_red_rubber" ;
#declare mat_array [535][1] = M_red_rubber ;

#declare mat_array [536][0] = "M_dark_gray_rubber" ;
#declare mat_array [536][1] = M_dark_gray_rubber ;

#declare mat_array [537][0] = "M_black_rubber" ;
#declare mat_array [537][1] = M_black_rubber ;  

#declare mat_array [538][0] = "M_black_rubber_grip" ;
#declare mat_array [538][1] = M_black_rubber_grip ;  

#declare mat_array [550][0] = "M_purple_bevel_satin" ;
#declare mat_array [550][1] = M_purple_bevel_satin ;

#declare mat_array [551][0] = "M_green_apple_bands" ;
#declare mat_array [551][1] = M_green_apple_bands ;

#declare mat_array [552][0] = "M_green_apple" ;
#declare mat_array [552][1] = M_green_apple 

#declare mat_array [553][0] = "M_spotted_weed_A" ;
#declare mat_array [553][1] = M_spotted_weed_A 

#declare mat_array [554][0] = "M_spotted_weed_B" ;
#declare mat_array [554][1] = M_spotted_weed_B 

#declare mat_array [555][0] = "M_galvanize_pitted" ;
#declare mat_array [555][1] = M_galvanize_pitted 

//---   w a l l   t i l e
#declare mat_array [556][0] = "M_purple_teal_tile" ;
#declare mat_array [556][1] = M_purple_teal_tile 

#declare mat_array [557][0] = "M_ivory_tile" ;
#declare mat_array [557][1] = M_ivory_tile 

#declare mat_array [558][0] = "M_black_gray_tile" ;
#declare mat_array [558][1] = M_black_gray_tile 

//---   g r a d i e n t s
#declare mat_array [600][0] = "M_sky_blue_teal" ;
#declare mat_array [600][1] = M_sky_blue_teal ;

#declare mat_array [601][0] = "M_sky_gray_blue" ;
#declare mat_array [601][1] = M_sky_gray_blue ;

#declare mat_array [602][0] = "M_teal_purple" ;
#declare mat_array [602][1] = M_teal_purple ;

#declare mat_array [603][0] = "M_ground_sky" ;
#declare mat_array [603][1] = M_ground_sky ;

#declare mat_array [603][0] = "M_ground_sky_chrome" ;
#declare mat_array [603][1] = M_ground_sky_chrome ;

//---   s w i r l s
#declare mat_array [620][0] = "M_blue_purple_milk" ;
#declare mat_array [620][1] = M_blue_purple_milk ;

#declare mat_array [621][0] = "M_gold_violet_swirl" ;
#declare mat_array [621][1] = M_gold_violet_swirl ;

#declare mat_array [622][0] = "M_shroom_A" ;
#declare mat_array [622][1] = M_shroom_A ;

#declare mat_array [623][0] = "M_glass_gold_swirl" ;
#declare mat_array [623][1] = M_glass_gold_swirl ;


//---   w o o d
#declare mat_array [700][0] = "M_wood_blond_dull" ;
#declare mat_array [700][1] = M_wood_blond_dull ;

#declare mat_array [701][0] = "M_wood_blond_satin" ;
#declare mat_array [701][1] = M_wood_blond_satin ;

#declare mat_array [702][0] = "M_wood_sepia_satin" ;
#declare mat_array [702][1] = M_wood_sepia_satin ;

#declare mat_array [703][0] = "M_wood_hazel_oak_satin" ;
#declare mat_array [703][1] = M_wood_hazel_oak_satin ;

#declare mat_array [704][0] = "M_wood_mohogany_satin" ;
#declare mat_array [704][1] = M_wood_mohogany_satin ;

#declare mat_array [705][0] = "M_wood_painted_gray" ;
#declare mat_array [705][1] = M_wood_painted_gray 


//---   W O O D S . i n c
#declare mat_array [800][0] = "M_Wood01" ;
#declare mat_array [800][1] = M_Wood01 ;

#declare mat_array [801][0] = "M_Wood02" ;
#declare mat_array [801][1] = M_Wood02 ;

#declare mat_array [802][0] = "M_Wood03" ;
#declare mat_array [802][1] = M_Wood03 ;

#declare mat_array [803][0] = "M_Wood04" ;
#declare mat_array [803][1] = M_Wood04 ;

#declare mat_array [804][0] = "M_Wood05" ;
#declare mat_array [804][1] = M_Wood05 ;

#declare mat_array [805][0] = "M_Wood06" ;
#declare mat_array [805][1] = M_Wood06 ;

#declare mat_array [806][0] = "M_Wood07" ;
#declare mat_array [806][1] = M_Wood07 ;

#declare mat_array [807][0] = "M_Wood08" ;
#declare mat_array [807][1] = M_Wood08 ;

#declare mat_array [808][0] = "M_Wood09" ;
#declare mat_array [808][1] = M_Wood09 ;

#declare mat_array [809][0] = "M_Wood10" ;
#declare mat_array [809][1] = M_Wood10 ;

#declare mat_array [810][0] = "M_Wood11" ;
#declare mat_array [810][1] = M_Wood11 ;

#declare mat_array [811][0] = "M_Wood12" ;
#declare mat_array [811][1] = M_Wood12 ;

#declare mat_array [812][0] = "M_Wood13" ;
#declare mat_array [812][1] = M_Wood13 ;

#declare mat_array [813][0] = "M_Wood14" ;
#declare mat_array [813][1] = M_Wood14 ;

#declare mat_array [814][0] = "M_Wood15" ;
#declare mat_array [814][1] = M_Wood15 ;

#declare mat_array [815][0] = "M_Wood16" ;
#declare mat_array [815][1] = M_Wood16 ;

#declare mat_array [816][0] = "M_Wood17" ;
#declare mat_array [816][1] = M_Wood17 ;

#declare mat_array [817][0] = "M_Wood18" ;
#declare mat_array [817][1] = M_Wood18 ;

#declare mat_array [818][0] = "M_Wood19" ;
#declare mat_array [818][1] = M_Wood19 ;

#declare mat_array [819][0] = "M_Wood20" ;
#declare mat_array [819][1] = M_Wood20 ;

#declare mat_array [820][0] = "M_Wood21" ;
#declare mat_array [820][1] = M_Wood21 ;

#declare mat_array [821][0] = "M_Wood22" ;
#declare mat_array [821][1] = M_Wood22 ;

#declare mat_array [822][0] = "M_Wood23" ;
#declare mat_array [822][1] = M_Wood23 ;

#declare mat_array [823][0] = "M_Wood24" ;
#declare mat_array [823][1] = M_Wood24 ;

#declare mat_array [824][0] = "M_Wood25" ;
#declare mat_array [824][1] = M_Wood25 ;

#declare mat_array [825][0] = "M_Wood26" ;
#declare mat_array [825][1] = M_Wood26 ;

#declare mat_array [826][0] = "M_Wood27" ;
#declare mat_array [826][1] = M_Wood27 ;

#declare mat_array [827][0] = "M_Wood28" ;
#declare mat_array [827][1] = M_Wood28 ;

#declare mat_array [828][0] = "M_Wood29" ;
#declare mat_array [828][1] = M_Wood29 ;

#declare mat_array [829][0] = "M_Wood30" ;
#declare mat_array [829][1] = M_Wood30 ;

#declare mat_array [830][0] = "M_Wood31" ;
#declare mat_array [830][1] = M_Wood31 ;

#declare mat_array [831][0] = "M_Wood32" ;
#declare mat_array [831][1] = M_Wood32 ;

#declare mat_array [832][0] = "M_Wood33" ;
#declare mat_array [832][1] = M_Wood33 ;

#declare mat_array [833][0] = "M_Wood34" ;
#declare mat_array [833][1] = M_Wood34 ;

#declare mat_array [834][0] = "M_Wood35" ;
#declare mat_array [834][1] = M_Wood35 ;


//---   g r o u n d
#declare mat_array [949][0] = "M_ground_sand" ;
#declare mat_array [949][1] = M_ground_sand 

#declare mat_array [950][0] = "M_ground_green" ;
#declare mat_array [950][1] = M_ground_green 

#declare mat_array [951][0] = "M_ground_mud" ;
#declare mat_array [951][1] = M_ground_mud 

#declare mat_array [952][0] = "M_ground_mud_overlay" ;
#declare mat_array [952][1] = M_ground_mud_overlay 

#declare mat_array [953][0] = "M_ground_dirty_sand" ;
#declare mat_array [953][1] = M_ground_dirty_sand 

//  416 - M_copper_old 
//  486 - M_glass_swirl_A 
//  622 - M_shroom_A 
//  554 - M_spotted_weed_B 
//  477 - M_glass_frosted
//  488 - M_glass_block
//  951 - M_ground_mud

// -----------------------------------------------------------------------------------------
//                      V I E W   T H I S   S A M P L E
//------------------------------------------------------------------------------------------ 
#declare current_sample = 951 ;
#include "view_samples.inc"  
//#include "view_samples_vertical.inc"
