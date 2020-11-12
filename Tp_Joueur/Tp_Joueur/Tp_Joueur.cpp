// Tp_Joueur.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "joueur.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	joueur *j1 = new joueur(1152, "Zerno", "Salma", "casa", "marocaine", "1234567890");
	joueur j2(115, "tazi", "houda", "fes", "marocaine", "1234567890");
	joueur j3(*j1);
	joueur j4(j2);
	j1->Afficher();
	j3.Afficher();
	j4.Afficher();
	joueur M4 = joueur::CreationduJoueur(1245, "Zarnouni", "Salma");
	//M4.Afficher();
	cout << " j ai " << joueur::compteur() << " objets " << endl;
	getchar();
	return 0;
}

