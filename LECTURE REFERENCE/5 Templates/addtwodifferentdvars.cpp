#include <iostream>
using namespace std;

// int add(int a,int b)
// {
// 	return a+b;
// }
// float add(float a,float b)
// {
// 	return a+b;
// }
// double add(double a,double b)
// {
// 	return a+b;
// }
template <class T,class T2>
void add (T a, T2 b)
{	
	cout<<a+b;
	//return a+b;
}

int main(){
	int int1=-5,int2 =5;
	float float1=-5.5,float2 =5.5;
	double double1=53455.45,double2=-32252352.44;

	cout<<"sum of"<<int1<<int2<<"is"<<add(int1,int2);
	cout<<"sum of"<<float1<<float2<<"is"<<add(float1,float2);
	add(int1,float2);

}