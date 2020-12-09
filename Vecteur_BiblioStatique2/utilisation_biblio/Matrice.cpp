#include "Matrice.h"
#include <assert.h>
#include <iostream>
#include<fstream>
using namespace std;
Matrice::Matrice(int ligne , int col )
{
	this->ligne = ligne;
	this->col = col;
	this->matrice =new float* [this->ligne];
	for (int i = 0; i < this->ligne; i++)
	{
		this->matrice[i] = new float[this->col];
	}

	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			this->matrice[i][j] = 0.0;
		}

	}
}

Matrice::~Matrice()
{
	for (int i = 0;  i< this->ligne; i++)
	{
		delete[]this->matrice[i];
		this->matrice[i] = 0;
	}
	delete[]this->matrice;
	this->matrice = 0;
}

Matrice& Matrice::operator+(const Matrice& mat) const
{
	Matrice* r = new Matrice(this->ligne, this->col);
	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			r->matrice[i][j] = this->matrice[i][j] + mat.matrice[i][j];
		}

	}
	return *r;

}

Matrice& Matrice::operator*(const Matrice& mat ) const
{
	assert(this->ligne == mat.ligne);
	Matrice* r = new Matrice(this->ligne, mat.col);

	for (int i = 0; i < this->ligne; i++)
	{

		for (int j = 0; j < this->col; j++)
		{
			float x = 0;
			for (int k = 0; k < mat.col; k++)
			{
				x += this->matrice[i][j] * mat.matrice[i][j];
			}
			r->matrice[i][j] = x;
		}
	}
	return *r;
		
}

void Matrice::charger()
{
	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> this->matrice[i][j];
		}
	}
}

void Matrice::afficher() const
{
	for (int i = 0; i < this->ligne; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << this->matrice[i][j] <<" "<< endl;
		}
	}
}

void Matrice::charger_fichi() const
{

	ofstream Fichier1("monPremier_Fichier",ios::app);
	if (Fichier1.good())
	{
		for (int i = 0; i <this->ligne; i++)
		{
			for (int j = 0; j < this->col; j++)
			{
				Fichier1 << this->matrice[i][j] << endl;
			}

		}
		cout << "bien chargé";
	}
	else
	{
		cerr << "Erreur";
		exit(1);
	}
	Fichier1.close();
}

