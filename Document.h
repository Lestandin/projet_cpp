#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class document
{
public:
	//constructeur
    document(const string id, const string date, const string title);
	document(const string id, const string title);

	//destructeur
	virtual ~document();

	//getter
	string get_id();
    string get_date();
	string get_title();
    int    get_ndispo();

	//setter
    bool set_id    (const string _ID);
    bool set_date  (const string _date);
    bool set_title (const string _title);
    bool set_ndispo(const int    _ndispo);

    //methodes
    void display(void);
    void add(void);
    void list(void);

protected:
	string id;
    string date;
    string title;
    int _ndispo;
};


#endif // !DOCUMENT_H
