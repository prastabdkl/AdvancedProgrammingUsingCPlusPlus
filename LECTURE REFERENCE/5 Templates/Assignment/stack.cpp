#include <iostream>
using namespace std;
const int MAX = 100;

template <typename T>
class Stack{
	private:
		T newStack[MAX];
		int top;
	public:
		Stack();
		void push(T);
		T pop();
};
template <typename T>
Stack <T> :: Stack(){
	top = -1;
}
template <typename T>
void Stack<T> :: push(T value){
	newStack[++top] = value;
}
template <typename T>
T Stack<T> :: pop(){
	return newStack[top--];
}	
int main(){
	cout<<"\nARRAY OF INTs";
	Stack<int> s;
	s.push(10); //push 3 char
	s.push(20);
	s.push(30);
	cout << "\n1: last input: " << s.pop() <<endl;
	cout << "2: " << s.pop() <<endl;
	cout << "3: first input: " << s.pop() <<endl;
	cout<<"\nARRAY OF FLOATs";
	
	Stack<float> s1;
	s1.push(1111.1F); //push 3 floats
	s1.push(2222.2F);
	s1.push(3333.3F);
	cout << "\n1: last input: " << s1.pop() <<endl;
	cout << "2: " << s1.pop() <<endl;
	cout << "3: first input: " << s1.pop() <<endl;
	cout<<"\nARRAY OF CHARs";

	Stack<char> s2;
	s2.push('a'); //push 3 char
	s2.push('b');
	s2.push('c');
	cout << "\n1: last input: " << s2.pop() <<endl;
	cout << "2: " << s2.pop() <<endl;
	cout << "3: first input: " << s2.pop() <<endl;
	
	return 0;	
}
