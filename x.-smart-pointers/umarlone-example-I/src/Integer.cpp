#include "Integer.h"

#include <iostream>

using namespace std;


Integer::Integer() : value(-1)
{
	cout << "Integer()" << endl;
}

Integer::Integer(int value): value(value)
{
	cout << "Integer(int)" << endl;
}

Integer::~Integer()
{
	cout << "~Integer()" << endl;
}

void Integer::SetValue(int val)
{
	value = val;
}

int Integer::GetValue()
{
	return value;
}


