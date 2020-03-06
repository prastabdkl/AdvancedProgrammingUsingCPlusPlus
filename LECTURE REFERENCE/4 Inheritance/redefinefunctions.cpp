#include <iostream>
#include <string>
using namespace std;

class Marks
{
private:
	string name;
	int id;
public:
	Marks(){
		name="ABC";
		id=0;
	}
	void setData(string name,int id)
	{
		
	}
	~Marks();
};
Marks::Marks(){
	Marks = 0;
}
void Marks::setMarks(int m){
	Marks=m;
}
class InternalMarks : public Marks
{
	int intMark;
public:
	InternalMarks();
	void setMarks(int);
	~InternalMarks();
};
void Marks::setMarks(int m){
	Marks=m;
}
