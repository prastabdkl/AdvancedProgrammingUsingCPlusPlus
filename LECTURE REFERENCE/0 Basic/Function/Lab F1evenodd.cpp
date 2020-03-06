//WAP to use a function to find out whether given numbeer is even or odd usingbool return
#include <iostream>
using namespace std;

//function prototype
bool isEven(int);

int main()
{
	int val;
	
	cout << "Enter a number and i will tell you whether it is even or odd";
	cin >> val;
	
	//Indicate whether the number is even or odd
	if(isEven(val))
		cout << val << " is even \n";
	else
		cout << val << " is odd \n";
	
	return 0;
}
bool isEven(int number)
{
	bool status;
	
	if (number%2 == 0)
		status = true; //the number is even if there is no remainder.
	else
		status = false; //otherwise the number is odd
	return status;
}
