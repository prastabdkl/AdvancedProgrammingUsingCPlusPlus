// A program to Demonstrate a simple class
#include <iostream>
using namespace std;

//class square declaration
class Square
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
			return side;
		}
		int getArea() const
		{
			return side*side;
		}		
};

int main()
{
	Square sq1;
	int side;
	
	cout<<"What is the length of side?";
	cin>>side;
	
	//store the side of square in sq1 object
	sq1.setSide(side);
	
	//display the squares data.
	cout << "Here is the data of square : \n"
		<< "Side: " << sq1.getSide() << endl
		<< "Area: " << sq1.getArea() << endl;
	
	return 0;	


}

