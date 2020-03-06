#include <iostream>
using namespace std;

class BaseClass{
	public:
		void showMessage(int x)
		{
			cout<<"\nThe value of x in the Base Class is."<<x;
		}
};
class DerivedClass : public BaseClass{
	public:
		void showMessage(int x)
		{
			BaseClass :: showMessage(x+5); //call from derivedClass to base class function			
			cout<<"\nThe value of x in the Derived Class is."<<x;
		}
};

int main(){
	BaseClass b;
	DerivedClass d;
	//b.showMessage(15);
	d.showMessage(5);
}
