#ifndef LIVRE_H
#define LIVRE_H

#include <fstream>
#include <string>
#include "Document.h" //Pour avoir acces a la classe document

using namespace std;

class Livre : public document
{

protected :

string auteur;
string resume;
string collection;
string nb_pages;

public:

  /////// CONSTRUCTEURS //////

  //Livre(); Pour l'instant on ne mettra pas de descripteurs vides
  Livre(const string id, const string date, const string title ,const string auteur, const string resume, const string collection, const string nb_pages);

  /////// SET and GET METHODES //////

  string get_auteur();
  void set_auteur(const string auteur);

  string get_resume();
  void set_resume(const string resume);

  string get_collection();
  void set_collection(const string collection);

  string get_nb_pages();
  void set_nb_pages(const string nb_pages);


};

#endif // LIVRE_H
