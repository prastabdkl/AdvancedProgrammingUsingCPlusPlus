#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//A function to take input
void _takeInput(vector<int> hours,vector<double> payRate,int NUM_EMPLOYEES)
{
		//Input the data
	cout <<"Enter the hours worked by " << NUM_EMPLOYEES
		 << " employees and their hourly rates. \n";
	for(int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout<<"Hours worked by Employee #"<<(index+1)<<": ";
		cin>>hours[index];
		
		cout<<"Hourly pay rate for Employee#"<<(index+1)<<": ";
		cin>>payRate[index];
		
		//cout<<hours[index]<<payRate[index];
	}
}//takeInput(hours,payRate,NUM_EMPLOYEES);
//A function to take input by
void takeInput(vector<int> &hours,vector<double> &payRate,int NUM_EMPLOYEES)
{
		//Input the data
	cout <<"Enter the hours worked by " << NUM_EMPLOYEES
		 << " employees and their hourly rates. \n";
	for(int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout<<"Hours worked by Employee #"<<(index+1)<<": ";
		cin>>hours[index];
		
		cout<<"Hourly pay rate for Employee#"<<(index+1)<<": ";
		cin>>payRate[index];
		
		//cout<<hours[index]<<payRate[index];
	}
}
//A function to show output by 
void showOutput(vector<int> hours,vector<double> payRate,int NUM_EMPLOYEES)
{
	//Display each employee's gross pay
	cout << "\n\nHere is the gross pay for 5 Employees";
	cout <<fixed<<setprecision(2);
	for(int index = 0; index < NUM_EMPLOYEES; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout<<"Employee #"<<(index+1)<<": $"<<grossPay<<endl;
	}
}

int main()
{	
	const int NUM_EMPLOYEES = 2;	//NUMBER OF EMPLOYEES
	vector<int> hours(NUM_EMPLOYEES);	//A vector of integers
	vector<double> payRate(NUM_EMPLOYEES);	//A vectors of doubles
	
	//_takeInput(hours,payRate,NUM_EMPLOYEES);
	takeInput(hours,payRate,NUM_EMPLOYEES);

	showOutput(hours,payRate,NUM_EMPLOYEES);

	return 0;
}
