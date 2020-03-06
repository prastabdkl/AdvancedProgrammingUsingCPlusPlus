#include <iostream>
using namespace std;

int main()
{
	int set[8] = {5,10,15,20,25,30,35,40};
	int *nums = set;
	
	cout<<"The numbers in the set are \n";
	while(nums < &set[7])
	{
		nums++;
		cout << *nums << " ";
	}
}
