#include <iostream>
using namespace std;

class Distance{
	private:
		int feet,inch;
	public:
		Distance(int ft=0,int in=0)
		{
			if(in >=12)
				throw "inches Greater than 12,Invalid!";
			feet = ft;
			inch =in;
		}
		int getFeet() const{
			return feet;
		}
		int getInch() const{
			return inch;
		}
};
int main(){
	try{
		Distance obj1(10,-5);
		Distance obj2(10,15);

	cout<<"The data of first object is: Feet="
	<<obj1.getFeet;
	cout<<"The data of first object is: Inch="
	<<obj1.getInch;
	}
	catch(Distance::Inches12Ex)
	{
		cout<<"Error, Inches greater than 12";
	}
	catch(Distance::Inches0Ex)
	{
		cout<<"Error, Inches less than 0";
	}
	



}