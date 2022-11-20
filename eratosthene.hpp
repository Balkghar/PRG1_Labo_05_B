//---------------------------------------------------------
// Fichier      : eratosthene.hpp
// Auteur       : Hugo Germano / Stefano Bianchet
// Date         : 15.11.2022

// But          : header pour eratosthene.cpp
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------
#include <iostream>         //string
#include <vector>

using namespace std;

#ifndef eratosthene

   #define eratosthene
    /**
     * @brief Fonction sortant les nombres premiers à partir d'un vecteur crible
     * @param vCrible Vecteur crible
     * @return Vecteur contenant les nombres premiers
     */
    void sortirNbrePremiers(vector<bool>& vCrible);
    /**
     * @brief Fonction ajoutant au vNbrePremiers les nombres premiers
     * @param vCrible Vecteur criblé
     * @param vNbrePremiers Vecteur qui contiendra les nombres premiers
     */
    void creerVNbrePremier(const vector<bool>& vCrible, vector<int>& vNbrePremiers);

#endif