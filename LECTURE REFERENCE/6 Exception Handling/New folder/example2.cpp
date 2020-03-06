#include <iostream>
using namespace std;
const int SIZE=2;

int main()
{
//	int SIZE = 2,i;
    int x[SIZE];
    for(int i=0;i<10;i++){
			x[i]=i;
		}
	try{

		for(int i=0;i<10;i++){
			if(SIZE ==i && x[SIZE])
				throw "Array out of bounds";
			cout<<x[i]<<endl;
		}	
	}
	catch( const char *msg){
		cout<<"Exception occured \n"<<msg;
	}
}
