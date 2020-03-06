#include <iostream>
using namespace std;

class Parent
{
public:
	Parent()
	{
		cout << "\nThis is the Parent constructor";
	}
	~Parent()
	{
		cout << "\nThis is the Parent Destructor";
	}
};

class Child : public Parent
{
public:
	Child(){
		cout << "\nThis is the Child constructor";
	}
	~Child(){
		cout << "\nThis is the Child Destructor";
	}	
};
int main()
{
	cout<<"We will now define the Child object. \n";

	Child object;
	cout<<"\nThe program is now going to end\n";
	
	return 0;
}
