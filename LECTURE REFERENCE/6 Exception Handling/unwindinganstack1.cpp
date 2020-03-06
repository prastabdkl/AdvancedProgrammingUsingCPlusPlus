/*
  Stack Unwinding in C++
The process of removing function entries from function call stack at run time
is called Stack Unwinding.
Stack Unwinding is generally related to Exception Handling.
In C++, when an exception occurs, the function call stack is linearly searched 
for the exception handler, and all the entries before the function 
with exception handler are removed from the function call stack.
So exception handling involves Stack Unwinding 
if exception is not handled in same function (where it is thrown).

For example, output of the following program is:

 f3() Start
 f2() Start
 f1() Start
 Caught Exception: 100
 f3() End
*/
#include <iostream> 
using namespace std; 

// A sample function f1() that throws an int exception 
void f1() throw (int) { 
	 cout<<"\n f1() Start "; 
	 throw 100; 
	 cout<<"\n f1() End "; 
}

// Another sample function f2() that calls f1() 
void f2() throw (int) { 
	 cout<<"\n f2() Start "; 
	 f1(); 
	 cout<<"\n f2() End "; 
} 

// Another sample function f3() that calls f2() and handles exception thrown by f1() 
void f3() { 
	cout<<"\n f3() Start "; 
	try { 
		f2(); 
	} 
	catch(int i) { 
	cout<<"\n Caught Exception: "<<i; 
	} 
	cout<<"\n f3() End"; 
} 

// A driver function to demonstrate Stack Unwinding process 
int main() { 
	f3(); 
		
	getchar(); 
	return 0; 
} 

