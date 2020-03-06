#include <iostream>
using namespace std;

template <typename T, typename U>
class Weight{
	private:
		T kg;
		U grams;
	public:
		void setData(T x,U y)
		{
			kg=x;
			grams=y;
		}
		T getKgData()
		{
			return kg;
		}
		U getGramsData()
		{
			return grams;
		}
};
int main(){
	Weight<int> obj1;
	obj1.setData(5);
	cout<<"Value is: "<<obj1.getKgData()<<endl;
	cout<<"Value is: "<<obj1.getGramsData()<<endl;
	
	Weight<double> obj2;
	obj2.setData(5.545);
	cout<<"Value is: "<<obj2.getKgData()<<endl;
	cout<<"Value is: "<<obj2.getGramsData()<<endl;
	
}
