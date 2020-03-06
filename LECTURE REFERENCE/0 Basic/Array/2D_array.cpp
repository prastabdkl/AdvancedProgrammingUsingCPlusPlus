#include<iostream>
using namespace std;

int main(){
    const int SIZE=3;
    int numbers[SIZE][SIZE]={
        {1,4,2},
        {5,6,7},
        {9,2,5},
    };
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<numbers[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
