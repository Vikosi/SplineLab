#define _CRT_SECURE_NO_WARNINGS
#include "IO.h"
#include <fstream> 
#include "Data.h"
#include "SplineLab.cpp"

void read_spline(Data& stk)
{
	int n, n2, n3;
	ifstream fuzly(root + "spline.txt");
	fuzly >> n >> n2 >> n3;
	for (int i = 0; i < n; ++i)
	{
		vector<double> coords;
		//vector<double> params;
		for (int i = 0; i < n2; i++)
		{
			double r;
			fuzly >> r;
			coords.push_back(r);
		}
		/*for (int i = 0; i < n3; i++)
		{
			double r;
			fuzly >> r;
			params.push_back(r);
		}*/
		stk.addNode(coords);
	}
	fuzly.close();
}

void read_F(Data& stk)
{
	int n;
	ifstream fF(root + "F.txt");
	fF >> n;
	for (int i = 0; i < n; ++i)
	{
		double r;
		fF >> r;
		stk.addF(r);
	}
	fF.close();
}
void read_nodes(Data& stk)
{
	int n, n2, n3;
	ifstream fuzly(root + "nodes.txt");
	fuzly >> n >> n2 >> n3;
	for (int i = 0; i < n; ++i)
	{
		vector<double> coords;
		//vector<double> params;
		for (int i = 0; i < n2; i++)
		{
			double r;
			fuzly >> r;
			coords.push_back(r);
		}
		/*for (int i = 0; i < n3; i++)
		{
			double r;
			fuzly >> r;
			params.push_back(r);
		}*/
		stk.addNode(coords);
	}
	fuzly.close();
}


void read_spline_grid(Data& stk)
{
	int n, n2, n3;
	stk.ws.clear();
	ifstream fuzly(root + "splinegrid.txt");
	fuzly >> n >> n2 >> n3;
	for (int i = 0; i < n; ++i)
	{
		double x;
		fuzly >> x;
		stk.X.push_back(x);
		stk.ws.push_back(1);
	}
	fuzly.close();
}

void read_elems(Data& stk)
{
	int n, n2;
	ifstream felems(root + "elems.txt");
	felems >> n >> n2;
	for (int i = 0; i < n; ++i)
	{
		vector<double> nodes;
		//vector<double> params;
		for (int j = 0; j < n2; j++)
		{
			int th;
			felems >> th;
			nodes.push_back(th);
		}
		stk.addElem(nodes);
	}
	felems.close();
}