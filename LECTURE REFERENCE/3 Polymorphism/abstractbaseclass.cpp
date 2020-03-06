/*Abstract Base class and pure virtual function
An abstract base class cannot be instantiated but other classes are derived from it.
A pure virtual function is a virtual member function of a base class that must be overridden. 
When a class contains a pure virtual function as a member, that becomes an abstract base class
syntax:
virtual void showInfo() = 0 
The = 0 notation indicates that showInfo is a pure virtual function. 
*/
#include <iostream>
using namespace std;

class Shape{
	public:
	virtual void draw()=0;
};
class Rectangle : public Shape{
	public:
	void draw();
};
void Rectangle :: draw(){
	cout<<"\nDrawing Rectangle";
}
class Circle : public Shape{
	public:
	void draw();
};
void Circle :: draw(){
	cout<<"\nDrawing Circle";
}

int main(){
	Shape *s;		//base class pointer

	Rectangle R;
	s = &R;
	s->draw();

	Circle	C;
	s =&C;
	s->draw();








	// Shape S;
	// S.draw();
	// Circle C;
	// C.Shape::draw();
	// Rectangle R;
	// R.draw;







}



