#include <iostream>
#include "FeetInch.h"

using namespace std;

int main()
{
    int feet,inches;

    cout<<"Enter a distance in feet and inches";
    cin>>feet>>inches;
	FeetInch first(feet,inches);
	
 	cout<<"Enter a distance in feet and inches";
    cin>>feet>>inches;
	FeetInch second(feet,inches);
	
	cout<<"the Input data of first object is:"<<"Feet: "
	<<first.getFeet()<<" Inch: "<<first.getInches()<<endl;
	
	cout<<"the Input data of second object is:"<<"Feet: "
	<<second.getFeet()<<" Inch: "<<second.getInches()<<endl;

	
    if(first == second)
        cout<<"\nfirst is equal to second";
    if(first > second)
        cout<<"first is greater than second";
    if(first < second)
        cout<<"second is greater than first";
    return 0;
}

