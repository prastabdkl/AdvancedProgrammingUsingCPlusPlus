// A program to Demonstrate a simple class
#include <iostream>
#include <iomanip>
using namespace std;

//class Cylinder declaration
class Cylinder
{
    private:
    	const double PI = 3.14159;
		double radius,height;
	public:
		//mutator or setter
		void setlength(double r,double h)
		{
			radius = r;
			height = h;
		}
		//accessor or getter
		double getlength() const
		{
			return radius;
		}
		double getArea() const
		{
			return 2*PI*radius*(height +radius) ;
		}
		double getVolume() const
		{
			return PI*radius*radius*height ;
		}		
};

int main()
{
	Cylinder sq1;
	double r,h;
	
	cout<<"What is the radius and height of Cylinder?";
	cin>>r>>h;
	
	while(r <= 0 || h <= 0 )
	{
		cout<<"What is the length breadth and height of Cylinder?";
		cin>>r>>h;
	}
	
	//store the side of Cylinder in sq1 object
	sq1.setlength(r,h);
	
	//display the Cylinders data.
	cout << fixed << setprecision(2);
	cout << "Here is the data of Cylinder : \n"
		<< "Side: " << sq1.getlength() << endl
		<< "Area: " << sq1.getArea() << endl
		<< "Volume: " << sq1.getVolume() << endl;
	
	return 0;
}

