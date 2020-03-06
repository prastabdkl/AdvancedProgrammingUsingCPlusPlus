#include <iostream>  
using namespace std;  
class A  
{  
    private:
  		int x;  
    public:
		A(int i=0)  
		{  
		   x=i;  
		}  
    void operator+(const A);  
}; 
  
void A :: operator+(const A a)  
{       
    int m = x+a.x;  
    cout<<"The result of the addition of two objects is : "<<m;  
}  
int main()  
{  
    A a1(5);  
    A a2(4);  
    a1+a2;  
    return 0;  
}  
