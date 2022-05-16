#include <iostream>
#include "Header.h"
using namespace std;

BodyMassIndex::BodyMassIndex() {
	weight = 0;
	height = 0;
}

BodyMassIndex::BodyMassIndex(double z,double m) {
	weight = z;
	height = m;
}

BodyMassIndex::~BodyMassIndex() {}

double  BodyMassIndex::calculateBMI(double weight, double height) {
	return(weight / (height*height));
}