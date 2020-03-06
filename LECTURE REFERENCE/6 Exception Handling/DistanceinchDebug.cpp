#include <iostream>
class Distance
{
private:
    int feet,inches;
public:
	class InchesEx{};		//Exception Class
	
    Distance(int ft=0,int in=0)
    {
        if(in >= 12.0 || in < 0)
			  throw InchesEx();
		feet = ft;
        inches =in;    
    }
    int getFeet()
    {
    	return feet;
	}
	int getInches()
	{
		return inches;
	}
};

using namespace std;
void inputData(){
    int feet,inches;

	cout<<"\nEnter a distance in feet and inches";
    cin>>feet>>inches;
	Distance second(feet,inches);

	cout<<"\nThe data of second object is:"<<"Feet: "
	<<second.getFeet()<<" Inch: "<<second.getInches()<<endl;
	//status = false;
}
int main()
{
	bool status = true;
	while(status)
	{
		cout<<"1: "<<status<<endl;
		try
		{
			cout<<"2:"<<status<<endl;
			inputData();
		}
		catch(Distance::InchesEx)
		{
		cout<<"3:"<<status<<endl;

			cout<< "\n Initialization error:""Inches value is out of bounds";
			//status = true;
			continue;
		}
		status =false;
		cout<<"4:"<<status<<endl;
	}

	cout<<endl;	
	return 0;
}

