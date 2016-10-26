/*
 * RandomeNumberGenerator.h
 *
 *  Created on: Jan 9, 2015
 *      Author: lillaccg
 */

#ifndef RANDOMNUMBERGENERATOR_H_
#define RANDOMNUMBERGENERATOR_H_

#include <iostream>

namespace std {

class RandomNumberGenerator {

public:
	RandomNumberGenerator();
	virtual ~RandomNumberGenerator();

	double runif ();
	double runif (double a, double b);
};

} /* namespace std */

#endif /* RANDOMNUMBERGENERATOR_H_ */
