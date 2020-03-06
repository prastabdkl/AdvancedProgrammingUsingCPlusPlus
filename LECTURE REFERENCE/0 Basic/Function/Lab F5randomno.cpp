/*randomize() – this function is used to generate random numbers each time, when you run program.

rand() – this function is used to return random number from 0 to RAND_MAX-1. Here RAND_MAX is the maximum range of the number. If you want to generate random numbers from 0 to 99 then RAND_MAX will be 100.
Both functions are declared in stdlib.h header file, so you have to include this header file in program’s header inclusion section.

Generate random numbers example in C++
?

C++ program to generate random numbers.*/
 
#include<iostream.h>
#include<stdlib.h>
 
int main()
{
    int i;          //loop counter
    int num;        //store random number
 
    randomize();    //call it once to generate random number
    for(i=1;i<=10;i++)
    {
        num=rand()%100; //get random number
        cout << num << "\t";
    }
    return 0;
}
