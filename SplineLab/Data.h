#pragma once
#include <map>
#include <vector>
#include "Element.h"

using namespace std;

struct Data {
	vector<double> F;
	vector<double> X;

	vector<double> ws;
	vector<vector<int>> x_to_elem;
	void addNode(vector<double> xy);
	void addF(double);
	vector<Node*> nodes;
};
