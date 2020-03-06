#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
class SimpleVector {
private:
	T *aptr; //point to the allocated array
	int arraySize; //number of elements in the array
	void memError(); //Handles memory allocation errors
public:
	SimpleVector() //default constructor
	{ aptr = 0; arraySize = 0; }
	SimpleVector(T) ; //Constructor declaration
	SimpleVector(const SimpleVector &) ;
	~SimpleVector() ; // Destructor declaration
	int size() const { return arraySize; }
	T getElementAt(T position) ; //to return an element
	T &operator [] (const T &) ; // Overloaded [] operator
};
template <class T>
SimpleVector<T> :: SimpleVector(T s) {
	arraySize = s;
	try { aptr = new T [s]; }
	catch(bad_alloc) { memError(); } //'bad_alloc' does not name a type
	for(T count = 0; count < arraySize; count++)
		*(aptr + count) = 0; 
}
template <class T>
SimpleVector<T> :: SimpleVector(const SimpleVector &obj ) {
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	if(aptr == 0) memError(); //if Cart't allocate memorY
	for(int count = 0; count < arraySize; count++)
		*(aptr + count) = *(obj.aptr + count);
}
template <class T>
SimpleVector<T>::~SimpleVector(){
	if (arraySize > 0) delete [] aptr; 
}
template <class T>

void SimpleVector<T>::memError ( ) { exit (EXIT_FAILURE); }

template <class T>
T SimpleVector<T>::getElementAt(T sub) {
	if (sub < 0 || sub >= arraySize) //Subscript out of range
		exit(EXIT_FAILURE) ;
	return aptr[sub];
}

template <class T>
T &SimpleVector<T>::operator[] (const T &sub){
	if (sub < 0 || sub >= arraySize) //Subscript out of range
		exit (EXIT_FAILURE) ;
	return aptr[sub];
}
int main()
{
	return 0;
}
