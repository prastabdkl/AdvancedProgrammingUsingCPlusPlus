#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.1415
using namespace std;

//function prototyping
void inputRadius(float&);
void calcArea(float);
void calcVolume(float);

int main()
{
	float radius;
	
	inputRadius(radius);//calling for input by passing rad
	cout<<"The input radius is: "<<radius<<endl;
	
	calcArea(radius);
	
	calcVolume(radius);
	
	return 0;
}
void inputRadius(float& rad) //pass by reference so that the value is written at the place where the address stores
{
	cout<<"Enter Radius"<<endl;
	cin>>rad;	
}
void calcArea(float rad)
{
	double area;
	
	area = 4.0*PI*pow(rad,2);		//defined PI and power is 
	cout<<"\nThe Surface Area is "
		<<area<<endl;//check the difference in  output format of calcVolume
}
void calcVolume(float rad)
{
	double volume;
	
	volume = 4.0/3*PI*pow(rad,3); //4.0 written to convert int to float otherwise 4/3 is not 1.33 it is 1		
	cout<<"\nThe Volume is "
		<<setprecision(2)<<fixed<<volume<<endl; //to show two digit number in a mathematical form not scientific form
}

