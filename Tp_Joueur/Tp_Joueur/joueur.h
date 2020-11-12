#include <iostream>
class joueur
{
	//Les attributs 
private:
	int matricule;
	char* nom;
	char* prenom;
	char* adresse;
	char* nationalité;
	char* tel;
	//Compteur 
	static int p;
public:
	//Les Constructeurs 
	joueur();
	joueur(int, char*, char*, char*, char*, char*);
	joueur(const joueur &j);
private:
	joueur(int, char*, char*);
public:
	//Les Méthodes 
	static int compteur();
	void Afficher();
	static joueur CreationduJoueur(int, char*, char*);
	//destructeur
	~joueur();


};