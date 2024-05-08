//
// Artwork 4
//
#version 3.8;

global_settings{ assumed_gamma 1.0}

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
  threshold 1.30  // Fluff
  // threshold 1e-5 // Clew
    
  //sphere{Point,1,-2}
  #for(I,0,N-1)
    #declare Neighbour = arrNeighbours[I];
    #declare Distance = vlength(Neighbour);
    #declare Normal = vnormalize(Neighbour);
    //sphere{0,1,-0.8 scale <1,0.1,1> Point_At_Trans(Normal) translate Normal*Distance*1.2}
    //sphere{0,1,-0.8 scale <1,0.01,1> Point_At_Trans(Normal) translate Normal*Distance*1.2}
    //sphere{0,1,+0.8 scale <1,0.001,1> Point_At_Trans(Normal) translate Normal*Distance*1.4}
    cylinder{<0,0,0>,<0,+9,0>,0.005,+0.8 Point_At_Trans(Normal) translate Normal*Distance*1.2}
    sphere{0,1,+0.8 scale <1,0.0001,1> Point_At_Trans(Normal) translate Normal*Distance*1.4}
    //sphere{0,1,-0.8 scale <1,0.00001,1> Point_At_Trans(Normal) translate Normal*Distance*1.2}
    //sphere{0,1,-0.8 scale <1,0.000001,1> Point_At_Trans(Normal) translate Normal*Distance*1.2}
    //sphere{0,1,-0.8 scale <1,0.0000001,1> Point_At_Trans(Normal) translate Normal*Distance*1.2}
  #end
  sturm on
  hierarchy off
  pigment{rgb 1}
  finish { brilliance 3.0 diffuse 0.90 }
}

// By desire
// background { color <0, 0, 0> }

camera {
  perspective angle 22
  location  <0,0,-12>
  look_at   <0,0,  0>
  right x * image_width / image_height
}

light_source{< -300, 3000,   0> rgb <0.3,0.5,0.3>}
light_source{< 3000,  300,-500> rgb .4}
light_source{<  300,-3000,   0> rgb <0.2,0.24,0.2>}
