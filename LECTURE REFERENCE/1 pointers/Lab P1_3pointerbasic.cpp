// A program to
#include <iostream>
using namespace std;

int main()
{
	char * const A = "EXAMINATION";
	int i = 3;
	char *p = A+i;
	cout << p << endl;
	p += 2;
	cout << p << endl;
	--p;
	cout<< p <<endl;
}

