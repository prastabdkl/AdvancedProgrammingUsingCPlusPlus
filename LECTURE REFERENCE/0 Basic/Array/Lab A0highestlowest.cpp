//#WAP to ask for 7 input numbers and find the highest and lowest of them all using array.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	float numbers[SIZE];
	
	cout<<"Enter seven differnt numbers:"<<endl;
	for(int i = 0; i<SIZE;i++)
		cin>>numbers[i];
		
	float highest,lowest;
	
	//to find the highest number
	highest = numbers[0];
	for(int count = 1; count<SIZE; count++)
	{
		if(highest < numbers[count])
			highest = numbers[count];			
	}
	
	//to find the lowest number
	lowest = numbers[0];
	for(int count = 1; count<SIZE; count++)
	{
		if(lowest > numbers[count])
			lowest = numbers[count];			
	}
	
	cout<<"you entered the following numbers:";
	for(int i = 0; i<SIZE;i++)
		cout<<numbers[i]<<" ";
	
	cout<<"\nHighest is:"<<highest<<endl;
	cout<<"lowest is:"<<lowest<<endl;
	
	return 0;
}

