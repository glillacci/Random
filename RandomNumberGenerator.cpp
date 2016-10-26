/*
 * RandomeNumberGenerator.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: lillaccg
 */

#include "RandomNumberGenerator.h"

namespace std {

RandomNumberGenerator::RandomNumberGenerator() {
	srand (time (NULL));
}

RandomNumberGenerator::~RandomNumberGenerator() {
	// TODO Auto-generated destructor stub
}

double RandomNumberGenerator::runif()
{
	return ((double) rand())/((double) RAND_MAX);
}

double RandomNumberGenerator::runif(double a, double b)
{
	return (b-a)*runif()+a;
}

} /* namespace std */
