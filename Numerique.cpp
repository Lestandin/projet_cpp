
#include "Numerique.h"

///// Numerique /////

numerique::numerique(const string id, const string date, const string title, const string auteur, const string URL, const string type, const string size) :document(id, date, title)
{
	set_URL(URL);
	set_auteur(auteur);
	set_type(type);
	set_size(size);
}
numerique::~numerique(){}

//getter
string numerique::get_auteur()
{
	return auteur;
}
string numerique::get_URL()
{
	return URL;
}
string numerique::get_type()
{
	return type;
}
string numerique::get_size()
{
	return size;
}

//setter

bool numerique::set_auteur(const string _auteur)
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

bool numerique::set_type(const string _type)
{
	if (_type == "")
	{
		type = "inconnue";
		return 1;
	}
	else
	{
		type = _type;
		return 1;
	}
}

bool numerique::set_URL(const string _URL)
{
	if (_URL == "")
	{
		URL = "inconnue";
		return 1;
	}
	else
	{
		URL = _URL;
		return 1;
	}
}

bool numerique::set_size(const string _size)
{
    if (_size ="0")
	{
		return 1;
        size = "0kB";
	}
	else
	{
		return 1;
        size = _size;
	}
}
