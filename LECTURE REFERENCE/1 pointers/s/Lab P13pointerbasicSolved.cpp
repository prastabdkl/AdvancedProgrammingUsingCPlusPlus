// A program to
#include <iostream>
using namespace std;

int main()
{
	char * const A = "EXAMINATION";//constant pointer
	int i = 3; 
	char *p = A+i; //M
	cout << p << endl; //MINATION
	p += 2; //N
	cout << p << endl; //NATION
	--p;//I
	cout<< p <<endl;//INATION
	
}

