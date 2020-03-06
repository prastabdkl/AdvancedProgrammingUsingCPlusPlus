#include <iostream>
using namespace std;

template <typename T, typename U>
class Weight{
	private:
		T kg;
		U grams;
	public:
		void setData(T,U);

		T getKgData()
		{
			return kg;
		}
		U getGramsData()
		{
			return grams;
		}
};
template <typename T, typename U>
void Weight<T,U>::setData(T x,U y)
{
	kg=x;
	grams=y;
}

int main(){
	Weight<int,double> obj1;
	obj1.setData(5,0.5);
	cout<<"Value is: "<<obj1.getKgData();
	cout<<"Value is: "<<obj1.getGramsData()<<endl;
}
