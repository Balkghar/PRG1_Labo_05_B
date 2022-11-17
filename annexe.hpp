//---------------------------------------------------------
// Fichier      : annexe.hpp
// Auteur       : Hugo Germano
// Date         : 15.11.2022

// But          : header pour annexe.cpp
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

#ifndef annexe

   #define annexe
   int saisirIntervaleInt(int minInt, int maxInt, const string& message, const string& message_erreur);
   void afficherVectorCondition(const vector<bool>& choix, const vector<char>& caract, int colonne, int espace);
   void afficherValeurVecteurInt(const vector<int>& vect, int colonne, int espace);

#endif