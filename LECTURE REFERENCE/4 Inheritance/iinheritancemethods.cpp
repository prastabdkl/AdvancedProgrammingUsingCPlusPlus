#include <iostream>
using namespace std;

class Base 
{
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
			//display1();
			display2();
		}
};
class publicDerived: public Base
{
	// z is public // y is protected	// x is not accessible from publicDerived
	public:
		void showMessage(){
			//x=5;
			y=10;z=10;
			cout<<"x is: "<<" \t"<<"y is: "<<y<<" \t"<<"z is: "<<z<<" \t"<<
				  "\nShowmessage of publicDerived class\n";
			display3();
			display2();
			//display1();
		}
};
class protectedDerived: protected Base
{
	// z is protected	// y is protected	// x is not accessible from protectedDerived
	public:
		void showMessage(){
			//x=5;
			y=20;z=20;
			cout<<"x is: "<<" \t"<<"y is: "<<y<<" \t"<<"z is: "<<z<<" \t"<<
				  "\nShowmessage of protectedDerived class\n";
			display3();
			display2();
			//display1();
		}
};
class privateDerived: private Base
{
	// z is private	// y is private	// z is not accessible from privateDerived
	public:
		void showMessage(){
			//x=5;
			y=20;z=20;
			cout<<"x is: "<<" \t"<<"y is: "<<y<<" \t"<<"z is: "<<z<<" \t"<<
				  "\nShowmessage of privateDerived class\n";
			display3();
			display2();
			//display1();
		}
	
};
int main()
{
 	Base B1;
	 //B1.display1();	
	 //B1.display2();
	 B1.display3();
	 
	 cout<<"------------------------------------\n";
	 cout<<"\t\tPUBLIC DERIVED\t\t\n\n";
	 cout<<"------------------------------------\n";

	 publicDerived pub1;
	 pub1.showMessage();
	 pub1.display3();
	 //pub1.display2();
	 
 	 cout<<"------------------------------------\n"; 	 
	 cout<<"\t\tPROTECTED DERIVED\t\t\n\n";
	 cout<<"------------------------------------\n";
	 protectedDerived pro1;
	 pro1.showMessage();
	 //pro1.display3();
	 
	 cout<<"------------------------------------\n";	 
	 cout<<"\t\tPRIVATE DERIVED\t\t\n\n";
	 cout<<"------------------------------------\n";
	 
	 privateDerived private1;
	 private1.showMessage();
	 //private1.display3();
	 
}
