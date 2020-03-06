#include <iostream>
using namespace std;
#define SIZE 11
class Mode{
private:
	int array[SIZE]={5,4,5,5,4,8,5,4,6,1,4};
	int mode = array[0];
public:
	void process(){
		cout<<"Before sort"<<endl;
		display();
		modeFunction();
		cout<<"\nmode is: "<<mode<<endl;
	}
	void modeFunction(){
		int count,temp=0,k=0,visited[SIZE],d=0;
		cout<<endl;
		for(int i=0; i<SIZE;i++){//sort
	 			count=0;
				for(int j=0; j<SIZE;j++){
					if(array[i]==array[j]){
						count++;
					}
				}
				cout<<"count of "<<array[i]<<" is "<<count<<" "<<endl;
				
				if(count>1){
					temp = count;
					if(temp>=k){
						mode = array[i];
						k=temp;
					}
				}
		}
	}
	void display(){		
		for(int i=0; i<11;i++){
			cout<<array[i]<<"\t";
		}
	} 
};
int main()
{
	Mode Obj;
	Obj.process();
}
