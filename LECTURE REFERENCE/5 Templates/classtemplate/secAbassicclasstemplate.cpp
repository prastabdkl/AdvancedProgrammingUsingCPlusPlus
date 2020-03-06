//WAP tp learn about the basics of class template
#include <iostream>
using namespace std;
//template <typename or class T >
template <typename T,typename U>
class Weight{
private:
	T kg;
	U grams;
public:
	void setData(T,U);
	T getKgData() const;
	U getGramsData() const;

};
template <typename T,typename U>
void  Weight<T,U> :: setData(T x,U y)
{
	kg = x;
	grams =y;
}
template <typename T, typename U>
T Weight<T,U>::getKgData() const{
	return kg;
}
template <typename T, typename U>
U Weight<T,U>::getGramsData() const{
	return grams;
}
int main(){
	Weight<int,float> obj1;
	obj1.setData(5,0.5);
	cout<<"Kg is: "<< obj1.getKgData()<<endl;
	out<<"Grams is: "<< obj1.getGramsData()<<endl;
	}


