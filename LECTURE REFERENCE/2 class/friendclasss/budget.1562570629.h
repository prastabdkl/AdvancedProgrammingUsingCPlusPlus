//class specification file has contents of budget.h

#ifndef BUDGET_H //include guard
#define BUDGET_H
class Budget
{
	private:
		static double corpBudget;
		double divisionBudget;
	public:
		Budget();
		void addBudget(double b); //divisionBudget +=b;corpBudget += b
		//returntype ClassName::functionName(datatype parameter)
		double getDivisionBudget() const;
		double getCorpBudget() const;
		static void mainOffice(double j);//corpBudget += j;
		friend double friendFunction(Budget);
};
#endif
