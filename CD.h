#ifndef CD_H
#define CD_H

#include "Document.h"


class CD : public document
{
public:
	//Constructeur
    CD(const string id, const string date, const string title, const string auteur, const string maison_prod, const string duree, const string nb_pistes);
	virtual ~CD();

	//getter
    string get_nb_pistes();
	string get_auteur();
	string get_maison_prod();
    string get_duree();

	//setter
    bool set_nb_pistes	(const string _nb_pistes);
	bool set_auteur		(const string _auteur);
	bool set_maison_prod(const string _maison_prod);
    bool set_duree		(const string _duree);

    //methode
    void display(void);
    void ajouter(void);

protected:
	string auteur;
	string maison_prod;
    string duree;
    string nb_pistes;
};

#endif //CD_H
