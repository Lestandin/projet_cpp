#ifndef DVD_H
#define DVD_H

using namespace std;

class DVD : public VHS
{
public:
	//constructeur
    DVD(const string id, const string date, const string title, const string auteur, const string maison_prod, const string duree, const string nb_chap);
	virtual ~DVD();

	//getter
	int get_nb_chap();

	//setter
    bool set_nb_chap(const string _nb_chap);

private:
    string nb_chap;
};

#endif //DVD_H
