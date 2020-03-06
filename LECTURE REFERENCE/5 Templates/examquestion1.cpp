#include <iostream>
#include <cstdlib>
using namespace std;

class SimpleVector {
private:
	int *aptr; //point to the allocated array
	int arraySize; //number of elements in the array
	void memError(); //Handles memory allocation errors
public:
	SimpleVector() //default constructor
	{ aptr = 0; arraySize = 0; }
	SimpleVector(int) ; //Constructor declaration
	SimpleVector(const SimpleVector &) ;
	~SimpleVector() ; // Destructor declaration
	int size() const { return arraySize; }
	int getElementAt(int position) ; //to return an element
	int &operator [] (const int &) ; // Overloaded [] operator
};
SimpleVector :: SimpleVector(int s) {
	arraySize = s;
	try { aptr = new int [s]; }
	catch(bad_alloc) { memError(); } //'bad_alloc' does not name a type
	for(int count = 0; count < arraySize; count++)
		*(aptr + count) = 0; 
}
SimpleVector :: SimpleVector(const SimpleVector &obj ) {
	arraySize = obj.arraySize;
	aptr = new int[arraySize];
	if(aptr == 0) memError(); //if Cart't allocate memorY
	for(int count = 0; count < arraySize; count++)
		*(aptr + count) = *(obj.aptr + count);
}
SimpleVector::~SimpleVector(){
	if (arraySize > 0) delete [] aptr; 
}

void SimpleVector::memError ( ) { exit (EXIT_FAILURE); }

int SimpleVector::getElementAt(int sub) {
	if (sub < 0 || sub >= arraySize) //Subscript out of range
		exit(EXIT_FAILURE) ;
	return aptr[sub];
}

int &SimpleVector::operator[] (const int &sub){
	if (sub < 0 || sub >= arraySize) //Subscript out of range
		exit (EXIT_FAILURE) ;
	return aptr[sub];
}
int main()
{
	return 0;
}
