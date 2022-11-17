#include <vector>
#include <algorithm>
#include"Data.h"
#include"Element.h"

using namespace std;
void Data::addNode(vector<double> xy)
{
	Node* newnode = new Node(xy);
	nodes.push_back(newnode);
}
void Data::addF(double f)
{
	F.push_back(f);
}
void Data::addElem(vector<double> nodes)
{
	elems.push_back(new Elem(nodes));
}
