//WAP to perform division continuosly and show the remainder and quotient with input validation.
#include <iostream>
using namespace std;

int main(){
	char ch;
	long dividend,divisor; //long for larger numbers

	do
	{
		cout<<"Enter Dividend: "; 
		cin>>dividend;
		cout<<"Enter Divisor: "; 
		cin>>divisor;
		cout<<"Quotient is" <<dividend/divisor;
		cout<<"Remainder is" <<dividend%divisor;

		cout<<" \nDo another? Enter(Y/N)"; //DO IT AGAIN
		cin>>ch;


	}
	//while(ch != 'n'); 
	while(ch == 'Y' || ch == 'y');

	return 0;
}
/*
		do
		{
			cout<<" \nDo another? Enter(Y/N)"; //DO IT AGAIN
			cin>>ch;
		}
		while(ch!='y' && ch != 'Y' && ch!='n' && ch != 'N');
*/
