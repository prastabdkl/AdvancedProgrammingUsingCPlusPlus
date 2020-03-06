//WAP to find the factorial of given input
#include <iostream>
using namespace std;

int main(){
	unsigned int numb;
	unsigned long fact = 1; //long for larger numbers

	cout<<"Enter a Number: "; //get a number
	cin>>numb;

	for (int j=numb; j>0;j--)
	{
		fact *= j;
	}
	cout<< "Factorial is "<<fact<<endl;
	return 0;
}