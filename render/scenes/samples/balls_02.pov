#version 3.8;
global_settings { assumed_gamma 1 }

  camera {
    right x * image_width / image_height
    sky <0,0,1>
    direction <-1,0,0>
    location <30,10,1.5>
    look_at <0,0,1>
    angle 10
  }

  global_settings { ambient_light color rgb< 0.7, 0.7, 0.7> }

  light_source {
    <4,-20,16>
    color rgb< 1.0, 1.0, 1.0> * 2
  }

  light_source {
    <2, 1.7, 2.1>
    color rgb< 1.0, 1.0, 1.0> * 2
    spotlight
  }

  background { color <0, 0, 0> }

  plane {
    <0,0,1>, 0
    texture { pigment{ color rgb<0.4, 0.4, 0.4> }
            finish { phong 1 reflection 0.00}
          }
  }

  sphere { <2,0,1.4>, 0.4
      texture { pigment{ color rgb< 0.1, 0.5, 0.0> * 2}
                finish { phong 1 reflection 0.00}
              }
  }

  sphere { <0.3,1,1.5>, 0.5
      texture { pigment{ color rgb< 0.5, 0.2, 0.0> * 1.5}
                finish { phong 1 reflection 0.00}
              }
  }

  sphere { <1,0.5,1>, 0.3
      texture { pigment{ color rgb< 0.5, 0.2, 0.0> * 1.6 }
                finish { phong 1 reflection 0.00}
              }
  }
