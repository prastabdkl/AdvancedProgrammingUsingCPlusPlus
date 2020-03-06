//WAP to find the sum of squares of the natural numbers
#include <iostream>
using namespace std; 
  
int main() 
{ 
	int n = 4;
 	int sum = 0; 
	
	for (int i = 1; i <= n; i++) 
        	sum += (i * i); 
	
	cout << "The sum of squares is"<<sum<< endl; 
	
	return 0; 
} 