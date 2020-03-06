// A program to Demonstrate a simple class
#include <iostream>
#include <iomanip>
using namespace std;


//class sphere declaration
class Sphere
{
    private:
    	const double PI = 3.14159;
		double radius;
	public:
		//mutator or setter
		void setRadius(double r)
		{
			radius = r;
		}
		//accessor or getter
		double getRadius() const
		{
			//side = 10;
			return radius;
		}
		double getArea() const
		{
			return 4 * PI * radius * radius ;
		}
		double getVolume() const
		{
			return 4.0/3 * PI * radius * radius * radius ;
		}		
};

int main()
{
	Sphere sq1;
	double radius;
	
	cout<<"What is the radius of sphere?";
	cin>>radius;
	
	while(radius<=0)
	{
		cout<<"Invalid Input!! What is the length of side?";
		cin>>radius;
	}
	
	//store the side of square in sq1 object
	sq1.setRadius(radius);
	
	//display the squares data.
	cout<<fixed<<setprecision(2);
	cout << "Here is the data of square : \n"
		<< "Side: " << sq1.getRadius() << endl
		<< "Area: " << sq1.getArea() << endl
		<< "Volume: " << sq1.getVolume() << endl;
	
	return 0;
}

