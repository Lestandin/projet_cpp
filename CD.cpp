
#include "CD.h"

///// CD /////

CD::CD(const string id, const string date, const string title, const string auteur, const string maison_prod, const string duree, const string nb_pistes)
	: document(id, date, title)
{
	set_nb_pistes(nb_pistes);
	set_auteur(auteur);
	set_maison_prod(maison_prod);
	set_duree(duree);
}

CD :: ~CD() {}

void CD::display()
{
    document::display();
    cout << "Duree : " << CD::get_duree() << endl;
    cout << "Nombre de pistes : " << CD::get_nb_pistes() << endl;
    cout << "Maison de production : " << CD::get_maison_prod()<< endl;
    cout << "EXEMPLAIRES DISPONIBLES : " << CD::get_nombre << endl;
}

void CD::ajouter()
{
    document::ajouter();
    cout << "Duree : "; cin >> _duree;
    cout << "Nombre de pistes : "; cin >> _npistes;
    cout << "Maison de production : "; cin >> _maison;
}

//getter
string CD::get_auteur()
{
	return auteur;
}
string CD::get_maison_prod()
{
	return maison_prod;
}
string CD::get_duree()
{
	return duree;
}
string CD::get_nb_pistes()
{
	return nb_pistes;
}

//setter
bool CD::set_auteur(const string _auteur)
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
bool CD::set_maison_prod(const string _maison_prod)
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

bool CD::set_duree(const string _duree)
{
	if (_duree <= 0)
	{
		cout << "Durée choisie non valide, veuillez réessayer" << '\n';
		return 0;
	}
	else
	{
		duree = _duree;
		return 1;
	}
}

bool CD::set_nb_pistes(const string _nb_pistes)
{
	if (_nb_pistes <= 0)
	{
		cout << "Nombre de pistes non valide, veuillez réessayer" << '\n';
		return 0;
	}
	else
	{
		nb_pistes = _nb_pistes;
		return 1;
	}
}
