/*WAP to create a menu driven program for healthclub membership.
 *Define the following CONSTANTS for menu choices:
 		ADULT_CHOICE,
 		CHILD_CHOICE,
 		SENIOR_CHOICE,
		QUIT_CHOICE	
*Define the followin rates for each choice.	
		ADULT = 40.0,
		CHILD = 20.0,
		SENIOR = 30.0;
*Tasks:
**	Write a function showMenu() to show the available options
**	Take an input,validate until the choice is within RANGE of available choices.
**	If the choice is not equal to QUIT_CHOICE ask for number of months of total membership, ELSE end the program
**	Switch the choice according to user choice for each choice except QUIT_CHOICE,
**		and call the function showFees() to show the total membership cost given by formula:
**			cost = rates*months.

**	DO all of the above until the user inputs QUIT_CHOICE.(looping)

**********SAMPLE OUTPUT**********
                 Health club Membership menu

1. Standard club Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the program

Enter your choice:2
Enter the number of months:12
The total charges are $240
*/
#include <iostream>
using namespace std;

//function prototyping
void showMenu();
void showFees(double, int);

int main()
{
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
		showMenu();
		cout << "Enter your choice:";
		cin >> choice;

		while(choice < ADULT_CHOICE || choice > QUIT_CHOICE)
		{
			cout << "Please input valid menu choice:";
			cin >> choice;
		}

		if (choice != QUIT_CHOICE)
		{
			cout<<"Enter the number of months:";
			cin>>months;

			switch(choice)
			{
				case ADULT_CHOICE:
					showFees(ADULT,months);break;
				case CHILD_CHOICE:
					showFees(CHILD,months);break;
				case SENIOR_CHOICE:
					showFees(SENIOR,months);break;					
			}
		}
	}
	while(choice != QUIT_CHOICE);

	return 0;
}
void showMenu()
{
	char ch;
	cin.get(ch);

	cout << "\n \t \t Health club Membership menu \n \n"
		 << "1. Standard club Membership \n"
		 << "2. Child Membership \n"
		 <<	"3. Senior Citizen Membership \n"
		 << "4. Quit the program \n\n";
}
void showFees(double memberRate, int months)
{
	cout << "The total charges are $"
		 << (memberRate * months) << endl;
}
