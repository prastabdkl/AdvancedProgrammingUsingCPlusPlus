// A program to
#include <iostream>
using namespace std;


void update(int a[ ], int b, int &c, int *d)
{
	*(a+2) = -2;
	b = 10;
	c = 23;
	*d = a[4];
}
int main()
{
	int w[5] = {9,8,7,6,5} , x =4, y = 3, z = 2;
	update (w, x, y, &z);
	cout << "Array w = ";
	
	for (int k=0; k<5; k++)
		cout << w[k] << ", ";
		
	cout << endl << "x = " << x << " y = "
		<< y << " z = " << z << endl;
	return 0;
}
