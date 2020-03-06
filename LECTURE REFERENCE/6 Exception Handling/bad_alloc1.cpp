// A program to
#include <iostream>
#include <new> // needed to use for bad-alloc

using namespace std;

int main()
{

int *p;
try
{
   p = new int[2];
   p[0]= 10;
   p[1]= 20;
}
catch(bad_alloc be)
{   cout << be.what() << endl;   }

}

