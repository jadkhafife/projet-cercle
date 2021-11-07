#define _USE_MATH_DEFINES
#include "cercle.h"
#include <cmath>
#include "Math.h"

bool Cercle::comparer(Cercle c1)
{
    if (this->r == c1.r)
        return true;
    else
         return false;
}

bool Cercle::appartenance(Point p)
{
    if(this->r >= this->C.distance(p))
        return true
    else
        return false;
}

double Cercle::surface()
{
    double S;
    S = pow(this->r, 2)* M_PI;
    return S;
}

double Cercle::perimetre()
{
    double p;
    p = 2 * M_PI * this->r;
    return p;
}

void Cercle::translation(double nvx, double nvy)
{
    this->C = Point::Point(nvx, nvy);
}

void Cercle::changerR(double nvR)
{
    if(nvR>0){
        this->r = nvR;
    }
}
