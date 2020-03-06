#include <iostream>
using namespace std;

int main()
{
    int terms,n3;
    int n1 = 0;
    int n2 = 1;

    cout<<"Enter the number of terms"<<endl;
    //cin>>terms;
    terms = 6;
    cout<<n1<<" "<<n2<<" ";

    for(int i = 1; i <= terms; i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}
