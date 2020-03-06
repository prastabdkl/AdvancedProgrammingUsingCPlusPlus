#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{	
	const int NUM_EMPLOYEES = 2;	//NUMBER OF EMPLOYEES
	vector<int> hours;	//A vector of integers
	vector<double> payRate;	//A vectors of doubles
	
	//nput the data
	cout <<"Enter the hours worked by " << NUM_EMPLOYEES
		 << " employees and their hourly rates. \n";
		 
	cout << "The size of the hours before pushing is : " << hours.size()<<endl;
	
	for(int index = 0; index < NUM_EMPLOYEES; index++)
	{
		int tempHours;	//To hold the number of hours entered
		double tempRate;	//To hold the pay rate entered
		cout<<"Hours worked by Employee #"<<(index+1)<<": ";
		cin>>tempHours;
		hours.push_back(tempHours);
		cout<<"Hourly pay rate for Employee#"<<(index+1)<<": ";
		cin>>tempRate;
		payRate.push_back(tempRate);
	}

	cout << "The size of the hours after pushing is : " << hours.size()<<endl;
	
	
	//Display each employee's gross pay
	cout << "\n\nHere is the gross pay for 5 Employees";
	cout <<fixed<<setprecision(2);
	for(int index = 0; index < NUM_EMPLOYEES; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout<<"Employee #"<<(index+1)<<": $"<<grossPay<<endl;
	}
	
	//Implementation of various vector functions
	cout << "\n\nThe size of the hours before clearing : " << hours.size()<<endl;
	cout << "Lets clear the vector";
	hours.clear();			//clearing the vector
	
	if(hours.empty())	//Detecting an empty vector
		cout<<"No values in the vector.\n";
	cout << "The size of the hours after clearing : " << hours.size()<<endl;
	
	
	
	cout<<"The size of vector payRate is:"<<payRate.size();
	cout << "Lets pop from payRate vector";
	payRate.pop_back();			//pop a value from the vector
	
	cout << "The size of the payRate vector after popping : " << payRate.size()<<endl;


	return 0;
}

