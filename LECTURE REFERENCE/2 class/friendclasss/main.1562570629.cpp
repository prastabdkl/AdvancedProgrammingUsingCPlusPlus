#include <iostream>
#include "budget.h"
#include <string>
using namespace std;

int main()
{
	int count = 0;
	double total,mainOfficeRequest;
	const int NUM_DIVISIONS = 4;
	
	cout<<"Enter the main office budget request";
	cin>> mainOfficeRequest;
	Budget::mainOffice(mainOfficeRequest);
	
	Budget divisions[NUM_DIVISIONS]; //Array of budget divisions
	
	for(count =0; count <NUM_DIVISIONS;count++)
	{
		double budgetAmount;
		cout<<"\n Enter the budget request for division"<<count+1<<": ";
		cin>>budgetAmount;
		divisions[count].addBudget(budgetAmount);
	}
	//Implementation of friend function to
	//display the budget request and the corporate budgets;
	for(count =0; count <NUM_DIVISIONS;count++)
	{
		total = friendFunction(divisions[count]);
		cout<<"\n Division"<<count+1<<"\t $"<<total<<endl;
	}
	cout<<"total Budget Requests: \t $"
		<< divisions[0].getCorpBudget()<<endl;
		
	//memberwise assignment
	Budget newObject;
	newObject=divisions[0];
//	Budget newObject=divisions[0];
	cout<<newObject.getDivisionBudget()<<endl
		<<newObject.getCorpBudget();	
	return 0;
}
//string(5,'\n')
	
