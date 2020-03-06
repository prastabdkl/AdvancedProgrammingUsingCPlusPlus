#include <iostream>
using namespace std;

class Base{
private:
	int x;
	void display1(){
		cout<<"\nPrivate display of BASE Class\n";
	}
protected:
	int y;
	void display2(){
		cout<<"\nProtected display of BASE Class\n";
	}
public:
	int z;
	void display3(){
		cout<<"\nPublic display of BASE Class\n";
	}
};
class PrivateDerived : private Base{
public:
	void showMessage(){
		y=10;z=10;
		cout<<""<<y<<z;
		display2();//private
		display3();//private
	}
};
class ProtectedDerived : protected Base{
public:
	void showMessage(){
		y=20;z=20;
		cout<<""<<y<<z;
		display2();//protected
		display3();//protected
	}
};
class PublicDerived : public Base{
public:
	void showMessage(){
		y=20;z=20;
		cout<<""<<y<<z;
		display2();//protected
		display3();//public
	}
};
int main()
{
	Base B1;
	B1.display3();
	cout<<"-------------------------";
	PublicDerived pub1;
	pub1.showMessage();
	pub1.display();

	ProtectedDerived Pro1;
	Pro1.showMessage();
	//Pro1.display();

	PrivateDerived Pri1;
	Pri1.showMessage();
	//pri1.dispay3();

	return 0;
}