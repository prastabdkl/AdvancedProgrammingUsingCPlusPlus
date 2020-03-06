/*
virtual are declared by placing virtual keyword 
in front of return type.
this declaration tells the compiler to expect
draw() to be redefined in a derived class.
The Compiler does not bind calls to the function
with the actual function.
Instead, it allows the program to bind calls, 
at runtime, to the version of the function that belongs
*/
#include <iostream>    
using namespace std;  
  
class Shape {                                        //  base class  
public:
	    virtual void draw();       
};
void Shape::draw(){                          // virtual function
   		   cout<<"drawing..."<<endl;      
}             

class Rectangle: public Shape                  //  inheriting Shape class.  
{      
public:
	   void draw(){      
	   		cout<<"drawing rectangle..."<<endl;
	   }      
};
    
class Circle: public Shape                        //  inheriting Shape class.  
{      
public:
	   void draw(){
	   		cout<<"drawing circle..."<<endl;
	   }      
};
    
int main() {    
	Shape *s;                               //  base class pointer.  
	Shape sh;                               // base class object. 
	 
	Rectangle rec;    
	Circle cir;    
	//Shape S = new Rectangle;
	s=&sh;    
	s->draw();     
	//sh.draw();
	
	s=&rec;    
	s->draw();
	//rec.draw();
 
	s=&cir;    
	s->draw();
	//cir.draw();	     
}    
