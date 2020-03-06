#include<iostream>
#include "budget.h"
#include<string>
using namespace std;

int main()
{
	int count = 0;
	double total, mainOfficeRequest;
	const int NUM_DIVISION = 4;
	
	cout<<"Enter the main office budget request";
	cin>>mainOfficeRequest;
	Budget::mainOffice(mainOfficeRequest);
	
	Budget division[NUM_DIVISION]; //array of budget divisions
	
	for(count = 0; count<NUM_DIVISION; count++)
	{
		double budgetAmount;
		cout<<"\nEnter the budget request for division"<<count+1<<": ";
		cin>>budgetAmount;
		division[count].addBudget(budgetAmount);	
	}
	//Implementation of friend function to diplay the budget request adn the corporate budgets;
	for(count =0; count<NUM_DIVISION; count++)
	{
		total = friendFunction(division[count]);
		cout<<"\n Division"<<count+1<<"\t $"<<total<<endl;	
	}	
	cout<<"total Budget Request: \t $"
		<<division[0].getCorpBudget()<<endl;
	//memberwise assignment
	Budget newObject;
	newObject = division[0];
	//Budget newObject = divisions[0];
	cout<<newObject.getDivisionBudget()<<endl
		<<newObject.getCorpBudget();
}
