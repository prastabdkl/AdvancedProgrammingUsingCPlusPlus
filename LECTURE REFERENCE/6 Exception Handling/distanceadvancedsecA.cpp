

#include <iostream>
#include <string>
using namespace std;
class Distance
{
private:
    int feet,inches;
public:
	class InchesEx{
		public:
		  string originFunction;
		  int inchValue;
		  	InchesEx(string msg,int value)
		  	{
		  		originFunction =msg;
		  		inchValue =value;
			  }	
	};		//Exception Class	
    Distance(int ft=0,int in=0)
    {
        if(in >= 12.0)
			  throw InchesEx("2-arg-constructor",in);
		feet = ft;
        inches =in;    
    }
    int getFeet(){
    	return feet;
	}
	int getInches()	{
		if (inches<0)
		   throw InchesEx("getInch Function", inches);
		return inches;
	}
};


int main()
{
 	do{
 		
		try
		{
			int feet,inches;

			cout<<"\nEnter a distance in feet and inches";
		    cin>>feet>>inches;
			Distance second(feet,inches);
		
			cout<<"\nThe data of second object is:"<<"Feet: "
			<<second.getFeet()<<" Inch: "<<second.getInches()<<endl;
			break;
		}
		catch(Distance::InchesEx obj)
		{
		cout <<"Exception! In"<<obj.originFunction
				 <<"\n Inches value of "<<obj.inchValue
				 <<"is out of bounds";			
		}
	 }
	 while(true);
	return 0;
}

