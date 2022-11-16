//---------------------------------------------------------
// Fichier      : annexe.cpp
// Auteur       : Hugo Germano
// Date         : 15.11.2022

// But          :  fonction annexe servant à la saisie et l'affichage utilisateur
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

// Nom         saisirIntervaleInt
// But         demande la saisie à l'utilisateur jusqu'à qu'elle soit correct et la retourne
//             
// Param       minInt           : le maximum autorisé
// Param       maxInt           : le minimum autorisé
// Param       message           : message d'invitation de saisie
// Param       message_erreur    : message d'erreur de saisie
// Exception   n/a
int saisirIntervaleInt(int minInt, int maxInt, const string& message, const string& message_erreur){
   int saisie;
   bool erreur;

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
// Nom         afficherVectorCondition
// But         affiche un vecteur au sein d'un axe x/y selon les conditions donnés par l'utilisateur
//             
// Param       colonne  : le nombre de colonne
// Param       choix    : tableau de bool, va décidier quel caractères à afficher
// Param       caract   : le vecteur de caractères à afficher
// Exception   n/a
void afficherVectorCondition( int colonne, const vector<bool>& choix, const vector<char>& caract){

   for( int i = 0 ; i < choix.size() ; ++i ) {
      cout << setw(2) << caract.at(choix.at(i));
      //si ça arrive à la fin de la colonne, retour à la ligne
      if( ( i+1 ) % colonne ==0 ) {
         cout << endl;
      }
   }
   cout << endl;
   
}