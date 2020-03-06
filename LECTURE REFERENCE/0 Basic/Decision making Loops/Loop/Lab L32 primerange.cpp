//WAP to find out whether given number is prime or not of given input range

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float low,high;
    int temp;
    int count = 0;

    cout<<"Enter the lowest range "<<endl;
    cin>>low;
    cout<<"Enter the highest range "<<endl;
    cin>>high;

    if(abs(low) != low || abs(high) != high)
        cout<<"The program will convert the negative range to positive \n";

    low = round(abs(low));
    high = round(abs(high));

    //swapping
    if (low>high)
    {
        low = low+high;
        high = low-high;
        low = low-high;
        //temp=low;
        //low=high;
        //high=temp;
    }
    cout<<"range:"<<low<<" "<<high<<endl;

    for(int num=low;i<=high;i++)
    {
        count = 0;
        for(int j=1; j <=high; j++)
        {
            if(num%j == 0)
                count++;
        }
        if(count == 2)
            cout<<num<<"\t";
    }
    return 0;
}
