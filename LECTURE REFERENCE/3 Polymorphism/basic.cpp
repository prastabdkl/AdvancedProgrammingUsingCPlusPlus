/*
Polymorphism is a feature of OOPs that allows the object to behave differently in different conditions.
In C++ we have two types of polymorphism:
1) Compile time Polymorphism:
    This is also known as static (or early) binding.
2) Runtime Polymorphism:
    This is also known as dynamic (or late) binding.

1) Compile time Polymorphism
***Function overloading and Operator overloading*** 
are perfect example of Compile time polymorphism.
Compile time Polymorphism Example
In this example, 
we have two functions with same name but different number of arguments.
Based on how many parameters we pass during function call 
determines which function is to be called, this is why 
it is considered as an example of polymorphism because in 
different conditions the output is different.
Since, the call is determined during compile time thats why
 it is called compile time polymorphism.
*/
#include <iostream>
using namespace std;
class Add {
public:
  int sum(int num1, int num2){
     return num1+num2;
  }
  int sum(int num1, int num2, int num3){
     return num1+num2+num3;
  }
};
int main() {
  Add obj;
  //This will call the first function
  cout<<"Output: "<<obj.sum(10, 20)<<endl;
  //This will call the second function
  cout<<"Output: "<<obj.sum(11, 22, 33);
  return 0;
}
