/*C++ program to demonstrate example of function overloading.*/
#include  <iostream>
using namespace std;
 
void printChar();
void printChar( char c );
void printChar( char c, int num );
void printChar(int num, char c);
 
int main()
{
    printChar();
    printChar('#');
    printChar(10,'$');
    printChar('@',10);
     
    cout<< endl;
         
    return 0;
}
 
void printChar()
{
        cout<< endl<<"%";
}
void printChar( char c )
{
        cout<< endl<< c;
}
void printChar( char c, int num )
{
    int i=0;
         
    cout<< endl;
    for(i=0; i< num; i++)
        cout<< c;
}
void printChar(int num, char c)
{
    int i=0;
         
    cout<< endl;
    for(i=0; i< num; i++)
        cout<< c;
}
