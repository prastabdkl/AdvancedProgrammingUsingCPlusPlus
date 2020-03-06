#include <iostream>
using namespace std;

class Complex
{	
private:
	int real,imag;
public:
	Complex(int i=0,int j=0)
	{
		real=i;
		imag=j;
	}
	Complex operator +(const Complex obj2)
	{
		Complex temp;
		temp.real =real+obj2.real;
		temp.imag = imag+obj2.imag;
		return temp;
	}
			//obj1*obj2 = (a+ib)(c+id)
			//			= (ac -bd) + i(ad+bc)
	Complex operator *(const Complex obj2)
	{
		Complex temp;
		temp.real =real*obj2.real-imag*obj2.imag;
		temp.imag = real*obj2.imag+imag*obj2.real0;
		return temp;
	}
	void display()
	{
		cout<<"The sum of addition of two complex numbers  is"
		<<real<<"+"<<"i"<<imag;
	}
};
int main()
{
	Complex obj1(2,3),obj2(5,2);
	Complex obj3= obj1+obj2;
	obj3.display();
	obj4=obj1*obj2;	
	obj4.display;
	return 0;
}