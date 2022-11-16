//---------------------------------------------------------
// Fichier      : main.cpp
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

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <iomanip>
#include <limits>       // numeric_limits<streamsize>
#include <vector>


#include "eratosthene.hpp"
#include "annexe.hpp"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

int main() {

   const int MIN_INT = 2;
   const int MAX_INT = 100;
   const string MESSAGE_SAISIE = "Veullez entrez un nombre entrez " + to_string(MIN_INT) + " et " + to_string(MAX_INT) + " : ";
   const string MESSAGE_SAISIE_ERREUR = "Une erreur est intervenue, veuillez resaisir le nombre !";

   const int COLONNE = 10;
   const vector<char> CHAR_A_AFFICHER = {'O', 'X'};


   int saisie;



   saisie = saisirIntervaleInt(MIN_INT,MAX_INT, MESSAGE_SAISIE, MESSAGE_SAISIE_ERREUR);

   const vector<bool> VCRIBLE(saisie, true);
   
   afficherVectorCondition(COLONNE, VCRIBLE, CHAR_A_AFFICHER);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}