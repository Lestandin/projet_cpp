#include "Revue.h"

///// REVUE /////

Revue :: Revue(const string &id, const int &date, const string &title ,const string &auteur, const string &resume, const string &collection, const int &nb_pages,
  const string &editeur, const int nb_articles, const string nom_article[]) : Livre(auteur, resume, collection, nb_pages)
{
	set_editeur(editeur);
	set_nb_articles(nb_articles);
	set_nom_article(nom_article[]);
}

Revue :: ~Revue() {}

//getter

string Revue :: get_editeur()
{
	return editeur;
}
int Revue :: get_nb_articles()
{
	return nb_articles;
}
string Revue :: get_nom_article(int a)
{
	return nom_article[a];
}

//setter
void Revue :: set_editeur(const string _editeur)
{
  editeur = _editeur;
}

void Revue :: set_nb_articles(const int _nb_articles)
{
	nb_articles = _nb_articles;
}

void Revue :: set_nom_article(const string _nom_article[])
{
	nom_article[] = _nom_article[];
}
