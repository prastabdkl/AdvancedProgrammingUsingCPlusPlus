// A program to
#include <iostream>
using namespace std;

//a[]= {9,8,7,6,5},b=4, y/c=3, z/*d =2
void update(int a[ ], int b, int &c, int *d)
{
	*(a+2) = -2; //9,8,-2,6,5
	b = 10; //b=4
	c = 23;	//y=23
	*d = a[4]; //z=5
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
