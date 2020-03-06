/*
C++ Operators Overloading
Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types.

The advantage of Operators overloading is to perform different operations on the same operand.

Operator that cannot be overloaded are as follows:

Scope operator (::)
Sizeof
member selector(.)
member pointer selector(*)
ternary operator(?:)
Syntax of Operator Overloading
return_type class_name  : : operator op(argument_list)  
{  
     // body of the function.  
}  
Where the return type is the type of value returned by the function.

class_name is the name of the class.

operator op is an operator function where op is the operator being overloaded, and the operator is the keyword.

Rules for Operator Overloading
Existing operators can only be overloaded, but the new operators cannot be overloaded.
The overloaded operator contains atleast one operand of the user-defined data type.
We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.
When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.
When binary operators are overloaded through a member function takes one explicit argument, and if they are overloaded through a friend function takes two explicit arguments.
C++ Operators Overloading Example
Let's see the simple example of operator overloading in C++. In this example, void operator ++ () operator function is defined (inside Test class).
*/
// program to overload the unary operator ++.

#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:
		Test(){
			num=8;		   	
		}    
       void operator ++()         {     
          num = num+2;     
       }    
       void display() {     
           cout<<"The count is: "<<num;     
       }    
};    
int main()    
{    
    Test obj,obj2;    
    ++obj;  // calling of a function "void operator ++()"    
    obj.display();    
    return 0;    
}    
