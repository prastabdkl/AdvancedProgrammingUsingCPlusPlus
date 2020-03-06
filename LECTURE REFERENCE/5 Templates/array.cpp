//WAP  to search the element of array of different data types.
#include <iostream>
using namespace std;

template <class atype,class btype>
int find(atype *array, atype value,int size)
{
	for(int index =0; index<size; index++)
	{
		if (array[index]== value)
			return index;
	}
	return -1;
}
int main(){
	char charArray[]={7,4,'a','b','c'};
	char charToFind = 'a';
	int intArray[] = {2,1,4,5,6};
	int intToFind = 4;
	float floatArray[] ={2.5,2.5,3,4.5,5};
	float floatToFind =0;

	cout<<charToFind<<"is in index:"
		<<find(charArray,charToFind,5);

	cout<<intToFind<<"is in index:"
		<<find(intArray,intToFind,5);

	cout<<floatToFind<<"is in index:"
		<<find(floatArray,floatToFind,5);
}
}