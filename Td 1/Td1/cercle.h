#pragma once
#include"point.h"
class cercle
{

private :
	double rayon;
	point centre;
	
public:
	cercle();
	cercle(double, point);
	void afficher();
	void modification(double);
	double CalSurface();
	double CalPerimetre();
	bool operator==(const cercle &c);
	bool verification(point p);
};

