#include <iostream>
using namespace std;

int main()
{
    int terms;
    int n0,sum=0;

    cout<<"Enter the number of terms"<<endl;
    //cin>>terms;
    terms = 10;
    int j=1;
    cout<<n0<<"\t";

    for(int i = 1; i <= terms; i++)
    {
        sum += j;
        cout<<sum<<"\t";
        j=sum-j;
    }
    return 0;
}
