#ifndef NUMERIQUE_H
#define NUMERIQUE_H

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <fstream>

#include "media.h"

using namespace std;

class numerique : public document
{
public :
	//constructeur
	numerique(const string id, const int date, const string title, const string auteur, const string URL, const string type, const int size);
	virtual ~numerique();

	//getter
	string get_auteur();
	string get_URL   ();
	string get_type  ();
	int	   get_size  ();

	//setter
	bool set_auteur (const string _auteur);
	bool set_URL	(const string _URL);
	bool set_type	(const string _type);
	bool set_size	(const int    _size);

protected:
	string auteur;
	string URL;
	string type;
	int size;
};

#endif //NUMERIQUE_H
