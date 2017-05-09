
#include "DVD.h"

///// DVD /////

//constructeur
DVD :: DVD(const string id, const string date, const string title, const string auteur, const string maison_prod, const string duree, const string nb_chap) : VHS(id, date, title, auteur, maison_prod, duree)
{
	set_nb_chap(nb_chap);
}


DVD ::~DVD(){}

//getter
int DVD::get_nb_chap()
{
	return nb_chap;
}

//setter
bool DVD::set_nb_chap(const string _nb_chap)
{
	if (_nb_chap <= 0)
	{
		cout << "Nombre de chapitres non valide, veuillez réessayer" << '\n';;
		return 0;
	}
	else
	{
		nb_chap = _nb_chap;
		return 1;
	}

}
