#version 3.8;
#include "meshmaker.inc"

camera {
  perspective
  angle 15
  location  <10,12,-10>
  look_at   <0,0,0>
  right x * image_width / image_height
}

light_source{<100, 100, -100> rgb 1.1}
light_source{<0, 100,      0> rgb 1.1}

//-------------------------------------------------------------------------------------------------
#declare F1=function(u,v){cos(u)+v*cos(u/2)*cos(u)}
#declare F2=function(u,v){sin(u)+v*cos(u/2)*sin(u)}
#declare F3=function(u,v){v*sin(u/2)}              


difference {

  object{ // Parametric(Fx,Fy, Fz, <UVmin>, <UVmax>, Iter_U, Iter_V, FileName)

     Parametric(    // Builds a parametric surface out of three given functions. 
                    // The uv_coordinates for texturing the surface come from the square <0,0> - <1,1>. 
        F1, F2, F3, //three functions
        <0, -0.5>, <2*pi, 0.5>, // range within to calculate surface: <u min, v min>,<u max, v max>. 
        120, 20,                // resolution of the mesh in the u range and v range.
        "Mobius__.arr" // FileName: ""= non, "NAME.obj'= Wavefront objectfile, "NAME.pcm" compressed mesh file 
                       // "NAME.arr" = include file with arrays to build a mesh2 from, 
                       //  others: includefile with a mesh2 object 
     )
/*
     interior_texture {  //  outside texture
       uv_mapping
       pigment{ checker color rgb <1.1,0.40> rgb <1,1,1> scale <0.02,0.15,1>}
       pigment{ color rgb <1.1,0.4,0>}
       finish { phong 1.5}
     }
*/
     texture{            // inside texture
       //uv_mapping
       //pigment{ checker color rgb <1.1,0.4,0> rgb <1,1,1> scale <0.02,0.15,1>}
       pigment{ color rgb <1.1, 0.4, 0>}
       finish { phong 1.5 }
     }

     rotate<0,0,0>
     scale<1,1,1>*1
     translate<0, 0, 0>
  }
}
//-------------------------------------------------------------------------------------------------