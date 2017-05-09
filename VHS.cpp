
#include "VHS.h"

//******************************************************** VHS

VHS :: VHS(const string id, const string date, const string title, const string auteur, const string maison_prod, const string duree)
	: document(id, date, title)
{
	set_auteur(auteur);
	set_maison_prod(maison_prod);
	set_duree(duree);
}

VHS :: ~VHS() {}

//GETTERS//
string VHS::get_auteur()
     {return auteur;}

string VHS::get_maison_prod()
    {return maison_prod;}

string VHS::get_duree()
    {return duree;}

//SETTERS//

bool VHS::set_auteur(const string _auteur)
{
	if (_auteur == "")
	{
		auteur = "Inconnu";
		return 1;
	}
	else
	{
		auteur = _auteur;
		return 1;
	}
}

bool VHS::set_maison_prod(const string _maison_prod)
{
	if (_maison_prod == "")
	{
		maison_prod = "Inconnue";
		return 1;
	}
	else
	{
		maison_prod = _maison_prod;
		return 1;
	}
}

bool VHS::set_duree(const string _duree)
{
    if (_duree ="")
	{
		return 1;
        duree = "inconnue";
	}
	else
	{
		duree = _duree;
		return 1;
	}
}
