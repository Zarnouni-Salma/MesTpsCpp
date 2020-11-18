#pragma once
class point
{
private :
	double axe_x;
	double axe_y;
public:
	point();
	point(double, double);
public :
	static point creationcons(double,double);

	void afficher();
	bool operator==(const point &p);
	double get_x() const;
	double get_y() const;

};

