// office space for material/light studies
// m.miller 11.08.23


//------------------------------------------------------------------------------------------
//                     W I N D O W   M U L L I O N S
//------------------------------------------------------------------------------------------
#declare mullions =
#declare rad = .25 ;
union { 
    #declare sc = <155.000, 2.000, 3.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 2.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <44.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <110.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <87.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <153.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-21.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-44.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-110.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-87.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-153.500, 50.000, 0.000> } 
    #declare sc = <1.500, 50.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <21.500, 50.000, 0.000> } 
    #declare sc = <155.000, 2.000, 3.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 98.000, 0.000> } 
    #declare sc = <20.000, 1.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 40.000, 0.000> } 
    #declare sc = <20.000, 1.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <66.000, 40.000, 0.000> } 
    #declare sc = <20.000, 1.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <132.000, 40.000, 0.000> } 
    #declare sc = <20.000, 1.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-66.000, 40.000, 0.000> } 
    #declare sc = <20.000, 1.000, 3.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-132.000, 40.000, 0.000> } 
      }


//------------------------------------------------------------------------------------------
//                     W I N D O W   G A S K E T S
//------------------------------------------------------------------------------------------
#declare glass_gasket =
#declare rad = .25 ;
union { 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-151.899, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-89.089, 50.000, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-99.000, 95.900, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-132.000, 41.100, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-132.000, 38.899, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-132.000, 4.100, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-112.099, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-108.909, 50.000, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-132.000, 95.900, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-99.000, 4.095, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-33.000, 4.095, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-66.000, 95.900, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-42.909, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-46.099, 50.000, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-66.000, 4.100, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-66.000, 38.899, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-66.000, 41.100, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-33.000, 95.900, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-23.089, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-85.899, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-19.899, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <42.910, 50.000, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <33.000, 95.900, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 41.100, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 38.899, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 4.100, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <19.900, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <23.090, 50.000, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 95.900, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <33.000, 4.095, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <99.000, 4.095, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <66.000, 95.900, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <89.090, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <85.900, 50.000, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <66.000, 4.100, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <66.000, 38.899, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <66.000, 41.100, 0.000> } 
    #declare sc = <10.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <99.000, 95.900, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <108.910, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <46.100, 50.000, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <112.100, 50.000, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <132.000, 41.100, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <132.000, 38.899, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <132.000, 4.100, 0.000> } 
    #declare sc = <0.100, 50.000, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <151.899, 50.000, 0.000> } 
    #declare sc = <20.000, 0.100, 0.600> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <132.000, 95.900, 0.000> } 
      }



//------------------------------------------------------------------------------------------
//                     C O R N E R    D R Y W A L L
//------------------------------------------------------------------------------------------
#declare corner_walls =
#declare rad = .025 ;
union { 
    #declare sc = <10.000, 50.000, 4.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <165.000, 50.000, 0.000> } 
    #declare sc = <10.000, 50.000, 4.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-165.000, 50.000, 0.000> } 
      }


//------------------------------------------------------------------------------------------
//                     G L A S S    C L E A R
//------------------------------------------------------------------------------------------
#declare glass_A =
#declare rad = .25 ;
union { 
    #declare sc = <20.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 50.000, 0.000>  } 
    #declare sc = <20.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <66.000, 50.000, 0.000> } 
    #declare sc = <20.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <132.000, 50.000, 0.000> } 
    #declare sc = <20.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-66.000, 50.000, 0.000> } 
    #declare sc = <20.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-132.000, 50.000, 0.000> } 
      }


//------------------------------------------------------------------------------------------
//                     G L A S S    T I N T E D
//------------------------------------------------------------------------------------------
#declare glass_B =
#declare rad = .25 ;
union { 
    #declare sc = <10.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <33.000, 50.000, 0.000> } 
    #declare sc = <10.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <99.000, 50.000, 0.000> } 
    #declare sc = <10.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-33.000, 50.000, 0.000> } 
    #declare sc = <10.000, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-99.000, 50.000, 0.000> } 
      }





//------------------------------------------------------------------------------------------
//                     S O F I T   W A L L   E X T E N S I O N
//------------------------------------------------------------------------------------------ 
#declare soffit_wall =
#declare rad = .025 ;
union { 
    #declare sc = <175.000, 20.000, 4.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 120.000, 175.000> } 
    #declare sc = <175.000, 20.000, 4.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 120.000, -175.000> } 
    #declare sc = <4.000, 20.000, 175.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-175.000, 120.000, 0.000> } 
    #declare sc = <4.000, 20.000, 175.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <175.000, 120.000, 0.000> } 
      }



