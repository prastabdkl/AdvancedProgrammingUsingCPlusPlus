#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number";
	try{
		cin>>num;
		if(num<=0)
				  throw "EXception";
		if(num>=100)
				  throw "Input greater than 100";
				  
		cout<<"The square root of "<<num<<" is "<<sqrt(num);
	}
	catch(int msg)
	{
		cout<<msg;
	}
	catch(const char *msg)
	{
		cout<<msg;
		}	
}
