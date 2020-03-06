//#WAP to ask for 7 input numbers and find the highest and lowest of them all using array.
#include <iostream>
using namespace std;

//function prototyping
void inputValues(float numbers[],int SIZE);
void showValues(float [],int);
void showHighest(float numbers[],int SIZE);
float showLowest(float numbers[],int SIZE);

int main()
{	
	const int SIZE = 7;
	float numbers[SIZE];
	
	inputValues(numbers,SIZE); //to input the values in array
	
	showValues(numbers,SIZE); //to show the values
	
	showHighest(numbers,SIZE); //to show highest
		
	cout<<"lowest is:"
		<<showLowest(numbers,SIZE)<<endl; //to return lowest
	
	return 0;
}
//function inputValues Definition
void inputValues(float numbers[],int SIZE)
{
	cout<<"Enter seven differnt numbers:"<<endl;
	for(int i = 0; i<SIZE;i++)
		cin>>numbers[i];
		
	
}
//function to show the input values
void showValues(float numbers[],int SIZE)
{
	cout<<"you entered the following numbers:";
	for(int i = 0; i<SIZE;i++)
		cout<<numbers[i]<<" ";
}
//function to show highest
void showHighest(float array[],int SIZE){
	float highest;
	
	highest = array[0];
	
	for(int count = 1; count<SIZE; count++)
	{
		if(highest < array[count])
			highest = array[count];			
	}
	cout<<"\nHighest is:"
		<< highest<<endl;
}
//function to calculate lowest
float showLowest(float array[],int SIZE){
	float lowest;
	
	lowest = array[0];
	
	for(int count = 1; count<SIZE; count++)
	{
		if(lowest > array[count])
			lowest = array[count];			
	}
	return lowest;
}

