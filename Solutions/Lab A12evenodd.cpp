//WAP to find the largest number of 3 numbers and evenodd
#include <iostream>
using namespace std;

void takeInput(int a[],int SIZE)
{
	for(int i= 0; i < SIZE; i++)
	{ 
		cout<<"Enter the element #"<< i+1;
		cin>> a[i];
	}
}
bool getLargest(int a[],int SIZE)
{
	int max = a[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (a[i] >= max)
			max = a[i];		
	}
	cout<<"Largest is"<<max;		
	if (max % 2 == 0)
		cout<<max<<"is Even";
	else 
		cout<<max<<"is Odd";
}
int main()
{
	const int SIZE = 3;
	int a[SIZE];
	
	takeInput(a,SIZE);
	getLargest(a,SIZE);
	
	return 0;
}

