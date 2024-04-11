#version 3.8;
global_settings { 
  ambient_light <1,1,1> 
  assumed_gamma 1
}

#declare TWOPI = 6.283185307179586476925287;
#declare RADIUS = 1;
#declare NX = 200;
#declare NY = 160;
#declare NZ = 160;

#declare DD = <NX,NY,NZ>;
#declare CC = DD / 2;
#declare VP = <0,260,100>;

camera {
  location VP
  up y
  right x
  angle 60
  sky <0,0,-1>
  look_at <0,0,0>
  right x * image_width / image_height
}

light_source {
  VP + <0,0,NZ/2>
  color rgb <1,1,1>
  media_interaction on
  media_attenuation on
  shadowless
}

#declare theinterior = interior {
  media {
    intervals 8
    ratio 0.5
    samples 2,2
    method 2
    emission <1,1,1> / 100
    absorption <1,1,1> / 1000
    scattering { 1, <0,0,0> }
    confidence 0.999
    variance 1/1000
    density {
      density_file df3 "data/volume/mri.df3" 
      interpolate 1
      color_map {
        [0.00 rgb <0,0,0>]
        [0.01 rgb <0 0 1>]
        [0.30 rgb <0,1,0>]
        [0.50 rgb <1,0,0>]
        [1.00 rgb <1,0,0>]
      }
    }
  }
}

background { color <0, 0, 0> }

box {
  <0,0,0>, <1,1,1>
  pigment { rgbf 1 }
  interior { theinterior }
  hollow
  translate <-0.5,-0.5,-0.5>
  scale DD
  rotate <0, 0, 360 *0.1>
}
