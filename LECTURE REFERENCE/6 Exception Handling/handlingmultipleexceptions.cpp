// A program to
#include <iostream>
using namespace std;

int main()
{
	int divisor, num = 5;
	string str = "negative value is unaccepted!!";
	cout <<"divisor value: ";
	cin >> divisor;
	
	try{
	if(divisor == 0) 
		throw num;
	else if(divisor <0)
	     throw str;
	}
	catch(int x)
	{ cout <<"Exception! throw value " << x << endl;    }
	
	catch(string y)
	{ cout << y << endl;    }


}

