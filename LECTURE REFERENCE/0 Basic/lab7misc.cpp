//WAP to understand the various expressions and interactivities in C++
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main(){
	char ch,value;
	int total;
	total = (6-3)*(2+7)/3;	//precendence and associativity
	cout<<"The total is "<<total<<endl;	
	
	cin.get(ch);

	int a = 5, b = 12;
	double x = 3.4, z = 9.1;
	
	//cout << setw(5);
	cout << b / a << endl << x * a << endl << a * x << endl 
		 << static_cast<double>(b / a) << endl
		 << static_cast<double>(b) / a << endl 
		 << b / static_cast<double>(a) << endl
		 << static_cast<double>(b) / static_cast<double>(a) << endl
	 	 << b / static_cast<int>(x) << endl  
	 	 << static_cast<int>(x) * static_cast<int>(z) << endl
	 	 <<	static_cast<int>(x * z) << endl
	 	 <<	static_cast<double> (static_cast<int>(x) * static_cast<int>(z)) << endl;
	
	ch = cin.get();
	
	do
	{
		cout<<"Are you sure you want to go to next section?"<<"PLease  type Y or N ";
		cin>>value;
	}
	while(value !='y' && value != 'Y' && value!='n' && value != 'N');

	if (value =='n' || value == 'N')
	{
		cout<<"You pressed no, now the program will exit"<<endl;
		exit(0);	
	}

	//cin.ignore();
	cout<<"\npress enter and you are ready to go ";
	ch = cin.get();

	string name,city;
	bool result;
	name = "Ram ";
	city = "from Kathmandu";
	cout<<name+city<<endl; //concatenation
	cout<<"\nLength of name is "<<name.length()<<endl;
	result=name>city;
	cout << result<<endl ;
	result=name!=city;
	cout << result<<endl ;
	result=name<city;
	cout << result<<endl ;
	
	cout<<"Enter your name";
	cin>>name;
	//getline(cin,name);
	cout<<name;
	
	return 0;
}
