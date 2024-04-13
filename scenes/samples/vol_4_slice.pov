//
// Volume rendering from density file (df3)
//
#version 3.8;
global_settings { 
  ambient_light <1,1,1> 
  assumed_gamma 1
}

camera {
  perspective 
  angle 60
  location <0,-260,100> * 1
  look_at <0,0,0>
  // sky <0,0,-1>
  right x * image_width / image_height
}

/* Default colormap */
#declare cm = color_map {
        [0.00 rgb <0,0.06,0.01>]
        [0.01 rgb <0 0 1>]
        [0.30 rgb <0,1,0>]
        [0.50 rgb <1,0,0>]
        [1.00 rgb <1,0,0>] }

// Standard colormaps: try them
// #include "scenes/samples/common/colormaps.inc"
// #declare cm = make_colormap (kindlmann,        0.8, 0);

// #declare cm = make_colormap (ext_kindlmann,    0.8, 0);
// #declare cm = make_colormap (viridis,          0.4, 0);
// #declare cm = make_colormap (spring,           0.6, 0);
// #declare cm = make_colormap (summer,           0.8, 0);
// #declare cm = make_colormap (autumn,           0.8, 0);
// #declare cm = make_colormap (winter,           0.9, 0);
// #declare cm = make_colormap (cool,             0.5, 0);
// #declare cm = make_colormap (hot,              0.8, 0);
// #declare cm = make_colormap (smooth_cool_warm, 0.8, 0);
// #declare cm = make_colormap (hsv,              0.8, 0);
// #declare cm = make_colormap (parula,           0.8, 0);
// #declare cm = make_colormap (jet,              0.8, 0);
// #declare cm = make_colormap (turbo,            0.8, 0);
// #declare cm = make_colormap (plasma,           0.8, 0);
// #declare cm = make_colormap (inferno,          0.8, 0);


#declare theinterior = interior {
  media {
    intervals 2.4
    ratio 0.5
    samples 2,2
    method 2
    emission <1,1,1> / 40
    absorption <1,1,1> / 80
    scattering { 1, <1,1,1> * -.22}
    confidence 0.999
    variance 1/1000
    density {
      density_file df3 "data/volume/mri.df3" 
      interpolate 1
      color_map { cm }
    }
  }
}

background { color <0, 0, 0> }

difference {
  box {
    <0,0,0>, <1,1,1>
    pigment { rgbf 1 }
    interior { theinterior }
    hollow
    translate <-0.5,-0.5,-0.5>
    scale <200,160,160>
  }

  box {
    <0,0,0>, <1,1,1>
    hollow
    pigment { rgbf 0.1 }
    translate <-0.5,-0.35,-0.5>
    scale <400,160,320>
    rotate <0, 0, 0>
  }
}
