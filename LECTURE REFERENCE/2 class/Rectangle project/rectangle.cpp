#include "rectangle.h"
#include <iostream>
#include <cstdlib> //for exit function
using namespace std;

Rectangle :: Rectangle()
{
	width = 0.0;
	length = 0.0;
}

Rectangle :: Rectangle(double width,double length)
{
	this->width = width;
	this->length = length;
}

void Rectangle :: setWidth(double w)
{
	if(w >= 0)
		width = w;
	else
	{
		cout<< "Invalid Width \n";
		exit(EXIT_FAILURE);
	}
}
void Rectangle :: setLength(double len)
{
	if(len >= 0)
		length = len;
	else
	{
		cout<< "Invalid Length \n";
		exit(EXIT_FAILURE);
	}
}
