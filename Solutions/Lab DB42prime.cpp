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
bool getSmallest(int a[],int SIZE)
{
	int min = a[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (a[i] <= min)
			min = a[i];		
	}
	cout<<"Largest is"<<min;
	
	int count = 0;
	for(int i = 1; i<=min; i++)
	{
		if (min % i == 0)
			count += 1;	
	}		
	if (count == 2)
		cout<<min<<"is prime";
	else 
		cout<<min<<"is NOT Prime";
}
int main()
{
	const int SIZE = 3;
	int a[SIZE];
	
	takeInput(a,SIZE);
	getSmallest(a,SIZE);
	
	return 0;
}

