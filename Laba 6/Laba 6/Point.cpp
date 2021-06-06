#include "Point.h"

Point::Point(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

vector<float> Point::GetData()
{
	vector<float> temp;
	temp.push_back(x);
	temp.push_back(y);
	temp.push_back(z);
	return temp;
}