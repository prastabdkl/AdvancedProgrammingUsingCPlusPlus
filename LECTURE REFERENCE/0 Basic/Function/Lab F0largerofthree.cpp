//WAP to find the largest number of 3 numbers
#include <iostream>
using namespace std;

//function prototyping, only write the data type of the formal parameters.
int larger(int,int);
int compareThree(int,int,int);

int main()
{
	int a=20;
	int b=10;
	int c=30;
	int max,largest;
	
	maxoftwo=larger(a,b);//a and be are actual parameters
	cout<<"largest of a,b is:"<<maxoftwo<<endl;
	
	largest=compareThree(a,b,c);
	cout<<"largest of a, b and c is:"<<largest<<endl;
	//cout<<"largest of a, b and c is:"<<larger(x,larger(y,z))<<endl; //this also can be used instead of defining new function


	return 0;
}
int larger(int x,int y)
{
	if (x>=y)
		return x;
	else
		return y;
}
int compareThree(int x,int y,int z)
{
	return larger(x,larger(y,z));
}
