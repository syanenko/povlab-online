//  make box mapped box
//  diced Round_Box() into a 6 sided uv mapped Round Box
//  m.miller  05.21.23
//  rev  11.01.23 - centered output position to conform to blender output
//                  shifted side mapping so front and sides don't match



#macro make_mapped_box (w,h,d,f,mat,z_dir)
#declare _form = object{ Round_Box(<-w/2,0,0>,<w/2,h,d>, f , 1) } 
union {           
    // X  right
    difference {    
         object { _form }
         plane { <1,0,0>, 0 translate <w/2-f/2,0,0> } 
         plane { <1,0,0>, 0 rotate <0,-45,0> translate <w/2,0,0> } 
         plane { <1,0,0>, 0 rotate <0,45,0> translate <w/2,0,d> }
         plane { <0,-1,0>, 0 rotate <0,0,45> translate <w/2,h,0> }
         plane { <0, 1,0>, 0 rotate <0,0,-45> translate <w/2,0,0> }
         material {mat rotate <0,-90,0> translate <0,0,d/2> } 
         #if (z_dir) 
            material {mat rotate <0,-90,0> rotate <90,0,0> translate <0,0,d/2> }
         #end
         rotate <0,0,0>
         translate <0,-h/2,-d/2>
   } 
    
    
    // X  left
    difference {    
         object { _form }
         plane { <1,0,0>, 0 translate <w/2-f/2,0,0> } 
         plane { <1,0,0>, 0 rotate <0,-45,0> translate <w/2,0,0> } 
         plane { <1,0,0>, 0 rotate <0,45,0> translate <w/2,0,d> }
         plane { <0,-1,0>, 0 rotate <0,0,45> translate <w/2,h,0> }
         plane { <0, 1,0>, 0 rotate <0,0,-45> translate <w/2,0,0> }
         material {mat rotate <0,-90,0> translate <0,0,d/2> } 
         #if (z_dir) 
            material {mat rotate <0,-90,0> rotate <90,0,0> translate <0,0,d/2> }
         #end
         rotate <0,180,0>
         translate <0,-h/2,d+-d/2>
    } 

    
    // Y  top/bottom
    difference {
         object { _form } 
         plane {<0,-1,0> 0 rotate <0,0,0> translate <0,f/2,0>}
         plane {<0,-1,0> 0 rotate <-45,0,0> translate <0,0,0>}
         plane {<0,-1,0> 0 rotate <45,0,0> translate <0,0,d>}
         plane {<0,-1,0> 0 rotate <0,0,-45> translate <w/2,0,0>}
         plane {<0,-1,0> 0 rotate <0,0,45> translate <-w/2,0,0>}
         material {mat rotate <-90,180,0> translate <-w/2,0,0> } 
         rotate <0,0,0>
         translate <0,-h/2,-d/2>
    } 
    
    // Y  top/bottom
    difference {
         object { _form } 
         plane {<0,-1,0> 0 rotate <0,0,0> translate <0,f/2,0>}
         plane {<0,-1,0> 0 rotate <-45,0,0> translate <0,0,0>}
         plane {<0,-1,0> 0 rotate <45,0,0> translate <0,0,d>}
         plane {<0,-1,0> 0 rotate <0,0,-45> translate <w/2,0,0>}
         plane {<0,-1,0> 0 rotate <0,0,45> translate <-w/2,0,0>}
         material {mat rotate <-90,180,0> translate <-w/2,0,0> }
         rotate <0,0,180>
         translate <0,h+-h/2,-d/2>
    } 

    // Y  front
    difference {    
         object { _form }
        
         plane { <0,0,-1>, 0 translate <0,0,f/2> }  
         plane {<-1,0,0>,0 rotate <0,-45,0> translate <w/2,0,0>     } 
         plane {<1,0,0>,0  rotate <0,45,0>  translate <-w/2,0,0>   }
         plane {<0,-1,0>,0   rotate <45,0,0>  translate <0,h,0> }
         plane {<0,1,0>,0   rotate  <-45,0,0>  translate <0,0,0> }
         material {mat rotate <0,0,0> translate <-w/2,0,0> }
         rotate <0,0,0>
         translate <0,-h/2,-d/2>
    }   
    
    // Y  back
    difference {    
         object { _form } 
         plane { <0,0,-1>, 0 translate <0,0,f/2> }
         plane {<-1,0,0>,0 rotate <0,-45,0> translate <w/2,0,0>     } 
         plane {<1,0,0>,0  rotate <0,45,0>  translate <-w/2,0,0>   }
         plane {<0,-1,0>,0   rotate <45,0,0>  translate <0,h,0> }
         plane {<0,1,0>,0   rotate  <-45,0,0>  translate <0,0,0> }
         material {mat rotate <0,0,0> translate <-w/2,0,0> } 
         rotate <0,180,0>
         translate <0,-h/2,d-d/2>
    }   
      
}
#end

