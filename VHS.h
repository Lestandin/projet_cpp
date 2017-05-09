#ifndef VHS_H
#define VHS_H

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <fstream>


class VHS : public document
{
public:
	//Constructeur
    VHS(const string id, const string date, const string title, const string auteur, const string maison_prod, const string duree);
	virtual ~VHS();

	//getter
	string get_auteur();
	string get_maison_prod();
    string get_duree();

	//setter
	bool set_auteur(const string _auteur);
	bool set_maison_prod(const string _maison_prod);
    bool set_duree(const string _duree);

protected:
	string auteur;
	string maison_prod;
    string duree;
};

#endif //VHS_H
