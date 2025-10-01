// Point2d.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Point.h"
#include <iostream>
using namespace std;


int main()
{
        Point p1(2.0, 3.0); 
        Point p2(5.5, 7.0); 

        cout << "Point p1:";
        p1.afficher();

        cout << "Point p2:";
        p2.afficher();

        float d = p1.distance(p2); 
        cout << "Distance entre p1 et p2 = " << d << endl;

        return 0;

}

