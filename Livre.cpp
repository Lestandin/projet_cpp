
#include "Livre.h"

///// Livre /////

Livre::Livre(const string id, const string date, const string title ,const string auteur, const string resume,
  const string collection, const string nb_pages) : document(id, date, title)
{
	set_auteur(auteur);
	set_resume(resume);
	set_collection(collection);
  set_nb_pages(nb_pages);
}

Livre :: ~Livre() {}

//getter

string Livre :: get_auteur()
{
	return auteur;
}

string Livre :: get_resume()
{
	return resume;
}
string Livre :: get_collection()
{
	return collection;
}

string Livre :: get_nb_pages()
{
	return nb_pages;
}

//setter

bool Livre :: set_auteur(const string _auteur)
{
    if (_auteur == "")
    {
        auteur = "inconnue";
        return 1;
    }
    else
    {
        auteur = _auteur;
        return 1;
    }
}

void Livre :: set_resume(const string _resume)
{
    if (_resume == "")
    {
        resume = "inconnue";
        return 1;
    }
    else
    {
        resume = _resume;
        return 1;
    }
}


void Livre :: set_collection(const string _collection)
{
    if (_collection == "")
    {
        collection = "inconnue";
        return 1;
    }
    else
    {
        collection= _collection;
        return 1;
    }
}


void Livre :: set_nb_pages(const string _nb_pages)
{
    if (_nb_pages == "")
    {
        nb_pages = "inconnue";
        return 1;
    }
    else
    {
        nb_pages= _nb_pages;
        return 1;
    }
}
