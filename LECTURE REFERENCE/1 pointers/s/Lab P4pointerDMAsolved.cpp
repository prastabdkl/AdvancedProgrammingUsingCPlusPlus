// A program to
#include <iostream>
using namespace std;

int main()
{
	int x, *p, *q ;
	p = new int[10];
	q = p; //
	*p = 4; 
	for (int j = 0; j < 10; j++)
	{
		x = *p;//4
		p++; 
		*p = x + j;//4,4,5,7,10,14,19,25,32,40,49(outofbounds)
	}
	for (int k = 0; k < 11; k++ )
	{
		cout << *q << " ";
		q++;
	}//13
	cout<<endl;
	return 0;
}

