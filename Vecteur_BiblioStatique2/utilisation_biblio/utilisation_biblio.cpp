// utilisation_biblio.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Vecteur.h"
#include"Matrice.h"

using namespace std;

int main()
{
	          /* <<               vecteur           >>*/
   /* l'utilisation d'un biblio statique */
   /* test d'affchage*/
   
    Vecteur v1(1.0, 2.0, 3.0);
    v1.afficher();
    cout << "<<---------->>"<<endl;

   /* test constructeur de recopie*/
    Vecteur v2(v1);
    v2.afficher();
    cout << "<<---------->>"<<endl;

   /* l'addition*/
    Vecteur v3(5.0, 6.2, 8.0);
    v3.operator+(v2);
    v3.afficher();
    cout << "<<---------->>"<< endl;

    /* soustraction*/
    v3.operator-(v1);
    v3.afficher();
    cout << "<<---------->>"<< endl;

    /* égalité*/
    v1.operator=(v3);
    v1.afficher();
    cout << "<<---------->>" << endl;

    /* multiplication */
    float x = v1.multiplication(v2);
    cout << "resultat du multiplication (vecteur 1 avec vecteur 2 est ) :" << x << endl;
    cout << "<<---------->>" << endl;
    
    /* operator (*) */
    Vecteur m = v1.operator*(v2);
    m.afficher();
    cout << "<<---------->>" << endl;

    /* division */
    v3.operator/(2);
    v3.afficher();
    cout << "<<---------->>" << endl;

	
	                /*<< Matrice >>*/
    /*initialiser les matrices*/
	Matrice m1(2, 2);
	
	Matrice m2(2, 2);
	/*charger les matrices*/
	cout << " le chargement :" << endl;
	m1.charger();
	m2.charger();
	cout << " -------------------"<<endl;
	/*Afficher les matrices*/
	cout << " Affichage est :" << endl;
	m1.afficher();
	m2.afficher();
	
	/*l'addition des deux matrices*/
	cout << " l'addition est :" << endl;
	Matrice m3 = m1.operator+(m2);
	m3.afficher();
	cout << " -------------------" << endl;

	/*multiplication des deux matrices*/
	cout << " la multiplication est :" << endl;
	Matrice m4 = m1.operator*(m2);

	m4.afficher();
	cout << " -------------------" << endl;
	/*chargement du fichier*/
	m1.charger_fichi();
	cout << "bien chargé";
	cout << " -------------------" << endl;





}


