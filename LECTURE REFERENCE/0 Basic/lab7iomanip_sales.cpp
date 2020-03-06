//WAP to Ask sales figures for 3 days. The total sales are calulated and displayed in the table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//double x = 12.4, y = 456.0;
	//cout <<setprecision(5)<<showpoint<< x << endl;
	//cout << y << endl;
	
	double day1,day2,day3,total,average;

	//Get the sales for each day.
	cout << "Enter the sales for day 1 : ";
	cin >> day1;
	cout << "Enter the sales for day 2 : ";
	cin >> day2;
	cout << "Enter the sales for day 3 : ";
	cin >> day3;
	//sample data 145678.99 205614.85 198645.22

	//calculate the total sales.]
	total = day1 + day2 + day3;
	average = day1 + day2 + day3/3;

	//Display the sales figures.
	cout << "\nSales figures\n";
	cout << "-----------------\n";
	cout << setprecision(2) << fixed;
	cout << "Day 1 : " << setw(8) <<day1 <<endl;
	cout << "Day 2 : " << setw(8) <<day2 <<endl;
	cout << "Day 3 : " << setw(8) <<day3 <<endl;
	cout << "Total : " << setw(8) <<total <<endl;
	//cout << "Total : " <<left<< setw(8) <<total <<endl;

	

	return 0;
}
