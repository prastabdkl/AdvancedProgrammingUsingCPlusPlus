#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width;
	double length;
public:
	Rectangle()//Default constructor
	{
		width = 0.0;
		length = 0.0;
	}
	Rectangle(double w,double len)
	{
		width=w;length=len;
	}
	double getArea() const{
		return width*length;
	}
};
class Cube: public Rectangle{
protected:
	double height;
	double volume;
public:
	//general format for outside declaration,(prototype constructor onlY not all)
	//ClassName::ClassName(ParameterList) : BaseClassName(ArgumentList)
	Cube() : Rectangle(){//first call the base class constructor
		height = 0.0;
		volume = 0.0;
	}
	Cube(double w, double len, double h) : Rectangle(w,len)
	{
		height =h;
		volume = getArea()*h;
	}
	double getVolume() const{
		return volume;
	}
};
int main(){
	double cubeWidth,cubeLength,cubeHeight;

	cout<<"Enter the Dimensions of the cube:\n Width: \n Length: \n Height:";
	cin>>cubeWidth>>cubeLength>>cubeHeight;

	Cube myCube(cubeWidth,cubeLength,cubeHeight);

	cout<<"\n volume: "<<myCube.getVolume() <<endl;

	return 0;
}
