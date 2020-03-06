#include <iostream>
using namespace std;

class A {
	private:
		int x;
	public:
		A(int i=0)
		{
			x=i;
		}
		void operator+ (const A );
};
void A :: operator+ (const A obj2){
	int sum = x+ obj2.x;
	cout<<"the complex number is"<<real<<"+ i"<<imag

}
int main()
{
	A obj1(2,3),obj2(5,3);
	obj1+obj2;
	7+6i

}