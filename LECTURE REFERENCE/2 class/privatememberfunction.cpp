#include <iostream>
using namespace std;

class Sample
{
	private:
		int number;
		void initnum(int number)
		{
			this->number = number;
		}
	public:
		Sample(int num){
			initnum(num);
		}
		void getNumber() const
		{
			cout<<"The number is initialized to"<<number;
		}
};
int main()
{
	int input;

	cout<<"Enter a number to initialize in the object";
	cin>>input;
	
	Sample S(input);
	//S.initnumber(input)
	S.getNumber();
	return 0;
}
