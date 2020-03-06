#include <iostream>
using namespace std;
//defining a template
template <class T>
T abs(T n)
{
	return (n<0)?(-n):n;
}
int main()
{
	int int1=2;
	int int2=-3;
	float float1 = 5.5;
	float float2 = -5.5;
	long long1 = 451151258L;
	long long2 = -541524655L;

	cout<<"abs ("<<int1<<") ="
	<<abs(int1);
	cout<<"abs ("<<int2<<") ="
	<<abs(int2);
	cout<<"abs ("<<float1<<") ="
	<<abs(float1);
	cout<<"abs ("<<float2<<") ="
	<<abs(float2);







 

}