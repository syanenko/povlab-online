// Persistence of Vision Ray Tracer Include File
// File: param.inc
// Vers: 3.5
// Desc: An include file to generate a mesh2 of smooth_triangles 
//       with uv_vectors from a set of parametric functions. 
// Date: 2002/04/27
// Auth: Ingo Janssen

/*======
Parametric(__Fx, __Fy, __Fz, <UVmin>, <UVmax>, Iter_U, Iter_V, FileName):
           Builds a parametric surface out of three given functions (__Fx, __Fy, __Fz).
UVmin    : A 2-D vector that gives the lower boundaries of the uv rectangle.
UVmax    : A 2-D vector that gives the upper boundaries of the uv rectangle.
           These vectors are the range within whitch the surface is calculated. It
           also is the range to whitch the uv-coordinates are applied. The
           area of the texture from the x-y-plane, that is mapped to the
           object, is defined by the  rectangle <u min,v min>, <u max,v max>.
Iter_U   : Sets the resolution of the mesh in the u range.
Iter_V   : Sets the resolution of the mesh in the v range.
FileName : The name of the file to whitch the mesh will be written. If is an
           empty string (""), no file will be written. If a file name is given,
           the macro will first check if it already exists. If that is so, it
           will expect a mesh2 with the name "Surface" and try to parse the
           existing file.
Use :
At the top of your scene-file:
   
      #include "param.inc"

Set up a set of parametric functions, __Fx, __Fy and __Fz, using
the function(){} statement.

A unit sphere may look like this:

      #declare R=1;
      #declare F1=function(U,V){R*sin(V)*cos(U)}
      #declare F2=function(U,V){R*cos(V)}
      #declare F3=function(U,V){R*sin(V)*sin(U)}

Now the macro can be used in an object:
      
      object { 
        Parametric (
          F1,  F2,  F3,
          <0, FromV(0)>,
          <pi, 2*pi>,
          20, 10, ""
        )
        pigment {rgb 1}
        finish{specular 0.3}
        rotate <0,0,0>
      }

Note the use of the macro FromV() to start the v-range with. This means that the
range is specified as 0 < u <= pi. The minimum will get close to, but not reach
the value. The three other macros for this are ToU(), FromU() and ToV(). They
have to be used when the equations can not be solved for the boundaries.

The resolution of the mesh is set with Iter_U and Iter_V, the amount of steps by
which the u and v ranges are divided. The total amount of triangles calculated
will be Iter_U*Iter_V*2.

If you want to save the resulting mesh to a file, enter a filename in the macro.

Trouble shooting:

** Parse Error: cannot normalize zero-length vector.
-- Check if the u and v boundaries are specified the right way? Should all
values be included, or should FromU() ToV() etc. be used?

** Parse Error: No matching } in 'smooth_triangle', camera found instead
--This happens while reading an unfinished mesh from file. Was parsing stopped while
writing the mesh? Delete the file.
*/

#version 3.5;
#include "scenes/samples/common/makemesh.inc"

#declare EPS=(1e-12);
#declare EPSNorm=(1e-14);

#declare __FU=0; #declare __TU=0;
#declare __FV=0; #declare __TV=0;
#macro FromU(N)#local N=(N+EPS); #declare __FU=1; (N) #end
#macro ToU(N)  #local N=(N-EPS); #declare __TU=1; (N) #end
#macro FromV(N)#local N=(N+EPS); #declare __FV=1; (N) #end
#macro ToV(N)  #local N=(N-EPS); #declare __TV=1; (N) #end

#macro Parametric(__Fx, __Fy, __Fz, UVmin, UVmax, Iter_U, Iter_V, FileName)
   #if(strlen(FileName)>0)
      #if(file_exists(FileName))
         #debug concat("\n Parsing mesh2 from file: ", FileName, "\n")
         #local Build=0;
         #include FileName
         object{Surface}
      #else
         #local Build=1;
      #end
   #else
      #local Build=1;
   #end
   #if(Build)
      #local Umin=UVmin.u; #local Vmin=UVmin.v;
      #local Umax=UVmax.u; #local Vmax=UVmax.v;
      #local iU=(Umax-Umin)/Iter_U;
      #local iV=(Vmax-Vmin)/Iter_V;
      #local NumVertices=(Iter_U+1)*(Iter_V+1);
      #local NumFaces=Iter_U*Iter_V*2;
      #debug concat("\n Calculating ",str(NumVertices,0,0)," vertices for ", str(NumFaces,0,0)," triangles\n\n")
      #debug "\n"
      #local VecArr=array[NumVertices] 
      #local NormArr=array[NumVertices] 
      #local UVArr=array[NumVertices]
      #local Count=0;       
      #local I=0;           
      #local V=Vmin-iV;     
      #while (I<Iter_V+1)   
         #local V=V+iV;     
         #local J=0;        
         #local U=Umin-iU;  
         #while (J<Iter_U+1)
            #local U=U+iU;  
            #local P=<(__Fx(U,V)),(__Fy(U,V)),(__Fz(U,V))>;       //     |      |      |   
            #local Un=U+iU;                                       //  -- x --- Vn ---- x --
            #local Vn=V+iV;                                       //     |   /  |   /  |   
            #local Um=U-iU;                                       //     | /    | /    |   
            #local Vm=V-iV;                                       //  - Um ---- P ---- Un -
            #if(__TU&Un>=Umax)                                    //     |   /  |   /  |   
              #local Un=U+EPSNorm;                                //     | /    | /    |   
            #end                                                  //  -- x --- Vm ---- x --
            #if(__TV&Vn>=Vmax)                                    //     |      |      |   
               #local Vn=V+EPSNorm;
            #end
            #if(__FU&Um<=Umax)
              #local Um=U-EPSNorm;
            #end
            #if(__FV&Vm<=Vmax)         
               #local Vm=V-EPSNorm;
            #end
            #local N1=<(__Fx(Un,V)),(__Fy(Un,V)),(__Fz(Un,V))>;   // Recalculating these points on each pass
            #local N2=<(__Fx(U,Vn)),(__Fy(U,Vn)),(__Fz(U,Vn))>;   // is fater than storing them in, and retreiving 
            #local N3=<(__Fx(Um,V)),(__Fy(Um,V)),(__Fz(Um,V))>;   // from arrays.
            #local N4=<(__Fx(U,Vm)),(__Fy(U,Vm)),(__Fz(U,Vm))>;
            #local A=(N1-P);
            #local B=(N2-P);      
            #local C=(N3-P);
            #local D=(N4-P);
            #local N1=vcross(A,B);
            #local N2=vcross(B,C);
            #local N3=vcross(C,D);
            #local N4=vcross(D,A);
            #local NormArr[Count]=vnormalize((N1+N2+N3+N4)); 
            #local VecArr[Count]=P;
            #local UVArr[Count]=<U,V>;
            #local Count=Count+1;
            #local J=J+1;            
         #end
         #debug concat("\r Done ", str(Count,0,0)," vertices : ",str(100*Count/NumVertices,0,2)," %")
         #local I=I+1;
      #end
      BuildWriteMesh2(VecArr, NormArr, UVArr, Iter_U, Iter_V, FileName)
   #end
   #declare __FU=0;   #declare __TU=0;
   #declare __FV=0;   #declare __TV=0;
#end   

