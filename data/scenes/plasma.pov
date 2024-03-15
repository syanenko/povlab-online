//------------------------------------------------------------------------
//
// Persistence of Vision Ray Tracer version 3.8
// Scene Description Language (SDL)
// 
// Deminstration of colormaps
//
// File: usage.pov
// Version: 1.0
// Last updated: 13-Feb-2023
//
// Author: Sergey Yanenko "Yesbird", 2023
// e-mail: See posts in news.povray.org
//
//------------------------------------------------------------------------
#version 3.8;
global_settings { assumed_gamma 1 }

#declare luminosity = 2.6;
#include "playground.inc"
#include "colormaps.inc"
#include "functions.inc"

// Axis
// axis (3,2.1,3, 0.02)

// Cameras
//camo (5,5,5, 0,0,0, 45)
camp (5,4,5, 0,0,0, 43)

//
// Make text
//
#macro make_text (_text, _x)
     #local _text =
        text { ttf "arial.ttf", _text, 0.02, 0.0 scale 2.1 translate <_x,-0.5,-0.1>  pigment {rgb <0,0,0,0,0> }}
    _text
#end

//
// Prepare colormap
//
#declare _f = 0.6;
#declare _t = 0;
#declare jet              = make_colormap (jet,              _f, _t);
#declare spring           = make_colormap (spring,           _f, _t);
#declare hot              = make_colormap (hot,              _f, _t);
#declare winter           = make_colormap (winter,           _f, _t);
#declare hsv              = make_colormap (hsv,              _f, _t);
#declare autumn           = make_colormap (autumn,           _f, _t);
#declare parula           = make_colormap (parula,           _f, _t);
#declare summer           = make_colormap (summer,           _f, _t);
#declare turbo            = make_colormap (turbo,            _f, _t);
#declare cool             = make_colormap (cool,             _f, _t);
#declare viridis          = make_colormap (viridis,          _f, _t);
#declare smooth_cool_warm = make_colormap (smooth_cool_warm, _f, _t);
#declare plasma           = make_colormap (plasma,           _f, _t);
#declare ext_kindlmann    = make_colormap (ext_kindlmann,    _f, _t);
#declare kindlmann        = make_colormap (kindlmann,        _f, _t);
#declare inferno          = make_colormap (inferno,          _f, _t);

//
// Text
//
text { ttf "arial.ttf" "Plasma" 0.01 0

       pigment { gradient -y
                 color_map {plasma}
                 translate -y * 0.2
                 scale 1.4 }

       scale 0.2 
       rotate<30,225,0>
       translate <2.1,2.1,-1.1>}

//
// Object
//
isosurface {

  function{
   f_sphere(x, y, z, 1.8) - (-f_snoise3d(x*1.5, y*1, z*1)*2.25) 

  }
  contained_by { sphere {<0,0,0>, -3.3 } }
  accuracy 0.003
  max_gradient 5

  texture{ 
    pigment { gradient -y
              color_map {plasma}
              translate y * 1.5
              scale 5.8 }} 

  scale 0.7
  translate <-0.3, 0.1, 0>
}

