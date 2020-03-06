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
template <class T>
void swap (T &a, T &b)
{	
	T temp;
	temp =a;
	a = b;
	b = temp;
}

int main(){
	int int1=-5,int2 =5;
	float float1=-5.5,float2 =5.5;
	double double1=53455.45,double2=-32252352.44;
	string name= "ram",surname="bahudar";
	cout<<"before swap"<<int1<<" "<<int2<<endl;
	swap(int1,int2);
	cout<<"after swap"<<int1<<" "<<int2;
	
	cout<<"before swap"<<name<<" "<<surname<<endl;
	swap(name,surname);
	cout<<"after swap"<<name<<" "<<surname;


}