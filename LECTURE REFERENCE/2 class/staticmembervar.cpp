#include <iostream>
using namespace std;
class Tree
{
	private:
		static int Count; //Static member variable
	public:
		Tree(){
			Count++;
		}
		int getObjectCount() const{
			return Count;
		}
};
int Tree::Count = 0;
int main()
{
	Tree oak;
	Tree elm;
	Tree pine;
	
	cout<<"We have" << pine.getObjectCount()
		<<"Trees in our program \n";
	return 0;
}
