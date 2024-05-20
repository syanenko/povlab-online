// viewer.pov
// +w600 +h600

#version 3.8;

global_settings {assumed_gamma 1}

camera {
  perspective
  location <1.50,1.4,-4>
  up <0,1,0>
  right x*1
  angle 35
  look_at <1.50,1.4,0>
}

#local mult_ = 0.5;

#declare material_ = material {
  texture {pigment {colour rgbt 1}}
  interior {
    ior                 1
    caustics            0
    dispersion          1
    dispersion_samples  10
    fade_power          0
    fade_distance       0
    fade_color          rgb 0

    media {
      method     3
      intervals  1
      samples    64, 192
      confidence .9
      variance   .1
      ratio      .9
      absorption rgb <0,0,0>
      emission   rgb <1,0,0> * mult_
      aa_threshold .03
      aa_level    4
      density {
        density_file df3 "data/volume/xmbulb_r.df3"
        interpolate 0
      }
    }

    media {
      method     3
      intervals  1
      samples    64, 192
      confidence .9
      variance   .1
      ratio      .9
      absorption rgb <0,0,0>
      emission   rgb <0,1,0> * mult_
      aa_threshold .03
      aa_level    4
      density {
        density_file df3 "data/volume/xmbulb_g.df3"
        interpolate 0
      }
    }

    media {
      method     3
      intervals  1
      samples    64, 192
      confidence .9
      variance   .1
      ratio      .9
      absorption rgb <0,0,0>
      emission   rgb <0,0,1> * mult_
      aa_threshold .03
      aa_level    4
      density {
        density_file df3 "data/volume/xmbulb_b.df3"
        interpolate 0
      }
    }
  }
};

box {
  0, 1
  hollow no_reflection no_shadow
  material {material_} 
  translate -.5
  rotate clock*y*360
  translate .5
  scale <3,3,3>
}

