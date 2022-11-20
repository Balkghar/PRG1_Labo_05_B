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
   /**
    * @brief demande la saisie à l'utilisateur jusqu'à qu'elle soit correct et la retourne
    * @param minInt le maximum autorisé
    * @param maxInt le minimum autorisé
    * @param message message d'invitation de saisie
    * @param message_erreur message d'erreur de saisie
    * @return la saisie de l'utilisateur
    */
   int saisirIntervaleInt(int minInt, int maxInt, const string& message, const string& message_erreur);
   /**
    * @brief affiche un vecteur au sein d'un axe x/y selon les conditions donnés par l'utilisateur
    * @param choix vecteur de bool qui va indiquer quel caractère à afficher
    * @param caract le vecteur de caractères à afficher
    * @param colonne le nombre de colonne
    * @param espace l'espace entre les caractères
    */
   void afficherVectorCondition(const vector<bool>& choix, const vector<char>& caract, int colonne, int espace);
   /**
    * @brief affiche un vecteur de int selon les conditions posé par l'utilisateur
    * @param vect tableau de bool, va décidier quel caractères à afficher
    * @param colonne le nombre de colonne
    * @param espace l'espace entre deux chiffres
    */
   void afficherValeurVecteurInt(const vector<int>& vect, int colonne, int espace);

#endif