#include <iostream>
using namespace std;

class Distance
{
private:
    int feet,inches;
public:
	class InchesEx{};		//Exception Class
	
	Distance(int ft=0,int in=0)
    {
        if(in >= 12.0)
			  throw Distance();
		feet = ft;
        inches =in;    
    }
    int getFeet()
    {
    	return feet;
	}
	int getInches()
	{
		return inches;
	}
};


int main()
{
    int feet,inches;
	cout<<"Enter a distance in feet and inches";
    cin>>feet>>inches;
	
	try
	{
		Distance first;
		Distance second(feet,inches);
		
		cout<<"the data of first object is:"<<"Feet: "
		<<first.getFeet()<<" Inch: "<<first.getInches()<<endl;
		
		cout<<"the data of second object is:"<<"Feet: "
		<<second.getFeet()<<" Inch: "<<second.getInches()<<endl;
	}
	catch(Distance::InchesEx)
	{
		cout<< "\n Initialization error:""Inches value is too large";
	}
	cout<<endl;	
	return 0;
}

