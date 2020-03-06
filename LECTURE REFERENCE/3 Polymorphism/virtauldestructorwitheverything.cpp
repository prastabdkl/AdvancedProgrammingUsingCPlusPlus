//a program that includes everything in polymorphism
#include <iostream>
using namespace std;

//Animal base class
//Abstract class cannot be instantiated
class Animal
{
public:
	virtual void ID() = 0; //pure virtual function
};
class Dog : public Animal
{
public:
	void ID(){cout<<"Dog class"};
};
class Cat : public Animal
{
public:
	void ID(){cout<<"Cat class"};
};

int main()
{
	cout<<"We will now define the Dog object, referenced by an Animal pointer. \n";

	Animal *myAnimal[] = {new Dog,new Cat};
	for (int i = 0; i < 2; ++i)
	{
		myAnimal[i]->ID();
	}

	// 	myAnimal[0]->ID();
	// 	myAnimal[1]->ID();
	// 	myAnimal[2]->ID();
	cout<<"\nThe program is now going to end\n";
	
	delete myAnimal; //2 constr and animal dest
	return 0;
}
