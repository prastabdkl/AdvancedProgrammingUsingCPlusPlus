//Write a class Distance with two variables: feet,inch
//Write a default constructor with parameter
//		to initialize the values of feet and inch.
//implement exception handling(T,T,C) to check whether the inches values
//		is less than 0
//  	OR
//		Greater than 12
// Write two accessors getFeet() and getInch() to access the values entered.
//		Call these functions to show the output in main function
//Task:
//If the exception occurs run the program again to ask for input
//if exception does not occur end the program normally
#include <iostream>
#include <string>
using namespace std;

class Distance{
	int feet,inch;
	public:
		class InchesEx{
		public:
			  string  originFunction;
			  int inchValue;

			  	InchesEx(string msg, int value)
			  	{
	 				originFunction = msg;
	 				inchValue = value;
			  }				
		};

		Distance(int ft=0, int in=0){
			if(in>12)
				throw InchesEx("2-arg-constructor",in);
				
			feet = ft;
			inch = in;	
		}
		int getFeet() const{
		return feet;}
		int getInch() const{
			if (inch < 0)
			   throw InchesEx("getInch Function", inch);
		return inch;}
};
int main(){
	int feet,inches;
	do{		
		cout<<"Enter a distance in feet and inches";
	    cin>>feet>>inches;
		
		try{
		Distance D0(feet,inches);
		cout <<"Feet->"<<D0.getFeet()<<endl
			 <<"Inch->"<<D0.getInch();
 			break;
		}
		catch(Distance::InchesEx obj){
			cout <<"Exception! In"<<obj.originFunction
				 <<"\n Inches value of "<<obj.inchValue
				 <<"is out of bounds";			
		}		  
	}
	while(true);
}

