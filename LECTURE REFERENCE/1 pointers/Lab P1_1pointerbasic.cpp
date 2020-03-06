// A program to
#include <iostream>
using namespace std;

int main()
{
	char A[8] ="ABCDE";
	char *ptr = A;
	++ptr;
	cout << ptr << endl;
	ptr += 2;
	cout << ptr<< endl; 
	--ptr; 
	cout << ptr << endl; 
	
	return 0; 
}

