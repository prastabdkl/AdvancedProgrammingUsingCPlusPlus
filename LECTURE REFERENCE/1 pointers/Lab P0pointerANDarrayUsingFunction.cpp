#include <iostream>
#include <iomanip>
using namespace std;

void getSales(double *arr,int SIZE)
{
	for(int count = 0; count < SIZE; count++)
	{
		cout << "Enter the sales for Quarter"<<count+1<<":";
		cin >> arr[count];
		//cin >> *(arr+count);
		//cout << "Sales for Quarter"<<count+1<<":"<<*(arr+count);
	}
	
}
double totalSales(double *arr, int SIZE)
{	
	double sum = 0;
	for(int count = 0; count < SIZE; count++)
	{	
		sum += *arr;
		arr++;
		//sum += *arr++;	
	}
	return sum;
}

int main()
{
	const int QTR = 4;
	double sales[QTR];
	
	getSales(sales,QTR);
	
	cout<<fixed<<setprecision(2)
		<<"The Total sales is "
		<<totalSales(sales,QTR)<<endl;
	return 0;	
}

