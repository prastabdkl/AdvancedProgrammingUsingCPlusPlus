#include <iostream>
using namespace std;


void funcC() throw (myException)
{   throw myException("Exception generated in funcC");   }

void funcB() throw (myException)
{   funcC();   }

void funcA() throw (myException)
{   funcB();   }

int main()
{
   try
   {  funcA();   }
   
   catch(myException me)
   {  cout << me.what() << "caught in main \n";   }
 
return 0;
}

