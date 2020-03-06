#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{	
	cout<<"\nMain start\n";

    
    cout<<"\nThe elements of array are"<<endl;
    x[2]=1;
    for(int i=0; i<5; i++)
    {
    	//cout<<x[i]<<endl;
        try 
        {	   
			//cout<<x[i];
			x[i]=i;
			throw i;
        } 
        // generalised catch block
        catch (...) 
        {
            cout << "Exception! array index out of bounds"
				<<""<<"will not be stored"<<endl;
        }
    }
    cout<<"\nMain End";
return 0;
}
