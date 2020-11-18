#pragma once
class complex
{
	/*les attributs*/
private : 
	double  re;
	double im;
	static int p;
public :
	/*les constructeurs*/
	/*static int p;*/
	complex();
	complex(double, double);
	complex(const complex &c);
	void afficher();
	double module();
	complex conjugue();
	complex operator+(const complex &c);
	complex operator+(double);
	complex operator*(const complex& c);
	bool operator==(const complex& c);
	static int nbinstance();
	





};

