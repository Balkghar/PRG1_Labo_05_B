//---------------------------------------------------------
// Fichier      : eratosthene.cpp
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

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <iomanip>
#include <limits>       // numeric_limits<streamsize>
#include <vector>

#include "eratosthene.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;


void afficherVector(const vector<bool>& vecteur, const int COLONNE){
   const int ESPACE = 2;
   int j = 1;
   for(bool i : vecteur){
      if( i ){
         cout << setw(ESPACE) << "X";
      } else {
         cout << setw(ESPACE) << "O";
      }
      if(i%COLONNE == 0){
         j = 1;
      }
      else {
         j++;
      }
   }
}