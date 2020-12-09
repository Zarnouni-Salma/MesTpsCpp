#include "pch.h"
#include "Vecteur.h"
#include <assert.h>
#include<iostream>
using namespace std;

Vecteur::Vecteur()
{
    this->vect[0] = 0.0;
    this->vect[1] = 0.0;
    this->vect[2] = 0.0;
}

Vecteur::Vecteur(float x, float y, float z)
{
    this->vect[0] = x;
    this->vect[1] = y;
    this->vect[2] = z;
}

Vecteur::Vecteur(const Vecteur& v)
{
    this->vect[0] = v.vect[0];
    this->vect[1] = v.vect[1];
    this->vect[2] = v.vect[2];
}

Vecteur& Vecteur::operator=(const Vecteur& v)
{
    assert(this != &v);
    this->vect[0] = v.vect[0];
    this->vect[1] = v.vect[1];
    this->vect[2] = v.vect[2];
    return *this;
}

bool Vecteur::operator==(const Vecteur& v) const
{
    bool r = true;
    for (int i = 0; i < 3; i++)
    {
        r = r && (this->vect[i] == v.vect[i]);

    }
    return r;
    /*  return this->vect[0] == v.vect[0] && this->vect[1] == v.vect[1] && this->vect[2] == v.vect[2];*/
}

Vecteur& Vecteur::operator+(const Vecteur& v)
{
    /* this->vect[0] += v.vect[0];
     this->vect[1] += v.vect[1];
     this->vect[2] += v.vect[2];*/
    for (int i = 0; i < 3; i++)
    {
        this->vect[i] += v.vect[i];

    }
    return *this;
}

Vecteur& Vecteur::operator-(const Vecteur& v)
{

    for (int i = 0; i < 3; i++)
    {
        this->vect[i] -= v.vect[i];

    }
    return *this;
}

float  Vecteur::multiplication(const Vecteur& v ) const
{
    float r;
      r = this->vect[0] * v.vect[0] + this->vect[1] * v.vect[1] + this->vect[2] * v.vect[2];
      return r;
    
   
}

Vecteur& Vecteur::operator*(const Vecteur& v)
{
    Vecteur vv;
    vv.vect[0] = this->vect[1] * v.vect[2] - this->vect[2] * v.vect[1];
    vv.vect[1] = this->vect[2] * v.vect[0] - this->vect[0] * v.vect[2];
    vv.vect[2] = this->vect[0] * v.vect[1] - this->vect[1] * v.vect[0];
    return vv;
}

Vecteur& Vecteur::operator/(float s)
{
    assert(s != 0.0);
    this->vect[0] = vect[0] / s;
    this->vect[1] = vect[0] / s;
    this->vect[2] = vect[0] / s;
    return *this;
}

void Vecteur::afficher() const
{
    for (int i = 0; i < 3; i++)
    {
        cout << "element n " << " " << i+1 << ":" << " " << this->vect[i]<<endl;

    }


}