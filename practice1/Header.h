#ifndef  BodyMassIndex_H
#define  BodyMassIndex_H

class  BodyMassIndex
{
private:
	double weight;
	double height;

public:
	BodyMassIndex();
	BodyMassIndex(double,double);
	~BodyMassIndex();
	double calculateBMI(double,double);
};
#endif
