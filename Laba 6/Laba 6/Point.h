#pragma once
#include <vector>
using namespace std;

class Point
{
public:
	float x;
	float y;
	float z;
	Point(float, float, float);
	vector<float> GetData();
};

