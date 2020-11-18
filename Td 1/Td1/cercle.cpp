#include "cercle.h"
#include<iostream>
#include<math.h>
using namespace std;
cercle::cercle()
{
	this->rayon = 0.0;
	this->centre = point::creationcons(0.0,0.0);
}

cercle::cercle(double r , point c)
{
	this->rayon = r;
	this ->centre = c;
}



void cercle::afficher()
{
	point p = point::creationcons(0.0, 0.0);
	cout << "le rayon est :" << this->rayon << ","; 
	centre.afficher();
}

void cercle::modification(double m)
{
	this->rayon = m;
}

double cercle::CalSurface()
{
	return this->rayon* this->rayon*3.14;
}

double cercle::CalPerimetre()
{
	return  3.14 * 2 * this->rayon;
}

bool cercle::operator==(const cercle & c)
{
return this->rayon == c.rayon && this->centre == c.centre;
}

bool cercle::verification(point p)
{
	//(x - a)² + (y - b)² = R²
	if (pow(this->centre.get_x() - p.get_x(), 2) + pow(this->centre.get_y() - p.get_y(), 2) == pow(this->rayon, 2))
		return true;
	return false;
}
