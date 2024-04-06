//------------------------------------------------------------------------
//
// Persistence of Vision Ray Tracer version 3.8
// Scene Description Language (SDL)
// 
// Playground: testing environment
//
// File: playground.inc
//
// Version: 1.0
// Last updated: 15-Feb-2023
//
// Author: Sergey Yanenko "Yesbird", 2023
// e-mail: See posts in news.povray.org
//
//------------------------------------------------------------------------

//
// Axis textures
//
#declare fin_axis = finish { phong 1 reflection {0.10 metallic 0.4 }}
#declare tex_axis_common = texture {
           pigment { rgb <0.70, 0.70, 0.70> }
           finish  { fin_axis }}
#declare tex_axis_x = texture { pigment { rgb x} finish { fin_axis }}
#declare tex_axis_y = texture { pigment { rgb y} finish { fin_axis }}
#declare tex_axis_z = texture { pigment { rgb z} finish { fin_axis }}

//
// Axis
//
#macro axis_base( len, rad, tex_odd, tex_even )
union{
    cylinder { <0, -len, 0>,<0, len, 0>, rad
               texture{ checker texture{ tex_odd } texture{ tex_even }
               translate <0.1, 0, 0.1> }}

    cone{<0, len, 0>, rad * 2, <0, len + rad * 7, 0>, 0 texture{tex_even} }}
#end

#macro axis_xyz( len_x, len_y, len_z, rad, tex_common, tex_x, tex_y, tex_z)
union{
    #if (len_x != 0) object { axis_base(len_x, rad, tex_common, tex_x) rotate<  0, 0,-90>} #end
    #if (len_y != 0) object { axis_base(len_y, rad, tex_common, tex_y) rotate<  0, 0,  0>} #end
    #if (len_z != 0) object { axis_base(len_z, rad, tex_common, tex_z) rotate< 90, 0,  0>} #end }
#end

#macro axis(len_x, len_y, len_z, rad)
    axis_xyz( len_x, len_y, len_z, rad, tex_axis_common, tex_axis_x, tex_axis_y, tex_axis_z)
#end
               
//
// Perspective camera
//
#macro camp (loc, lat, _ang)
camera
  { perspective
    location loc
    look_at  lat
    angle _ang
  }
#end

//
// Orthographic camera
//
#macro camo (loc, lat, _ang)
camera
  { orthographic
    location loc
    look_at  lat
    angle _ang
  }
#end

//
// Lights
//


light_source {<0,  10, 0>, rgb <1,1,1> * luminosity shadowless}
// light_source {<0, -10, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {< 10, 0, 0>, rgb <1,1,1> * luminosity shadowless}
// light_source {<-10, 0, 0>, rgb <1,1,1> * luminosity shadowless}

light_source {<0, 0,  10>, rgb <1,1,1> * luminosity shadowless}
// light_source {<0, 0, -10>, rgb <1,1,1> * luminosity shadowless}

//------------------------------------------------------------------------
