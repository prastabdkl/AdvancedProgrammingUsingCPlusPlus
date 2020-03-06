#include "FeetInch.h"
#include <cmath>


void FeetInch::simplify()
{
    if(inches >= 12)
    {
        feet += (inches/12);
        inches = inches%12;
    }
    else if (inches<0)
    {
        feet -= ((abs(inches)/12) + 1);
        inches = 12- (abs(inches)%12);
    }
}

bool FeetInch::operator >(const FeetInch &right)
{
    bool status;
    if(feet>right.feet)
        status = true;
    else if(feet==right.feet && inches >right.inches)
        status = true;
    else
        status = false;
    return status;
}
bool FeetInch::operator <(const FeetInch &right)
{
    bool status;
    if(feet < right.feet)
        status = true;
    else if(feet==right.feet && inches <right.inches)
        status = true;
    else
        status = false;
    return status;
}
bool FeetInch::operator ==(const FeetInch &right)
{
    bool status;
    if(feet==right.feet && inches ==right.inches)
        status = true;
    else
        status = false;

    return status;
}

