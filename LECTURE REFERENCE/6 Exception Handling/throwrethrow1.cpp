//rethrowing an expression from within an exception handler can be done by calling throw, by itself, with no exception.
//This causes current exception to be passed on to an outer try/catch sequence.
//An exception can only be rethrown from within a catch block.
//When an exception is rethrown, it is propagated outward to the next catch block.

#include <iostream>
using namespace std;
void MyHandler()
{
   try
   {
       throw "hello";
   }
   catch (const char*)
   {
   cout <<"Caught exception inside MyHandler\n";
   throw; //rethrow char* out of function
   }
}
int main()
{
   cout<< "Main start"<<endl;
   
   try
   {
       MyHandler();
   }
   catch(const char*)
   {
      cout <<"Caught exception inside Main\n";
   }
       cout << "Main end";
       return 0;
}
