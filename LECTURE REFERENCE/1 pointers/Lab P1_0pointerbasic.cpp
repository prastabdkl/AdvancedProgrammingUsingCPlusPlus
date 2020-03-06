// A program to
#include <iostream>
using namespace std;

int main()
{
	char a[8] ="PRoGRAM";
	//char a[8] ={'P','R','o','G','R','A','M'};
	char *ptr = a;
	ptr =ptr+1;
	cout << &ptr <<endl;

	cout << ptr << endl; 
	cout << ptr + 4 << endl; 
	cout << &ptr <<endl;

	cout << --ptr << endl; 
	cout << &ptr <<endl;
	cout << ptr << endl;
	ptr = ptr+1;
		cout << ptr << endl;
			cout << --ptr << endl; 
					cout << ptr << endl;


		



	return 0;
}