//------------------------------------------------------------------------------------------
//                     D A T A   P O I N T S  -  C A N   L I G H T   L O C A T I O N S
//------------------------------------------------------------------------------------------
#declare pointDataCount = 20 ;
#declare pointArray = array mixed [pointDataCount][2] ;
#declare pointArray[0][0] = <-33.000, 104.995, 160.000>  ;
#declare pointArray[0][1] = 3.000 ;
#declare pointArray[1][0] = <33.000, 104.995, 160.000>  ;
#declare pointArray[1][1] = 3.000 ;
#declare pointArray[2][0] = <99.000, 104.995, 160.000>  ;
#declare pointArray[2][1] = 3.000 ;
#declare pointArray[3][0] = <160.963, 104.995, 160.000>  ;
#declare pointArray[3][1] = 3.000 ;
#declare pointArray[4][0] = <-99.000, 104.995, 160.000>  ;
#declare pointArray[4][1] = 3.000 ;
#declare pointArray[5][0] = <-160.252, 104.995, 160.000>  ;
#declare pointArray[5][1] = 3.000 ;
#declare pointArray[6][0] = <-160.252, 104.995, -159.726>  ;
#declare pointArray[6][1] = 3.000 ;
#declare pointArray[7][0] = <-99.000, 104.995, -159.726>  ;
#declare pointArray[7][1] = 3.000 ;
#declare pointArray[8][0] = <159.945, 104.995, -159.726>  ;
#declare pointArray[8][1] = 3.000 ;
#declare pointArray[9][0] = <99.000, 104.995, -159.726>  ;
#declare pointArray[9][1] = 3.000 ;
#declare pointArray[10][0] = <33.000, 104.995, -159.726>  ;
#declare pointArray[10][1] = 3.000 ;
#declare pointArray[11][0] = <-33.000, 104.995, -159.726>  ;
#declare pointArray[11][1] = 3.000 ;
#declare pointArray[12][0] = <-159.744, 104.995, 33.255>  ;
#declare pointArray[12][1] = 3.000 ;
#declare pointArray[13][0] = <-159.744, 104.995, -32.744>  ;
#declare pointArray[13][1] = 3.000 ;
#declare pointArray[14][0] = <-159.744, 104.995, -98.744>  ;
#declare pointArray[14][1] = 3.000 ;
#declare pointArray[15][0] = <-159.744, 104.995, 99.255>  ;
#declare pointArray[15][1] = 3.000 ;
#declare pointArray[16][0] = <159.981, 104.995, 99.255>  ;
#declare pointArray[16][1] = 3.000 ;
#declare pointArray[17][0] = <159.981, 104.995, -98.744>  ;
#declare pointArray[17][1] = 3.000 ;
#declare pointArray[18][0] = <159.981, 104.995, -32.744>  ;
#declare pointArray[18][1] = 3.000 ;
#declare pointArray[19][0] = <159.981, 104.995, 33.255>  ;
#declare pointArray[19][1] = 3.000 ;


//------------------------------------------------------------------------------------------
//                    S O F I T 
//------------------------------------------------------------------------------------------
#declare soffit =
#declare rad = .25 ;
difference { 
    #declare sc = <171.000, 10.000, 171.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 120.000, 0.000> } 
    #declare sc = <150.000, 20.000, 150.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 120.000, 0.000> } 
    
    #for (i,0,pointDataCount-1)
        cylinder {<0,0,0>,<0,200,0>, 3 translate <pointArray[i][0].x,0,pointArray[i][0].z> }
    #end
    }



// -----------------------------------------------------------------------------------------
//                    S O F I T   C A N   L I G H T S
//-----------------------------------------------------------------------------------------
#declare soffit_lights =
union {
    #declare sphere_light = sphere {<0,0,0>,2 scale <1,.15,1> material {M_light_glow}} ;
    #declare sphere_plug =  sphere {<0,0,0>,2 scale <1,.15,1> material {M_white_matt}} 
    #declare torus_ring = torus {2.8,.5 scale <1,.3,1> material {M_chrome}}
    #for (i,0,pointDataCount-1)
        object { sphere_light translate <pointArray[i][0].x,110,pointArray[i][0].z> } 
        object { sphere_plug  translate <pointArray[i][0].x,120,pointArray[i][0].z> }  
        object { torus_ring  translate <pointArray[i][0].x,110,pointArray[i][0].z> }
    #end

}


