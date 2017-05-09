#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include "Document.h"
#include <algorithm>
#include <cassert>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <fstream>

class Mediatheque
  {
  public:
    Mediatheque(); //Constructeur de notre mediatheque
    ~Mediatheque(); //Destructeur

    bool nb_medias;

    //Ensemble des fonctions de gestion de notre mediatheque

    void Help(); //Affichage des fonctions disponibles

    bool Bye(); // Quitter l'application
    bool Add(string _type); // Ajout d'une ressource
    bool Load(string _fichiersrc); // Chargement a partir d'un fichier
    bool Save(string _fichierdest); // Sauvegarde de la mediatheque dans un fichier
    bool Search(string _chaine); // Recherche a partir d'une chaine (incrementale)
    bool Clear(); // Reset les parametres de recherche
    bool List(); // Affichage des données de la bdd
    bool Show(string _id); // Afficher les infos d'une ressource par son ID
    bool Delete(string _id); // Supprimer une ressource par son ID
    bool Reset(); // Supprimer toutes les ressources de la mediatheque

    vector<Document*> bdd; // Base de donnees de notre mediatheque



  }
#endif // !MEDIATHEQUE_H
