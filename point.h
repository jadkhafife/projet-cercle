#pragma once
class Point {
private:
	double x;
	double y;
public:
	void afficher();
	Point(double x, double y);
	double distance(Point p);
	Point same();
};