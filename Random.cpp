/*
 * Random.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: lillaccg
 */

#include <iostream>
#include <vector>
#include "RandomNumberGenerator.h"
#include "Histogram.h"

using namespace std;

int main ()
{
	RandomNumberGenerator rng;
	vector<double> vals (10000);

	for (int i = 0; i < vals.size(); i++)
	{
		vals[i] = rng.runif();
	}

	Histogram h (10, vals);
	for (int i = 0; i < h.splits.size(); i++)
	{
		cout << h.splits[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < h.counts.size(); i++)
	{
		cout << h.counts[i] << endl;
	}
}
