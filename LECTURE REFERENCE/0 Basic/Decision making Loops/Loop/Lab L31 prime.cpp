//WAP to find out whether given number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;
    cout<<"Enter a positive integer:";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
            count++;
    }
    if(count == 2)
        cout<<num<<" is a prime number";
    else
        cout< <num<<" is NOT a prime number";

    return 0;
}
