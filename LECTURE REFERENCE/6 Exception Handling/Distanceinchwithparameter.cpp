#include <iostream>
#include <string>
using namespace std;

class Distance
{
private:
    int feet,inches;
public:
	class InchesEx{ //Exception class
		  public:
		  	string originFunction;	//for name of routine function
		  	float iValue;			//for faulty inches value
		  	
		  	InchesEx(string of, float in){
				originFunction =of;
				iValue =in;				
			}
	};
	
    Distance(int ft=0,int in=0)
    {
        if(in >= 12)
			  throw InchesEx("2-arg constructor, inches > 12",in);
		feet = ft;
        inches =in;    
    }
    int getFeet()
    {
    	return feet;
	}
	int getInches()
	{
		if (inches < 0)
		 throw InchesEx("getInches function inches < 0",inches);
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
		Distance first(feet,inches);
		cout<<"Enter a distance in feet and inches";
		cin >>feet>>inches;
		Distance second(feet,inches);
		
		cout<<"the data of first object is:"<<"Feet: "
		<<first.getFeet()<<" Inch: "<<first.getInches()<<endl;
		
		cout<<"the data of second object is:"<<"Feet: "
		<<second.getFeet()<<" Inch: "<<second.getInches()<<endl;
	}
	catch(Distance::InchesEx ix)
	{
		cout << "\n Error in " <<ix.originFunction
			 <<".\n Inches value of " <<ix.iValue
			 << " is out of bounds.";  
	}
	cout<<endl;	
	return 0;
}

