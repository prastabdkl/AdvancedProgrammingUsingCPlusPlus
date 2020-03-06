#include <iostream>
using namespace std;

class Budget
{
	private:
		static double corpBudget;
		double divisionBudget;
	public:
		Budget(){
			divisionBudget =0;
		}
		void addBudget(double b)
		{
			divisionBudget += b;
			corpBudget += b;
		}
		double getDivisionBudget() const
		{
			return divisionBudget;
		}
		double getCorpBudget() const
		{
			return corpBudget;
		}
		static void mainOffice(double);
};
double Budget ::corpBudget=0;
void Budget ::mainOffice(double moffice)
{
	corpBudget += moffice;
}
int main()
{
	int count = 0;
	double mainOfficeRequest;
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
	//display the budget request and the corporate budgets;
	for(count =0; count <NUM_DIVISIONS;count++)
	{
		cout<<"\n Division"<<count+1<<"\t $ "
			<< divisions[count].getDivisionBudget()<<endl;
	}
	cout<<"total Budget Requests: \t $"
		<< divisions[0].getCorpBudget()<<endl;
	
	return 0;
}
