// A program to
#include <iostream>
using namespace std;

int main()
{
	//int a[8] ="PRoGRAM";
	int a[8] ={1,2,3,4,5,6,7,8};
	int *ptr = a;
	ptr = ptr+1;
	cout << *ptr << endl; 
	cout << *(ptr + 4) << endl; 
	--ptr; 
	cout << *ptr << endl;	

	return 0;
}

