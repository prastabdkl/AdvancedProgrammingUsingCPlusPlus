//WAP to find out whether given number is armstrong or not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,temp;
    int digit;
    int sum=0;

    cout<<"Enter a number to check "<<endl;
    cin>>num;

    temp=num;

    while(temp != 0){
        digit = temp%10;
        sum= sum+pow(digit,3);
        temp = temp/10;
    }
    if (sum == num)
        cout<<num<<" is Armstrong";
    else
        cout<<num<<" is not armstrong";

    return 0;
}
