#include <iostream>
#include "Header.h"
using namespace std;
 
void main() {
	double height;
	double weight;
	double bmi;

	BodyMassIndex zahir;

	cout << "enter weight in kg : ";
	cin >> weight;
	cout << "enter height in m : ";
	cin >> height;

	bmi = zahir.calculateBMI(weight,height);

	cout << "\nYour bmi is " << bmi;
}
