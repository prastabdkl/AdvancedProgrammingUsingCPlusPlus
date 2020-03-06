#include <iostream>
using namespace std;

class Animal{
 public:  void id(){cout << "Animal\n";}//without virtual and with virtual
};
class Cat : public Animal{
 public: void id(){cout << "Cat\n";}
};
class Dog : public Animal{
 public: void id(){cout << "Dog\n";}
};
int main(){
	Animal *myAnimal[] ={new Animal,new Cat, new Dog};
	for (int i =0; i<3; i++)
	{
		myAnimal[i]->id();
	}	
}

