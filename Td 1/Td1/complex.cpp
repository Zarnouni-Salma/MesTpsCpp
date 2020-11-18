#include "complex.h"
using namespace std;
#include <iostream>
#include <string>
#include <cmath>
int complex::p = 0;
complex::complex()
{
	this->re = 0.0;
	this->im = 0.0;
	p++;
}

complex::complex(double re, double im)
{
	this->re = re;
	this->im = im;
	p++;
}

complex::complex(const complex& c)
{
	this->re = c.re;
	this->im = c.im;
	p++;
}

void complex::afficher()
{
	/*cout<< "re est :" << complex::re << "," << "im est : " << complex::im;*/
	string ss;
	ss = "re est " + to_string(this->re) + " , " + "im est :" + to_string(this->im);
	cout << ss << endl;
}

double complex::module()
{
	double z;
	z = sqrt(pow(this->re,2)+pow(this->im,2));

	return z;
}

complex complex::conjugue()
{
	complex z;
	z.re = this->re;
	z.im = -this->im;
	return z;
}

complex complex::operator+(const complex &c)
{
	complex x;
	x.re = this->re + c.re;
	x.im = this->im + c.im;
	
	return x;


}

complex complex::operator+(double i )
{
	complex x;
	x.re = this->re + i;
	x.im = this->im ;



	return x;
}

complex complex::operator*(const complex& c)
{

	complex x;
	x.re = (this->re * c.re)- (this->im * c.im);
	x.im = this->re * c.im + this->im * c.re;
	return x;
}

bool complex::operator==(const complex &c)
{
	if (this->re == c.re && this->im == c.im)
		return true;
	else
		return false;
}

int complex::nbinstance()
{
	int nb = complex::p;
	return nb;
}
