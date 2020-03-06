// A program to
#include <iostream>
#include <iomanip>
using namespace std;

void getSales(double *arr,int SIZE)
{
	cout<< "Enter the sales figures below for \n";

	for(int count = 0; count < SIZE; count++)
	{
		cout << "Day"<<count+1<<":";
		cin >> *(arr+count);
		//cin >> arr[count];
	}
}

double calculate(double *arr, int SIZE)
{	
	double sum = 0;
	for(int count = 0; count < SIZE; count++)
	{	
		sum += *arr;
		arr++;
		//sum += *arr++;
		// sum += arr[count];
	}
	return sum;
}
int main()
{
	const int numDays = 3;
	
	double *sales; 
	sales = new double[numDays];

	getSales(sales,numDays);

	cout<<fixed<<showpoint<<setprecision(2);
	cout << "The sum of total sales is : " << calculate(sales,numDays) << endl
		<< "The average sales for " << numDays <<" days is :" << calculate(sales,numDays)/numDays << endl;

	delete [] sales;
	sales = 0;

	return 0;
}
