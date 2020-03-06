// A program to
#include <iostream>
using namespace std;

int main()
{
	char a[8] ="PRoGRAM";
	//char a[8] ={'P','R','o','G','R','A','M'};
	char *ptr = a;
	ptr = ptr+1;
	cout << ptr << endl; //RoGRAM
	//cout << *ptr << endl; //RoGRAM

	cout << ptr + 4 << endl; //AM
	cout << --ptr << endl; //PROGRAM
	cout << ptr << endl;	//PROGRAM
	for(int i=0; i<8;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
	}

