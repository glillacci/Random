/*
 * Histogram.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: lillaccg
 */

#include "Histogram.h"

namespace std {

Histogram::Histogram(int n, vector<double> values) {
	nbins = n;
	counts.assign (nbins, 0.0);
	splits.assign (nbins+1, 0.0);

	// Find minimum and maximum values
	double min = 0, max = 0;
	for (int i = 0; i < values.size(); i++)
	{
		if (values[i] > max)
		{
			max = values[i];
		}
		if (values[i] < min)
		{
			min = values[i];
		}
	}

	// Find the split points
	double w = (max-min)/((double) n);
	for (int i = 0; i < splits.size(); i++)
	{
		splits[i] = min + (i)*w;
	}

	// Find the counts
	for (int i = 0; i < values.size(); i++)
	{
		// Find the largest split point <= current value
		int ind = 0;
		while (values[i] > splits[ind])
		{
			ind++;
		}
		// Increase count on appropriate bin
		counts[ind-1]++;
	}
}

Histogram::~Histogram() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
