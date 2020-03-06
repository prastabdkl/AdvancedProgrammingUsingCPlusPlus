// A program to Demonstrate a simple class
#include <iostream>
using namespace std;

//class Cube  declaration
class Cube 
{
    private:
		int side;
	public:
		//mutator or setter
		void setSide(int s)
		{
			side = s;
		}
		//accessor or getter
		int getSide() const
		{
			//side = 10;
			return side;
		}
		int getArea() const
		{
			return 6*side*side;
		}
		double getVolume() const
		{
			return side*side*side ;
		}		
};

int main()
{
	Cube sq1;
	int side;
	
	cout<<"What is the length of side?";
	cin>>side;
	
	while(side<=0)
	{
		cout<<"Invalid Input!! What is the length of side?";
		cin>>side;
	}
	
	//store the side of Cube  in sq1 object
	sq1.setSide(side);
	
	//display the Cubes data.
	cout << "Here is the data of Cube  : \n"
		<< "Side: " << sq1.getSide() << endl
		<< "Area: " << sq1.getArea() << endl
		<< "Volume: " << sq1.getVolume() << endl;;
	
	return 0;	


}

