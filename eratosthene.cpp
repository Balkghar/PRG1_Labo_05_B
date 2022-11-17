//---------------------------------------------------------
// Fichier      : eratosthene.cpp
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

#include <iomanip>
#include <limits>       // numeric_limits<streamsize>
#include <vector>

#include "eratosthene.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;


/**
 * @brief Fonction sortant les nombres premiers à partir d'un vecteur crible
 * @param vCrible Vecteur crible
 * @return Vecteur contenant les nombres premiers
 */
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
vector<int>& creerVNbrPremier(const vector<bool>& vCrible){

    vector<int> vNbrePremiers;

    for (size_t i = 1; i < vCrible.size(); ++i) {
        if (vCrible.at(i))
            // i + 1 pour que le nombre corresponde au nombre premier
            vNbrePremiers.push_back(i + 1);
    }
    return vNbrePremiers;
}
