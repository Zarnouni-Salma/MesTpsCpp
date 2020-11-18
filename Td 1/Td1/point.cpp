#include "point.h"
#include <iostream>
using namespace std;
point::point()
{
	this->axe_x = 0.0;
	this->axe_y = 0.0;
}

point::point(double x, double y)
{
	this->axe_x = x;
	this->axe_y = y;
}

point point::creationcons(double x, double y)
{
	point p(x, y);
	return p;
}

void point::afficher()
{
	cout << " point est : (" << this->axe_x << " , "  << this->axe_y <<")"<< endl;
	
}

bool point::operator==(const point &p)
{
	
	return this->axe_x == p.axe_x && this->axe_y == p.axe_y;
}
double point::get_x() const
{
	return this->axe_x;;
}

double point::get_y() const
{
	return this->axe_y;
}