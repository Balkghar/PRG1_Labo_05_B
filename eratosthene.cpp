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
 * @brief Fonction créant un vecteur crible à l'aide d'un nbre de valeurs donné
 * @param nbreValeurs Nbre de valeurs que contiendra le vecteur crible
 * @return Vecteur crible
 */
vector<bool> initialiserCrible(int nbreValeurs){
    vector<bool> vCrible(nbreValeurs, true);

    // Dernière valeur à false car elle ne sera pas testée
    vCrible.back() = false;

    return vCrible;
}


/**
 * @brief Fonction sortant les nombres premiers à partir d'un vecteur crible
 * @param vCrible Vecteur crible
 * @return Vecteur contenant les nombres premiers
 */
vector<int> sortirNbrePremiers(vector<bool>& vCrible){
    
    vector<int> vNbrePremiers;

    // Nous partons du principe que 0 et 1 ne sont pas premiers donc nous débutons la boucle à partir de la position 2
    // du vecteur.
    for (int nbreTest = 2; nbreTest < vCrible.size(); ++nbreTest) {

        // Test de nbreTest à partir d'une valeur au-dessus puis passage à false de tous les nombres non premiers.
        for (int j = nbreTest + 1; j < vCrible.size(); ++j) {
            if ( !(j % nbreTest) )
                vCrible.at(j - 1) = false;
        }
    }


    for (int i = 1; i < vCrible.size(); ++i) {
        if (vCrible.at(i))

            // i + 1 pour que le nombre corresponde au nombre premier
            vNbrePremiers.push_back(i + 1);
    }

    return vNbrePremiers;
}