//-----------------------------------------------------------------------------------------
//                    C E I L I N G   /   R O O F
//-----------------------------------------------------------------------------------------
#declare ceiling_A =
#declare rad = .25 ;
union { 
    #declare sc = <175.000, 1.000, 175.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 139.002, 0.000> } 
      }




//-----------------------------------------------------------------------------------------
//                    C E I L I N G    S C R E E N   +   F R A M E 
//-----------------------------------------------------------------------------------------
#declare ceiling_screen_frame =
#declare rad = .15 ;
union { 
    #declare sc = <140.000, 1.000, 1.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 120.450, 15.272> } 
    #declare sc = <1.000, 1.000, 60.889> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-139.000, 120.450, 77.160> } 
    #declare sc = <1.000, 1.000, 60.889> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <139.000, 120.450, 77.160> } 
    #declare sc = <140.000, 1.000, 1.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 120.450, 139.048> } 
    }

#declare ceiling_screen =
union { 
    object { box {<-138.18,0,16>,<138.18,0,138.18> translate <0,120.450,0> }}
    }


//-----------------------------------------------------------------------------------------
//                    B O X   L I G H T   A
//-----------------------------------------------------------------------------------------  

#declare box_light_A =
#declare rad = .25 ;
union { 
    #declare sc = <120.000, 3.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-0.000, 108.944, 29.880> } 
    #declare sc = <120.000, 3.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-0.000, 108.944, 48.020> } 
    #declare sc = <0.500, 3.000, 8.570> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-119.499, 108.944, 38.950> } 
    #declare sc = <0.500, 3.000, 8.570> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <119.499, 108.944, 38.950> } 
    }


#declare box_light_A_lens =
#declare rad = .25 ;
union { 
    #declare sc = <119.010, 0.150, 8.580> ;
    object { box{<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc scale <2,2,2> translate <0.001, 107, 38.952> } }
      }


#declare box_light_A =
union{
   object {box_light_A material {mat_gray10_satin}}
   object {box_light_A_lens  material {M_light_glow} translate <0,-.01,0> no_image } 
   object {box_light_A_lens  material {M_light_off} }
}


//-----------------------------------------------------------------------------------------
//                    B O X   L I G H T   B
//----------------------------------------------------------------------------------------- 

#declare box_light_B =
#declare rad = .25 ;
union { 
    #declare sc = <1.000, 1.500, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-93.908, 108.460, 108.819> } 
    #declare sc = <1.000, 1.500, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-43.936, 108.460, 108.819> } 
    #declare sc = <1.000, 1.500, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <6.034, 108.460, 108.819> } 
    #declare sc = <1.000, 1.500, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <56.161, 108.460, 108.819> } 
      }

#declare  box_light_B_lens =
#declare rad = .25 ;
union { 
    #declare sc = <1.000, 0.100, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-93.908, 106.862, 108.819> } 
    #declare sc = <1.000, 0.100, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-43.936, 106.862, 108.819> } 
    #declare sc = <1.000, 0.100, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <6.034, 106.862, 108.819> } 
    #declare sc = <1.000, 0.100, 28.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <56.161, 106.862, 108.819> } 
      }


#declare box_light_B =
union{
   object {box_light_B material {mat_gray10_satin}}
   object {box_light_B_lens  material {M_light_glow} translate <0,-.01,0> no_image } 
   object {box_light_B_lens  material {M_light_off}}
}


//-----------------------------------------------------------------------------------------
//                    C E I L I N G   W O O D   P A N E L
//----------------------------------------------------------------------------------------- 

#declare ceiling_wood_panel =
#declare rad = .25 ;
union { 
    #declare sc = <25.000, 1.000, 22.933> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-94.840, 108.571, 90.054> } 
    #declare sc = <25.000, 1.000, 22.933> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-44.827, 108.571, 90.054> } 
    #declare sc = <25.000, 1.000, 22.933> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <5.180, 108.571, 90.054> } 
    #declare sc = <25.000, 1.000, 22.933> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <55.181, 108.571, 90.054> } 
      }

