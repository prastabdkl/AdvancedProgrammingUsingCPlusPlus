#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{	
	int hours,minutes,seconds;
	cout.fill('0');
	for(hours=0;hours<24;hours++)
	{
		for(minutes=0;minutes<60;minutes++)
		{
			for (seconds=0;seconds<60;seconds++)
			{
				cout<<setw(2)<<hours<<":";
				cout<<setw(2)<<minutes<<":";
				cout<<setw(2)<<seconds<<endl;
				sleep(1);
				system("CLS");
			}
		}
	}
	return 0;
}
