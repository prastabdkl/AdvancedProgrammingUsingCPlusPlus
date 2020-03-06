/*2) Runtime Polymorphism
Function overriding is an example of Runtime polymorphism.
Function Overriding: When child class declares a method,
which is already present in the parent class then this is called function overriding, here child class overrides the parent class.

In case of function overriding
we have two definitions of the same function,
one is parent class and one in child class.
The call to the function is determined at runtime to decide 
which definition of the function is to be called,
thats the reason it is called runtime polymorphism.
*/
#include <iostream>
using namespace std;

class BaseClass{
	public:
		void showMessage()
		{
			cout<<"This is the Base Class.\n";
		}
};
class DerivedClass : public BaseClass{
	public:
		void showMessage()
		{
			BaseClass :: showMessage();
			cout<<"This is the Derived Class. \n";
		}
};

int main(){
	BaseClass b;
	DerivedClass d;
	b.showMessage();
	d.showMessage();
}
