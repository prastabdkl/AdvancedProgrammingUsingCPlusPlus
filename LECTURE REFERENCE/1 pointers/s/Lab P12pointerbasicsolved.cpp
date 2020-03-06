// A program to
#include <iostream>
using namespace std;

int main()
{
	char A[8] ="ABCDE";
	char *ptr = A;
	
	++ptr;//B
	//cout<< *ptr <<endl<< ++ptr<<endl;
	cout << *ptr <<endl<< ptr << endl;//BCDE
	ptr += 2;//D 
	cout << ptr<< endl; //DE
	--ptr; //C
	cout << ptr << endl; //CDE
	
	return 0; 
}

