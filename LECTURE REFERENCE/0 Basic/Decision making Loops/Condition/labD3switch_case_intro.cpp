//WAP to learn about implementation of switch case
#include <iostream>
using namespace std;

int main()
{
	char test;
	cout<<"Enter either A or B or C";
	cin>>test;

	switch(test)
	{
		case 'a':
		case 'A':
			cout<<"Name: Ram \n Address: Baneshowr \n phone:9818456789";
			break;

		case 'B':
			cout<<"Name: Hari \n Address: Baneshowr \n phone:9818456789";
			break;

		case 'C':
			cout<<"Name: Shyam \n Address: Baneshowr \n phone:9818456789";
			break;
			
		default:
			cout<<"Enter valid character";
			break;
		
	}
	return 0;
}

