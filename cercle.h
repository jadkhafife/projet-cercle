#pragma once
#include "point.h"

class Cercle {
private:
	Point C;
	double r;
public:
	bool comparer(Cercle c1);
	bool appartenance(Point p);
	double surface();
	double perimetre();
	void translation(double nvx,double nvy);
	void changerR(double nvR);
};