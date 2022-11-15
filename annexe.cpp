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
// Param       maxInt  le maximum autorisé
// Param       minInt  le minimum autorisé
// Param       message message d'invitation de saisie
// Exception   n/a
int saisirIntervaleInt(const int MININT, const int MAXINT, const string& MESSAGE, const string& MESSAGE_ERREUR){
   int saisie;
   bool erreur;

   do {
      // message et saisie
      cout << MESSAGE;
      cin >> saisie;

      // saisie et vérification en même temps
      // erreur = not(cin >> saisie) or saisie < MIN or saisie > MAX;

      // vérification
      erreur = cin.fail() or saisie < MININT or saisie > MAXINT;
      if (erreur) {
         cout << MESSAGE_ERREUR << endl;
         cin.clear();
      }

      // vider buffer
      VIDER_BUFFER;

   } while(erreur);
   return saisie;
}

// Nom         saisie
// But         demande de saisie pour l'utilisateur jusqu'à qu'elle soit correct, retourne un booléun selon l'entrée de l'utilisateur
//             
// Param       oui  le char oui
// Param       non  le char non
// Param       message  message d'invitation de saisie
// Exception   n/a
bool continuer(char oui, char non, const string& message){
      char continuer;
      do{
            cout <<   message;
            cin  >> continuer;
            VIDER_BUFFER;
      }while(continuer != oui and continuer != non);

   if(continuer == oui){return true;}else{return false;}
}