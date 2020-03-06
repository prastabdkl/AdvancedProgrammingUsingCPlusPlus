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
		void showMessage ()
		{
			
			cout<<"This is the Derived Class. \n";
		}
};
int main(){
	BaseClass b;
	DerivedClass d;
	b.showMessage();
	d.BaseClass::showMessage();
}




