#pragma once
#include <vector>
#include <fstream>
#include <string>
#include "Triangle.h"
using namespace std;
class ObjReader
{
	vector<vector<float>> vertexes;
	vector<vector<int>> trianglesId;
public:
	ObjReader(string str);
	vector<vector<float>> GetVertexes();
};

