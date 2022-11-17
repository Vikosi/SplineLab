#pragma once
#include <vector>

using namespace std;
struct Elem {
	vector<double> nodes;
	vector<int> g_bf1, g_bf2;
	int size;
	Elem(vector<double> Nodes): size(Nodes.size()) {
		for (int i = 0; i < Nodes.size(); i++)
		{
			nodes.push_back(Nodes[i] * 2);
		}
	}
	/*Elem(vector<double> Nodes) : size(Nodes.size())
	{
		for (int i = 0; i < Nodes.size(); i++)
		{
			nodes.push_back(Nodes[i] * 2);
		}
	}*/
	
};

struct Node {
	vector<double>coord;
	Node(vector<double> Coord) : coord(Coord) {

	}
};
