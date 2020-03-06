// A program to
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double *sales, total = 0.0, average;
	int numDays,count;
	 
	cout<<"Enter the number of days";
	cin>>numDays;

	sales = new double[numDays];

	cout<< "Enter the sales figures below for \n";
	for(count = 0; count < numDays; count++)
	{
		cout << "Day " <<count+1 <<": ";
		cin >> sales[count];
	} 
	for(count = 0; count < numDays; count++)
	{
		total += sales[count];
	}

	average = total/numDays;

	cout<<fixed<<showpoint<<setprecision(2);
	cout <<"Total SAles "  << total <<endl
		<< "Average sales" <<average <<endl;

	delete [] sales;
	sales = 0;
}
