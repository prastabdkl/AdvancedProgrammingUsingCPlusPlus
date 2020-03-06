//WAP to find the sum of squares of natural numbers, no of terms input given by users

#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum=0;

	cout<<"Enter the number of terms";
	cin>>num;

	for(int i=1; i<=num;i++)
	{
		sum=sum + i*i;
		//sum += i*i;
		//sum += pow(i,2); using <cmath> header
	}

	cout<<"The sum of square of \'"<<num<<"\'"<<"terms is: "<<sum<<endl;
	
	return 0;

} 