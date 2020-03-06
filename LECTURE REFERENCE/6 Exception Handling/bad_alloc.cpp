#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10000000;
	char* ptr;
	try
	{
		ptr = new char[SIZE];
	}
	catch(bad_alloc)
	{
		cout<<"\n bad_alloc exception: can't allocate memory.\n";
	}
	delete[] ptr;
	cout<<"\n Memory use is successful.\n";
	return 0;
	
}
