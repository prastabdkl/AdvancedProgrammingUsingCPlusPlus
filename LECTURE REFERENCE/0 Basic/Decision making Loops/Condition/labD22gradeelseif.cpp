//WAP to find out grade using if elseif
#include <iostream>
using namespace std;

int main()
{
	float marks;
	cout<<"Enter the marks ";
	cin>>marks;

	if (marks>=90)
		cout<<"You got grade: A"<<endl;
	else if (marks>=80)
		cout<<"You got grade: B"<<endl;
	else if (marks>=70)
		cout<<"You got grade: C"<<endl;
	else if (marks>=60)
		cout<<"You got grade: D"<<endl;
	else
		cout<<"You got grade: F"<<endl;
				
	return 0;

}
