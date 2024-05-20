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

