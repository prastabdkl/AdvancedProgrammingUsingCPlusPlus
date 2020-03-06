#include <iostream>
using namespace std;
const int MAX = 100;

template <typename T>
class Stack{
	private:
		T newStack[MAX];
		int top;
	public:
		Stack(){
			top = -1;
		}
		void push(T value){
			newStack[++top] = value;
		}
		T pop(){
			return newStack[top--];
		}		
};

int main(){
	Stack<float> s1;
	
	s1.push(1111.1F); //push 3 floats
	s1.push(2222.2F);
	s1.push(3333.3F);
	cout << "1: " << s1.pop() <<endl;
	cout << "2: " << s1.pop() <<endl;
	cout << "3: " << s1.pop() <<endl;
	
	Stack<char> s2;
	s2.push('a'); //push 3 char
	s2.push('b');
	s2.push('c');
	cout << "1: " << s2.pop() <<endl;
	cout << "2: " << s2.pop() <<endl;
	cout << "3: " << s2.pop() <<endl;
	
	return 0;	
}
