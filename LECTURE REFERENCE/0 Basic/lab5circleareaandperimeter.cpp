//WAP to input radius of circle from the users and calculate the area and perimeter
#include <iostream>
#include <cmath> //for pow() function
#define PI 3.14	//for defining PI to 3.14


using namespace std;	

int main()
{
	double radius,area,perimeter;	//declaration in double datatype

	cout<<"Enter the radius of the circle ";
	cin>>radius;

	area = PI*pow(radius,2);	//or area=PI*radius*radius
	perimeter = 2*PI*radius;	

	cout<<"The area of circle with radius "<<radius<<"is"<<area<<endl;
	cout<<"The perimeter of circle with radius "<<radius<<"is"<<perimeter<<endl;

	return 0;
}
