#include <iostream>
using namespace std;

class Test{
	private:
		int num;
	public:
		Test(){
			num=0;
		}
		void operator++()
		{
			num=num+10;
		}
		void operator--(int)
		{
			num=num-10;
		}
		void display(){
			cout<<"the value of num is: "<<num;
		}
};
int main()
{
	Test obj;
	obj.display();
	++obj;
	obj.display();
	Test obj2=obj--;
	//Test obj2=obj.operator--();
	obj2.display();
}