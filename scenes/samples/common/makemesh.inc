// Persistence of Vision Ray Tracer Include File
// File: makemesh.inc
// Vers: 3.5
// Desc: Macros and functions used in builing mesh2 objects.
// Date: 2002/04/27
// Auth: Ingo Janssen

#version 3.5;
#ifndef(MAKEMESH_INC_TEMP)
   #declare MAKEMESH_INC_TEMP = version;
   #ifdef(View_POV_Include_Stack)
      #debug "including makemesh.inc\n"
   #end


//====== Macros and Functions ======//

/*==============
LInterpolate() : Linear interpolatio of a vector or float between Min and Max.
Min : minimal float value or vector.
Max : Maximal float value or vector.
Val : A float in the range 0 - 1.
*/   
   #macro LInterpolate(Val, Min, Max)
      (Min+(Max-Min)*Val) 
   #end


/*=========
RangeMM() : Adjusts input values in the range [RMin, RMax] to fit in the range
[Min, Max].
Val : A float value in the range [Rmin, Rmax].
*/   
   #declare RangeMM=function(Val,Rmin,Rmax,Min,Max){
      (((Val-Rmin)/(Rmax-Rmin))*(Max-Min)+Min)
   }


/*================= 
BuildWriteMesh2() : Builds and optionally writes a mesh2 object based on 3 input
arrays, the number of quads in U and V direction and a filename.
VecArr   : The array that contains the vertices of the triangles in the mesh.
NormArr  : The array with the normal vectors that go with the vertices.
UVArr    : The array containing the uv_vectors.
U        : The amount of subdivisions of the surface in the u-direction.
V        : The amount of subdivisions in the v-direction.
           Based on the U and V values the face_indices of the  triangles in the
           mesh are calculated.
FileName : The name of the file to whitch the mesh will be written. If is an
           empty string (""), no file will be written. If a file name is given,
           the macro will first check if it already exists. If that is so, it
           will try to parse the existing file.
*/
   #macro BuildWriteMesh2(VecArr, NormArr, UVArr, U, V, FileName)
      #if(strlen(FileName)!=0)
         #local Write=1;
         #debug concat(
            "\n\n Building mesh2 & Writing file: '", FileName , 
            "'\n   -vertex_vectors\n"
         )
         #fopen MeshFile FileName write
         #write(
            MeshFile,
            "#declare Surface = mesh2 {\n"
         )
      #else
         #local Write=0;
         #debug concat("\n\n Building mesh2: \n   - vertex_vectors\n")   
      #end
     
      #local NumVertices=dimension_size(VecArr,1);
      #if(Write)
         #write(
            MeshFile,
            "  vertex_vectors {\n",
            "    ", NumVertices,"\n    "
         )
      #end
      mesh2 {
         vertex_vectors {
            NumVertices
            #local I=0;
            #while (I<NumVertices)
               VecArr[I]
               #if(Write)
                  #write(MeshFile, VecArr[I])
               #end
               #local I=I+1;
               #if(Write)
                  #if(mod(I,5)=0)
                     #write(MeshFile,"\n    ")
                  #end
               #end 
            #end
            #if(Write) 
               #write(MeshFile,"\n  }\n")
            #end
         }
   
         #debug concat("   - normal_vectors\n")     
         #local NumVertices=dimension_size(NormArr,1);
         #if(Write)
            #write(
               MeshFile,
               "  normal_vectors {\n",
               "    ", NumVertices,"\n    "
            )
         #end
         normal_vectors {
            NumVertices
            #local I=0;
            #while (I<NumVertices)
               NormArr[I]
               #if(Write)
                  #write(MeshFile NormArr[I])
               #end
               #local I=I+1;
               #if(Write) 
                  #if(mod(I,5)=0)
                     #write(MeshFile,"\n    ")
                  #end
               #end 
            #end
            #if(Write)
               #write(MeshFile,"\n  }\n")
            #end
         }
         
         #debug concat("   - uv_vectors\n")   
         #local NumVertices=dimension_size(UVArr,1);
         #if(Write)
            #write(
               MeshFile, 
               "  uv_vectors {\n",
               "    ", NumVertices,"\n    "
            )
         #end
         uv_vectors {
            NumVertices
            #local I=0;
            #while (I<NumVertices)
               UVArr[I]
               #if(Write)
                  #write(MeshFile UVArr[I])
               #end
               #local I=I+1; 
               #if(Write)
                  #if(mod(I,5)=0)
                     #write(MeshFile,"\n    ")
                  #end 
               #end
            #end 
            #if(Write)
               #write(MeshFile,"\n  }\n")
            #end
         }
   
         #debug concat("   - face_indices\n")   
         #declare NumFaces=U*V*2;
         #if(Write)
            #write(
               MeshFile,
               "  face_indices {\n"
               "    ",NumFaces,"\n    "
            )
         #end
         face_indices {
            NumFaces
            #local I=0;
            #local H=0;
            #while (I<V)
               #local J=0;
               #while (J<U)
                  #local Ind=(I*U)+I+J;
                  <Ind, Ind+1, Ind+U+2>, <Ind, Ind+U+1, Ind+U+2>
                  #if(Write)
                     #write(
                        MeshFile,
                        <Ind, Ind+1, Ind+U+2>, <Ind, Ind+U+1, Ind+U+2>
                     )
                  #end
                  #local J=J+1;
                  #local H=H+1;
                  #if(Write)
                     #if(mod(H,5)=0)
                        #write(MeshFile,"\n    ")
                     #end 
                  #end
               #end
               #local I=I+1;
            #end
         }
         #if(Write)
            #write(MeshFile, "\n  }\n}")
            #fclose MeshFile
            #debug concat(" Done writing\n")
         #end
      }
   #end

//====== End of Macros and Functions ======//

#end //ifndef
