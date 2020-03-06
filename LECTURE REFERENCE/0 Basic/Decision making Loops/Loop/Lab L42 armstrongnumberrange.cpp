//WAP to find out whether given number is armstrong or not of given input range
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int low,high,temp;
    int digit;
    double sum;

    cout<<"Enter the lowest range "<<endl;
    cin>>low;
    cout<<"Enter the highest range "<<endl;
    cin>>high;

    for(int i=low;i<=high;i++){
        temp=i;
        sum=0;
        while(temp != 0){
            digit = temp%10;
            sum= sum+pow(digit,3);
            //sum = sum+digit*digit*digit;
            temp = temp/10;
        }
        if (sum == i)
            cout<<i<<" is Armstrong \n";
    }
    return 0;
}
