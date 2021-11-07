#include "point.h"
#include "math.h"
using namespace std;

void Point::afficher()
{
	cout << "X= " << this->x << " Y = " << this->y << endl;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point::distance(Point p)
{
	return sqrt(pow(P.x - this->x,2)+ pow(P.y - this->y, 2));
}

Point Point::same()
{
	Point p(this->x, this->y);
	return p;
}
