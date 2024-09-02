#version 3.8;
#include "scenes/samples/common/mobius.inc"
#include "scenes/samples/common/colormaps/parula.inc"

global_settings { assumed_gamma 1 }

// Texture
#declare Dark_Green_Glass=
texture { 
  pigment { rgbf <0.1, 0.7, 0.8, 0.8> }
  finish {
    ambient 0.1
    diffuse 0.1
    reflection .25
    specular 1
    roughness .001 }
}

// Colormap
#declare parula = make_colormap (parula, 0.1, 0);

// Model
union {
  mesh2 {
    #local len = dimension_size(VertexVectors,1);
    vertex_vectors {
      len,
      #for (i, 0, len-1)
        VertexVectors[i]
      #end
    }

    #local len = dimension_size(NormalVectors,1);
    normal_vectors {
      len,
      #for (i, 0, len-1)
        NormalVectors[i]
      #end
    }

    #local len = dimension_size(UVVectors,1);
    uv_vectors  {
      len,
      #for (i, 0, len-1)
        UVVectors[i]
      #end
    }

    #local len = dimension_size(FaceIndices,1);
    face_indices {
      len,
      #for (i, 0, len-1)
        FaceIndices[i]
      #end
    }

    texture {
      Dark_Green_Glass
    }
  }
  
  union {
    #local len = dimension_size(VertexVectors,1) - 1;
    #for (i, 0, len)
      sphere { 0, 0.019
               translate VertexVectors[i]
      }
    #end
      
    texture {
      pigment { gradient z
                color_map  { parula }
                scale 1.3 
                translate 0.75
      }
      finish  { phong 0.5 reflection { 0.2, metallic 0.00 } }
    }
   }

   rotate<0, 0, 0>
}

// Scene
camera {
  perspective
  angle 15
  location <10,12,-10> * 1.1
  look_at  <0,0,0>
  right x * image_width / image_height
}

light_source{<100, 100, -100> rgb 0.8}
light_source{<100, 100,  100> rgb 0.8}
