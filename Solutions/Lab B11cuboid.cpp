// A program to Demonstrate a simple class
#include <iostream>
#include <iomanip>
using namespace std;

//class cuboid declaration
class Cuboid
{
    private:
    	const double PI = 3.14159;
		double length,breadth,height;
	public:
		//mutator or setter
		void setlength(double l,double b,double h)
		{
			length = l;
			breadth =  b;
			height = h;
		}
		//accessor or getter
		double getlength() const
		{
			return length;
		}
		double getArea() const
		{
			return 2*(length*breadth+breadth* height+length*height) ;
		}
		double getVolume() const
		{
			return length*breadth*height ;
		}		
};

int main()
{
	Cuboid sq1;
	double l,b,h;
	
	cout<<"What is the length breadth and height of cuboid?";
	cin>>l>>b>>h;
	
	while(l <= 0 || b <= 0 || h <= 0  )
	{
		cout<<"What is the length breadth and height of cuboid?";
		cin>>l>>b>>h;
	}
	
	//store the side of square in sq1 object
	sq1.setlength(l,b,h);
	
	//display the squares data.
	cout << fixed << setprecision(2);
	cout << "Here is the data of square : \n"
		<< "Side: " << sq1.getlength() << endl
		<< "Area: " << sq1.getArea() << endl
		<< "Volume: " << sq1.getVolume() << endl;
	
	return 0;
}

