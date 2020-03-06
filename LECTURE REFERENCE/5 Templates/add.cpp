
//WAP to add two different data  using template for various datatype.
template <class S,class S2>
S add(S a, S b)
{
	return a+b;
}
int main()
{
	int int1 =5,int2 =5;
	float float1=5.5,float2 =5.5;
	cout<<add(int1,int2)
		<<add(float1,float2)
		<<add(int1,float1)	
}		