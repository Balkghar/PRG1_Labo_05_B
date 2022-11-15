//---------------------------------------------------------
// Fichier      : main.cpp
// Auteur       : Hugo Germano / Stefano Bianchet
// Date         : 15.11.2022

// But          :  
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <iomanip>
#include <limits>       // numeric_limits<streamsize>
#include <vector>

#include "annexe.hpp"
#include "eratosthene.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

int main() {

    int nbreValeurs;
    vector<int> vNbrePremiers;
    vector<bool> vCrible;

    cout << "Entrez un nombre de valeurs [2-200] :";
    cin  >> nbreValeurs;
    VIDER_BUFFER;

    vCrible = initialiserCrible(nbreValeurs);

    vNbrePremiers = sortirNbrePremiers(vCrible);

    for (int i : vNbrePremiers) {
        cout << i << " ";
    }

    cout << endl;
   
    cout << "Entrez ENTER pour quitter.";
    VIDER_BUFFER;
    return EXIT_SUCCESS;                                  //retourne un code de succès
}