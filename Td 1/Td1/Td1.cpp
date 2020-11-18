// Td1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "complex.h"
#include"point.h"
#include "cercle.h"
#include <string>
using namespace std;

int main()
{
    /*---Complex*/
    complex c(5.0, 9.0);
    complex c2(c);
    complex c3(0.0, 6.0);
    c.afficher();
    c2.afficher();

   double res= c.module();
   cout << res;

   /*complex conj = c.conjugue();
   conj.afficher();
   complex test = c.operator+(c2);
   test.afficher();*/
   complex test = c + c2;
   test.afficher();


   /*complex test2 = c.operator+(5.1);*/
   complex test2 = c + 5.1;
   test2.afficher();

   //complex test3 = c.operator*(c2);
   complex test3 = c * c2;
   test3.afficher();

   
   bool res2 = c.operator==(c3);
   cout <<"resultat est : " << res2;




   /*cout << "le nombre d'instace est :" << complex::p;*/
   cout << "le nombre 'instance est :" << complex::nbinstance()<<endl;

   /*---Cerle*/
   cout << "debut de cerle "<<endl;
   point p1= point::creationcons(7.4, 1.1);
   point p2(p1);
   point p3=point::creationcons(2.2, 1.1);
   cercle Cercle1  (5.5, p2);
 /*  cercle cercle1(5.5, p2);*/
   cercle cercle2(Cercle1);
   cercle cercle3 (5.2, p3);
   Cercle1.afficher();
   bool rr = Cercle1.operator==(cercle3);
   cout << "resultat est : " << rr << endl;
   cout << "surface du cercle est : " << cercle3.CalSurface() << endl;
   cout << "perimetre du cercle est : " << cercle3.CalPerimetre() << endl;
    
   cout <<  cercle3.verification(p1) << endl;



}

