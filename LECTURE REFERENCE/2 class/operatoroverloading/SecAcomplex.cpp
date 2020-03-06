//WAP to add two complex numbers using operator overloading
#include <iostream>
using namespace std;

class Complex
{	
private:
	int real,imag;
public:
	Complex(int r=0,int i =0 )
	{
		real=r;
		imag=i;
	}
	void display(){
		cout<<real<<"+ i"<<imag;
	}
	Complex operator+ (const Complex &);
	Complex operator* (const Complex &);
};
// void Complex :: operator+ (const Complex &obj2){
// 	int real1=real+obj2.real;
// 	int imag1 = imag +obj2.imag;
// 	cout<<"the sum is "<<real1<<"+ i"<<imag1;
// }
Complex Complex :: operator+ (const Complex &obj2){
	Complex temp;
	temp.real = real +obj2.real;
	temp.imag = imag +obj2.imag;
	return temp;
}
Complex Complex :: operator* (const Complex &obj2){
	Complex temp;
	//C1*C2 = (a+ib)(c+id)
	//		= (ac -bd) + i(ad+bc)
	temp.real = real*obj2.real-imag*obj2.imag;
	temp.imag = real*obj2.imag+imag*obj2.real;
	return temp;
}
int main()
{
	Complex obj1(2,5),obj2(5,2);
	Complex obj3 = obj1+obj2;
	obj3.display();
	obj3= obj1*obj2;
	obj3.display();

}