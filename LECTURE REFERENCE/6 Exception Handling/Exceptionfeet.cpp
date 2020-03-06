//Write a class Distance with two variables: feet,inch
//Write a default constructor with parameter
//		to initialize the values of feet and inch.
//implement exception handling(T,T,C) to check whether the inches values
//		is less than 0
//  	OR
//		Greater than 12
// Write two accessors getFeet() and getInch() to access the values entered.
//		Call these functions to show the output in main function
#include <iostream>
using namespace std;

class Distance{
	int feet,inch;
	public:
		Distance(int feet=0, int inch=0){
			if(inch<0 || inch>12)
					  throw"Exception! Invalid input";
			this->feet = feet;
			this->inch = inch;	
		}
		int getFeet() const{
		return feet;}
		int getInch() const{
		return inch;}
};
int main(){
	try{
	Distance D0(10,-2);
	cout <<"Feet->"<<D0.getFeet()<<endl
		 <<"Inch->"<<D0.getInch();
	Distance D1(10,15);
	cout <<"Feet->"<<D1.getFeet()<<endl
		 <<"Inch->"<<D1.getInch();
	}
	catch(const char *msg){
		cout<<msg;
	}			  
}
