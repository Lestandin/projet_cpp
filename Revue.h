#ifndef REVUE_H
#define REVUE_H

#include <fstream>
#include <string>
#include "livre.h" //Pour avoir acces a la classe Livre

using namespace std;


class Revue : public Livre
{

private :

string editeur;
int nb_articles;
string nom_article[]; //Tableaux des différents noms d'articles

public:

  /////// CONSTRUCTEURS //////

  //Revue();
  Revue(const string &id, const int &date, const string &title ,const string &auteur, const string &resume, const string &collection, const int &nb_pages,
    const string &editeur, const int nb_articles, const string nom_article[]);
  virtual ~Revue();

  /////// SET and GET METHODES //////


  string get_editeur();
  void set_editeur(const string &editeur);

  int get_nb_articles();
  void set_nb_articles(const int nb_articles);

  string get_nom_article(int a);
  int set_nom_article(const string &nom_article);  //On va renvoyer le numero correspondant a ce nouvel article
};

#endif //REVUE_H