//-----------------------------------------------------------------------------------------
//                    C O M P L E T E    C U R T A I N    W A L L
//-----------------------------------------------------------------------------------------  
#declare curtain_walls =
union {
    object {mullions        material{mat_mull}}
    object {corner_walls    material{mat_wall}} 
    object {glass_A         material{mat_glass_A} #if (show_glass_shadows) #else no_shadow #end} 
    object {glass_B         material{mat_glass_B} #if (show_glass_shadows) #else no_shadow #end}
    object {glass_gasket    material{mat_glass_gasket}}
    
}     



//-----------------------------------------------------------------------------------------
//                    C E N T E R   W A L L
//-----------------------------------------------------------------------------------------


#declare wall_A =
#declare rad = .25 ;
union { 
    #declare sc = <120.000, 50.000, 6.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0, 50.000, 0.000> } 
      }


#declare wall_A_face =
#declare rad = .5 ;
union { 
    #declare sc = <39.500, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-79.940, 50.000, 6.501> } 
    #declare sc = <39.500, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0.059, 50.000, 6.501> } 
    #declare sc = <39.500, 50.000, 0.500> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <80.059, 50.000, 6.501> } 
      }

#declare wall_A_base =
#declare rad = .25 ;
union { 
    #declare sc = <120.000, 3.000, 1.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <0.059, 3.000, 6.508> } 
      }
      
#declare wall_A_art =
#declare rad = .10 ;
union { 
    #declare sc = <46.939, 29.940, 0.800> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <21.892, 60.580, 10.113> } 
      }   
      
         
#declare center_wall =
union {
    object { wall_A         material{mat_wall}}     
    object { wall_A_face    material{mat_concrete scale <4,4,4> rotate <-90,0,0>}}  
    object { wall_A_base    material{mat_gray20_satin}}   
    object { wall_A_art     material{sample_mat } translate <10,0,-.5>}
} 
      
      
//-----------------------------------------------------------------------------------------
//                    C O R N E R   P I E R
//-----------------------------------------------------------------------------------------

#declare mat = material {mat_concrete scale <1,1,1> rotate <-90,0,0> }

#declare corner_pier =
#declare rad = .25 ;
union { 
    #declare sc = <5.000, 50.000, 5.000> ;
    object { make_mapped_box(5.000, 55.000, 5.000, .25, mat, 0) scale <2,2,2>  translate <-166.099, 55.000, 166.055> }
    }
      
      
      
//-----------------------------------------------------------------------------------------
//                    F L O O R 
//-----------------------------------------------------------------------------------------



#declare floor_carpet =
#declare rad = .25 ;
difference { 
    #declare sc = <175.000, 1.000, 175.000> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-0.000, -1.000, 0.000> } 
    #declare sc = <65.322, 5.840, 41.282> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-0.000, -1.000, 83.548> } 
      }

#declare floor_concrete =
#declare rad = .25 ;
union { 
    #declare sc = <65.322, 1.000, 41.282> ;
    object { Round_Box(<-.5,-.5,-.5> * sc, <.5,.5,.5> *sc, rad , 0) scale <2,2,2> translate <-0.000, -1.000, 83.548> } 
      }
      
#declare room_floor =
union {
    object {floor_carpet       material{mat_carpet}}
    object {floor_concrete     material{mat_concrete_C}}
} 


//-----------------------------------------------------------------------------------------
//                    C O M P L E T E    C E I L I N G
//-----------------------------------------------------------------------------------------
#declare room_ceiling =
union {
    object {ceiling_A               material {mat_gray20_satin}}
    object {ceiling_screen_frame    material {mat_gray20_gloss}     translate <0,-5,-5>} 
    object {ceiling_screen          material {mat_gray_screen}      translate <0,-5,-5>}
    object {box_light_A                                             translate <0,0,-5>} 
    object {box_light_B                                             translate <0,0,-10>}
    object {ceiling_wood_panel      material {M_pearl_satin}        translate <0,0,-10>}
} 



//-----------------------------------------------------------------------------------------
//                    C O M P L E T E    S O F F I T 
//-----------------------------------------------------------------------------------------
#declare soffit =
union {
    object {soffit_wall     material{mat_wall}}
    object {soffit          material{mat_ceiling}}
    object {soffit_lights}
} 