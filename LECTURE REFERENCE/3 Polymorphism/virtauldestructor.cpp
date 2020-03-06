#include <iostream>
using namespace std;

//Animal base class

class Animal
{
public:
	Animal()
	{
		cout << "\nThis is the Animal constructor executing";
	}
	virtual  ~Animal()
	{
		cout << "\nThis is the Animal Destructor executing";
	}
};

class Dog : public Animal
{
public:
	Dog() : Animal(){
		cout << "\nThis is the Dog constructor executing";
	}
	~Dog(){
		cout << "\nThis is the Dog Destructor executing";
	}	
};
int main()
{
	cout<<"We will now define the Dog object, referenced by an Animal pointer. \n";

	Animal *myAnimal = new Dog;
	cout<<"\nThe program is now going to end\n";
	
	delete myAnimal;
	return 0;
}
