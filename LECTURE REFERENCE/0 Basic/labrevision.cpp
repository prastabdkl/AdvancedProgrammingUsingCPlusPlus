#include <iostream>
using namespace std;

//function prototyping
void showMenu();
void showFees(int,int);

int main(){
	int choice,months;
	
	const int ADULT_CHOICE = 1,
		CHILD_CHOICE = 2,
		SENIOR_CHOICE = 3,
		QUIT_CHOICE = 4;

	const int ADULT = 40.0,
			CHILD = 20.0,
			SENIOR = 30.0;
	do
	{
		//function to show the menu
		showMenu();
		
		cout<<"Enter your choice";
		cin>>choice;
		
		while(choice < ADULT_CHOICE || choice > QUIT_CHOICE)
		{
			cout<<"Enter a valid choice: ";
			cin>>choice;
		}
		if (choice != QUIT_CHOICE)
		{
			cout<<"Enter the number of months";
			cin>>months;
			switch(choice)
			{
				case ADULT_CHOICE:
					showFees(ADULT,months);
					break;
				case CHILD_CHOICE:
					showFees(CHILD,months);
					break;
				case SENIOR_CHOICE:
					showFees(SENIOR,months);
					break;
			}
		}
		else
			return 0;		
	}
	while(choice != QUIT_CHOICE);		
		

}
void showMenu(){
	cout << "\n \t \t Health club Membership menu \n \n"
		 << "1. Standard club Membership \n"
		 << "2. Child Membership \n"
		 <<	"3. Senior Citizen Membership \n"
		 << "4. Quit the program \n\n";
}
void showFees(int rate,int months){
	cout<<"The total is $"<<rate*months;
}


