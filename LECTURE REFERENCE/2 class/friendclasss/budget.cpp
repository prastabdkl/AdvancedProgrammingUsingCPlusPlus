//class implementation file for budget.h
#include "budget.h"

double Budget ::corpBudget=0;
Budget :: Budget(){ //constructor
	divisionBudget =0;
}
void Budget::addBudget(double b){
	divisionBudget += b;
	corpBudget += b;
}
double Budget::getDivisionBudget() const{
	return divisionBudget;
}
double Budget::getCorpBudget() const{
	return corpBudget;
}
void Budget ::mainOffice(double moffice){
	corpBudget += moffice;
}
double friendFunction(Budget b)
{
	return(b.getDivisionBudget());
}
