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
		vector<double> params;
		for (int i = 0; i < n2; i++)
		{
			double r;
			fuzly >> r;
			coords.push_back(r);
		}
		for (int i = 0; i < n3; i++)
		{
			double r;
			fuzly >> r;
			params.push_back(r);
		}
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
