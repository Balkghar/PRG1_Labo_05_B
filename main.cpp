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
   const int ESPACE  = 3;
   const vector<char> CHAR_A_AFFICHER = {'O', 'X'};

   int saisie;
   vector<int> vNbrePremiers;
   vector<bool> vCrible;

   saisie = saisirIntervaleInt(MIN_INT,MAX_INT, MESSAGE_SAISIE, MESSAGE_SAISIE_ERREUR);

   vCrible = initialiserCrible(saisie);

   vNbrePremiers = sortirNbrePremiers(vCrible);
  
   cout << "Criblage du tableau : " << endl;
   afficherVectorCondition(vCrible, CHAR_A_AFFICHER, COLONNE, ESPACE);
   cout << "Liste des nombres premiers : " << endl;
   afficherValeurVecteurInt(vNbrePremiers, COLONNE, ESPACE);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
   
}