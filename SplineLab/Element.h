#pragma once
#include <vector>

using namespace std;
struct Elem {
	vector<double> nodes;
	vector<int> g_bf1, g_bf2;
	int size;
	Elem(vector<double> Nodes): nodes(Nodes), size(Nodes.size()) {

	}
	Elem(vector<double> Nodes, int subsize) : size(Nodes.size())
	{
		for (int i = 0; i < Nodes.size(); i++)
		{
			nodes.push_back(Nodes[i] * subsize);
		}
	}
	
};

struct Node {
	vector<double>coord;
	Node(vector<double> Coord) : coord(Coord) {

	}
};
