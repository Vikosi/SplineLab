#pragma once
#include <map>
#include <vector>
#include "Element.h"

using namespace std;

struct Data {
	vector<double> F;
	vector<double> X;
	vector<Elem*> elems;
	vector<double> ws;
	vector<vector<int>> x_to_elem;
	void addNode(vector<double> xy);
	void addF(double);
	void addElem(vector<double> nodes);
	//void addElem(vector<int> nodes, vector<double> params);
	vector<Node*> nodes;
	//int subsize = 2;
};
