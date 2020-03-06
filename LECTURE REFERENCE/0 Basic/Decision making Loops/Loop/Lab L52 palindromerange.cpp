/*
WAP to calculate the palindrome number of the given input range
Author: Prastab Dhakal
Date: 22/04/2019
Location:
*/
#include <iostream>
using namespace std;

int main()
{
    int num,temp,digit,rev,low,high;

    cout << "Enter the lowest range " << endl;
    cin>>low;
    cout<<"Enter the highest range "<<endl;
    cin>>high;

    for(int i=low;i<=high;i++)
    {
        temp=i;
        rev=0;
        do
        {
            digit = temp % 10;
            rev = (rev * 10) + digit;
            temp = temp / 10;
        }
        while (temp != 0);

        if (rev == i)
            cout<<i<<" ";
    }
    return 0;
}
