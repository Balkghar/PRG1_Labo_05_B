//---------------------------------------------------------
// Fichier      : annexe.cpp
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

#include "annexe.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

// Nom         saisie
// But         demande la saisie à l'utilisateur jusqu'à qu'elle soit correct et la retourne
//             
// Param       MIN_INT           : le maximum autorisé
// Param       MAX_INT           : le minimum autorisé
// Param       MESSAGE           : message d'invitation de saisie
// Param       MESSAGE_ERREUR    : message d'erreur de saisie
// Exception   n/a
int saisirIntervaleInt(const int MIN_INT, const int MAX_INT, const string& MESSAGE, const string& MESSAGE_ERREUR){
   int saisie;
   bool erreur;

   do {
      // message et saisie
      cout << MESSAGE;
      cin >> saisie;

      // saisie et vérification en même temps
      // erreur = not(cin >> saisie) or saisie < MIN or saisie > MAX;

      // vérification
      erreur = cin.fail() or saisie < MIN_INT or saisie > MAX_INT;
      if (erreur) {
         cout << MESSAGE_ERREUR << endl;
         cin.clear();
      }

      // vider buffer
      VIDER_BUFFER;

   } while(erreur);
   return saisie;
}