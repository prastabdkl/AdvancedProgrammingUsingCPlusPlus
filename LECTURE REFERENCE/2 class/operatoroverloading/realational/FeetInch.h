#include <iostream>
#ifndef FEETINCH_H_INCLUDED
#define FEETINCH_H_INCLUDED

class FeetInch
{
private:
    int feet,inches;
    void simplify();
public:
    FeetInch(int f=0,int i=0)
    {
        feet =f;
        inches =i;
        simplify();
    }
    int getFeet()
    {
    	return feet;
	}
	int getInches()
	{
		return inches;
	}
    bool operator >(const FeetInch &);
    bool operator <(const FeetInch &);
    bool operator ==(const FeetInch &);
};

#endif // FEETINCH_H_INCLUDED

