// A program to
#include <iostream>
using namespace std;
void doDivision() throw (divisionByZero)
{ //ask user to enter value of divisor
int divisor;
cout<<"Enter the value of divisor";
cin>>divisor;
   try
   {
	if(divisor == 0)
	  throw divisionByZero(“divided by 0”);
   }
   catch(divisionByZero)
   { throw   }
}


int main()
{
   try
   {  doDivision();   }
   catch(divisionByZero d)
   {  cout << d.what() << endl;   }
 return 0;
}

