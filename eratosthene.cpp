//---------------------------------------------------------
// Fichier      : eratosthene.cpp
// Auteur       : Hugo Germano / Stefano Bianchet
// Date         : 15.11.2022

// But          : fonction d'identification des nombres premiers avec la méthode du crible d’Ératosthène
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <iomanip>
#include <vector>

#include "eratosthene.hpp"

using namespace std;


void sortirNbrePremiers(vector<bool>& vCrible){
    
    //car 1 non premier
    vCrible.front() = false;

    // Nous partons du principe que 1 n'est pas premier donc nous débutons la boucle à partir de la position 2
    // du vecteur.
    for (size_t nbreTest = 2; nbreTest < vCrible.size(); ++nbreTest) {

        // Test de nbreTest à partir d'une valeur au-dessus puis passage à false de tous les nombres non premiers.
        for (size_t j = vCrible.size(); j > nbreTest; --j) {
            if ( !(j % nbreTest) )
                vCrible.at(j - 1) = false;
        }
    }
}

void creerVNbrePremier(const vector<bool>& vCrible, vector<int>& vNbrePremiers){

    for (size_t i = 1; i < vCrible.size(); ++i) {
        if ( vCrible.at(i) )
            // i + 1 pour que le nombre corresponde au nombre premier
            vNbrePremiers.push_back((int)i + 1);

    }

}