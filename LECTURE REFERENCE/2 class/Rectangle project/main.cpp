#include <iostream>
#include "rectangle.h"
using namespace std;

int main()
{
	Rectangle bo, box(10,12);
	
	//Display the rectangle's data.
	cout <<  "Here is the data of rectangle" << endl
		<< "Width" << box.getWidth() << endl
		<< "Length" << box.getLength() <<endl
		<< "Area: " << box.getArea() << endl;
	return 0;
}
