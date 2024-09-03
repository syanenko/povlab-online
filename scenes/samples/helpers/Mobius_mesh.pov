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

#declare Fx=function(u,v){cos(u)+v*cos(u/2)*cos(u)}
#declare Fy=function(u,v){sin(u)+v*cos(u/2)*sin(u)}
#declare Fz=function(u,v){v*sin(u/2)}              

object {
// 
// Parametric( Fx,Fy,Fz, <u_min, v_min>, <u_max, v_max>, U_res, V_res, FileName)
//
// The uv coordinates for texturing comes from the square <0,0> - <1,1> 
//
// FileName: "" - non,
//           "NAME.obj' - Wavefront objectfile
//           "NAME.pcm" - compressed mesh file 
//           "NAME.arr" - include file with arrays to build a mesh2 from
//           other      - include file with a mesh2 object
//
Parametric( Fx, Fy, Fz, <0, -0.5>, <2*pi, 0.5>, 120, 20, "Mobius.arr" )

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