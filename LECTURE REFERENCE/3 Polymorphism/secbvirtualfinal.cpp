/*write a class Shape with a function draw() which displays the message "Basic Shape Class".


	Derive a class Rectangle publicly from Shape with a function draw which displays the message "Drawing rectangle ".


	Derive a class Circle publicly from Shape with a function draw which displays the message "Drawing Circle ".
*/
#include <iostream>
using namespace std;

class Shape{
	public:
	virtual void draw();
};
void Shape :: draw(){
	cout<<"\nBasic Shape class";
}
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
	Shape S1;		//base class object

	s = &S1;
	s->draw();

	Rectangle R;
	s = &R;
	s->draw();

	Circle	C;
	s =&C;
	s->draw();
	
	Rectangle *rec= &R;
	
	//rec->draw();
	rec->draw(); //when virtual is deleted

	








	// Shape S;
	// S.draw();
	// Circle C;
	// C.Shape::draw();
	// Rectangle R;
	// R.draw;







}


