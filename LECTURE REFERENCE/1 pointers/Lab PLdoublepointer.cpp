// A program to
#include <iostream>
using namespace std;

int main()
{
	int N = 5;
	int* M = new int(3);
	int** J = &M;
	int A[5] = {1,2,3,4,5};
	
	cout << *M << endl; //0,0,0
	cout << **J << endl;
	cout << *&N << endl
		<< A[4] << endl
		<< *(A+2) << endl;
}

