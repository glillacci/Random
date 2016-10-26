/*
 * Histogram.h
 *
 *  Created on: Jan 9, 2015
 *      Author: lillaccg
 */

#ifndef HISTOGRAM_H_
#define HISTOGRAM_H_

#include <vector>

namespace std {

class Histogram {
	int nbins;



public:
	vector<int> counts;
	vector<double> splits;
	Histogram(int n, vector<double> values);
	virtual ~Histogram();
};

} /* namespace std */

#endif /* HISTOGRAM_H_ */
