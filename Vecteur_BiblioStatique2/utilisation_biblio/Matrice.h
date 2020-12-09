#pragma once
class Matrice
{
private:
	float** matrice;
	int col;
	int ligne;
public:
	Matrice(int, int);
	~Matrice();
	Matrice& operator+(const Matrice&)const;
	Matrice& operator*(const Matrice&)const;
	void charger();
	void afficher() const;
	void charger_fichi() const;







};

