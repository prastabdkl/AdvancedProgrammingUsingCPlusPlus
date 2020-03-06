// A program to
#include <iostream>
using namespace std;

void change(int x, int &y, int *z)
{
	x++;//x=2,i= 1 PV
	y++;//y=2,j=2 PR
	(*z)++; //*z =2, k =2
}
int main()
{
	int i = 1,j = 1, k = 1;
	change(i, j, &k);

	cout << endl << "i = " << i << "j  = "
		<< j << "k  = " << k << endl;
	return 0;
}
