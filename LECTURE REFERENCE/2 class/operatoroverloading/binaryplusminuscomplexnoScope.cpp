
#include<iostream> 
using namespace std; 
  
class Complex { 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0)
	{	
		real = r;
		imag = i;
		cout<<real<<endl<<imag<<endl;
	}
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (const Complex &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    }
    //complex multiplication
    //(a+bi)(c+di) = ac + adi + bci + bdi2
    //			   = (ac-bd)+(ad+bc)i


    Complex operator * (const Complex &obj) { 
         Complex res; 
         res.real = real*obj.real - imag*obj.imag; 
         res.imag = real*obj.imag + imag*obj.real; 
         return res; 
    } 
    void print() { cout << real << " + i" << imag << endl; } 
};
 
  
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 + c2; // An example call to "operator+" 
    c3.print();
    c3=c1*c2;
    c3.print();
} 
