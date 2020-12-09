#pragma once
class Vecteur
{

private:


	float vect[3];
public:
	Vecteur();
	Vecteur(float, float, float);
	Vecteur(const Vecteur&);
	Vecteur& operator=(const Vecteur&);
	bool operator==(const Vecteur&) const;
	Vecteur& operator+(const Vecteur&);
	Vecteur& operator-(const Vecteur&);
	float multiplication(const Vecteur&)const;
	Vecteur& operator*(const Vecteur&);
	Vecteur& operator/(float);
	void afficher() const;








};

