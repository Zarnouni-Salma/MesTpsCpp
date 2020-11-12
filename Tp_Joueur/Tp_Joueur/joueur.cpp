#include "stdafx.h"
#include "joueur.h"
using namespace std;
int joueur::p = 0;
//Constructeurs 
joueur::joueur()
{
	joueur::p++;
}

joueur::joueur(int imatricule, char * inom, char * iprenom, char * iadresse, char * inationalité, char * itel)
{
	this->matricule = imatricule;
	this->nom = inom;
	this->prenom = iprenom;
	this->adresse = iadresse;
	this->nationalité = inationalité;
	this->tel = itel;
	joueur::p++;
}

joueur::joueur(const joueur &j)
{
	this->matricule = j.matricule;
	this->nom = j.nom;
	this->prenom = j.prenom;
	this->adresse = j.adresse;
	this->nationalité = j.nationalité;
	this->tel = j.tel;
	joueur::p++;
}
//Compteur  
int joueur::compteur()
{
	return 	joueur::p;
}
//Afficher 
void joueur::Afficher()
{
	cout << "le matricule est : " << this->matricule << " ; " << " le nom est :" << this->nom << "; " << " le prénom est : " << this->prenom << " ;" << " la nationalité est : " << this->nationalité << endl;
}
//destructeur
joueur::~joueur()
{
	delete this;
}
//Methode (constrcucteur privé)
joueur joueur::CreationduJoueur(int imatricule, char * inom, char * iprenom)
{
	joueur *j = new joueur(imatricule, inom, iprenom);
	return *j;
}
//Un constructeur privé avec 3 arguments 
joueur::joueur(int imatricule, char * inom, char * iprenom)
{
	this->matricule = imatricule;
	this->nom = inom;
	this->prenom = iprenom;
}
