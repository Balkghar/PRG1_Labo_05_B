//---------------------------------------------------------
// Fichier      : annexe.cpp
// Auteur       : Hugo Germano / Stefano Bianchet
// Date         : 15.11.2022

// But          : fonction annexe servant à la saisie et l'affichage utilisateur
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
#include "annexe.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

int saisirIntervaleInt(int minInt, int maxInt, const string& message, const string& message_erreur){

   int saisie;
   bool erreur;

   //continue jusque que le condition soit remplies
   do {

      // message et saisie
      cout << message;
      cin >> saisie;

      erreur = cin.fail() or saisie < minInt or saisie > maxInt;

      if ( erreur ) {

         cout << message_erreur << endl;
         cin.clear();

      }

      // vider buffer
      VIDER_BUFFER;

   } while(erreur);

   return saisie;

}

void afficherVectorCondition(const vector<bool>& choix, const vector<char>& caract, int colonne, int espace){

   for( size_t i = 0 ; i < choix.size() ; ++i ) {

      cout << setw(espace) << caract.at(choix.at(i));

      //si ça arrive à la fin de la colonne, retour à la ligne
      if( ( i+1 ) % colonne == 0 ) {

         cout << endl;

      }

   }

   cout << endl;

}

void afficherValeurVecteurInt(const vector<int>& vect, int colonne, int espace){

   for( size_t i = 0 ; i < vect.size() ; ++i ) {

      cout << setw(espace) << vect.at(i);

      //si ça arrive à la fin de la colonne, retour à la ligne
      if( ( i + 1 ) % colonne == 0 ) {

         cout << endl;

      }
   }

   cout << endl;

}