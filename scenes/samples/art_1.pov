#version 3.7;
global_settings{ assumed_gamma 1.0 }
#default{ finish{ ambient 0.1 diffuse 0.9 }}
#include "math.inc"
#include "rand.inc"
#include "functions.inc"
#include "transforms.inc"

#declare Point = <0,0,0>;
#declare Stream = seed(7);
#declare N=240;
#declare arrNeighbours = array[N];
#for(I,0,N-1)
  #declare arrNeighbours[I] = VRand_On_Sphere(Stream)/2;
#end

blob{
  threshold .50
  sphere{Point,1,1}
  #for(I,0,N-1)
    #declare Neighbour = arrNeighbours[I];
    #declare Distance = vlength(Neighbour);
    #declare Normal = vnormalize(Neighbour);
    sphere{0,1,-0.8 scale <1,0.0000001, 1> Point_At_Trans(Normal) translate Normal * Distance * 2.8}
  #end
  pigment{rgb 1}
}

background { color <0, 0, 0> }

camera {
  perspective angle 25
  location  <0,0,-10>
  look_at   <0,0, 0>
  right x * image_width / image_height
}

light_source{< -300, 3000,   0> rgb <0.2, 2.3, 0.2>}
light_source{< 3000,  300,-500> rgb <0.0, 0.4, 0.4>}
light_source{<  300,-3000,   0> rgb <0.0, 0.1, 2.4>}
