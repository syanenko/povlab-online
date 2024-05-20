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

#include "materials/jr_material.inc"

box {
  0, 1
  hollow no_reflection no_shadow
  material {material_} 
  translate -.5
  rotate clock*y*360
  translate .5
  scale <3,3,3>
}

