#include "ObjReader.h"

vector<vector<float>> ObjReader::GetVertexes()
{
	return vertexes;
}

ObjReader::ObjReader(string path)
{
	string temp = path.substr(path.rfind('.'), path.length() - path.rfind('.'));
	if (path.substr(path.rfind('.'), path.length() - path.rfind('.')) == ".obj")
	{
		ifstream inFile(path);
		if (inFile.is_open())
			while (!inFile.eof())
			{
				string curr;
				getline(inFile, curr);
				if (curr.substr(0, 2) == "v ")
				{
					vector<float> result;
					curr.erase(0, 2);
					float temp;
					while (curr.size() != 0)
					{
						if (curr.find(' ') != -1)
						{
							temp = stof(curr.substr(0, curr.find(' ')));
							curr.erase(0, curr.find(' ') + 1);
						}
						else
						{
							temp = stof(curr.substr(0, curr.size()));
							curr.erase(0, curr.size());
						}
						result.push_back(temp);
					}
					vertexes.push_back(result);
				}
				else if (curr.substr(0, 2) == "f ")
				{
					vector<int> result;
					curr.erase(0, 2);
					int temp;
					while (curr.size() != 0)
					{
						if (curr.find(' ') != -1)
						{
							temp = stoi(curr.substr(0, curr.find('/')));
							curr.erase(0, curr.find(' ') + 1);
						}
						else
						{
							temp = stoi(curr.substr(0, curr.find('/')));
							curr.erase(0, curr.size());
						}
						result.push_back(temp);
					}
					trianglesId.push_back(result);
				}
			}
	}
}
