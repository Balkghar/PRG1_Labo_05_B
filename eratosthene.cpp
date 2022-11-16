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

void afficherVectorBoolChar(const char VRAI, const char FAUX, const vector<bool>& vect){
   int j = 1;
   for(bool i : vect){
      if( i ){
         cout << setw(2) << VRAI;
      } else {
         cout << setw(2) << FAUX;
      }
      if(j%10==0){
         j=0;
         cout << endl;
      }
      j++;
   }
   cout << endl;
}