#include <iostream>
#include <string>
using namespace std;
class Person{
public:
	string profession;
	int age;
	Person(){
		profession="unemployed";
		age=16;
	}
	void display(){
		cout<<"My profession is: "<<profession<<endl;
		cout<<"My age is: "<<age<<endl;
		walk();
		talk();
	}
	void walk(){ cout << "I can walk \n"}
	void talk(){ cout << "I can talk \n"}
};
class Teacher : public Person{
public:
	void teachAP() { cout<<"I can teach AP \n"}
};
class FootBaller : public Person, public Teacher {
public:
	void playFootball() { cout<<"I can play football \n"}
};
int main()
{
	Person P1;
	P1.display();
	
	Teacher T1;
	T1.profession ="Teacher";
	T1.age = 50;
	T1.display();
	T1.teachAP();

	FootBaller F1;
	F1.profession ="FootBaller";
	F1.age = 50;
	F1.display();
	F1.teachAP();
	F1.playFootball();


	return 0;
}




