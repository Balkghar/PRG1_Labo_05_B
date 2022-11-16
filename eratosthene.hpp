//---------------------------------------------------------
// Fichier      : eratosthene.hpp
// Auteur       : Hugo Germano
// Date         : 15.11.2022

// But          : 
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


    vector<bool> initialiserCrible(int nbreValeurs);
    vector<int> sortirNbrePremiers(vector<bool>& vCrible);
   


#endif