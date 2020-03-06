#include <iostream>
using namespace std;

int main()
{
    int num,temp;
    int digit;
    int rev=0;

    cout<<"Enter a number to check "<<endl;
    cin>>num;

    temp=num;

     do
     {
         digit = temp % 10; cout<<"digit"<<digit<<endl;
         rev = (rev * 10) + digit; cout<<"rev"<<rev<<endl;
         temp = temp / 10; cout<<"temp"<<temp<<endl;
     }
     while (temp != 0);

    cout<<num<<endl<<rev<<endl;
    if (rev == num)
        cout<<num<<" is Palindrome";
    else
        cout<<num<<" is not Palindrome";

    return 0;
}
