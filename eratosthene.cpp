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


#include <iostream>     // cout et cin
#include <iomanip>
#include <vector>

#include "eratosthene.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

vector<bool> initialiserCrible(int nbreValeurs){
    vector<bool> vCrible(nbreValeurs, true);

    return vCrible;
}


vector<int> sortirNbrePremiers(vector<bool>& vCrible){
    
    vector<int> vNbrePremiers;

    for (int i = 1; i < vCrible.size(); ++i) {

        int nbreTest = i + 1;

        for (int j = nbreTest + 1; j < vCrible.size(); ++j) {
            if (!(j % nbreTest))
                vCrible.at(j - 1) = false;
        }
    }

    for (int i = 0; i < vCrible.size(); ++i) {
        if (vCrible.at(i))
            vNbrePremiers.push_back(i + 1);
    }

    return vNbrePremiers;
}
