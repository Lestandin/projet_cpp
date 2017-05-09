#include "mediatheque.h"

using namespace std;

void Mediatheque::Help()
{
	cout << "Ensemble des commandes disponibles" << endl << endl;
	cout << "BYE    | Quitter l'application" << endl;
	cout << "ADD    | Ajout d'une ressource" << endl;
	cout << "LOAD   | Chargement a partir d'un fichier" << endl;
	cout << "SAVE   | Sauvegarde de la mediathéque dans un fichier" << endl;
	cout << "SEARCH | Recherche a partir d'une chaîne (incrementale)" << endl;
	cout << "CLEAR  | Reset les paramètres de recherche" << endl;
	cout << "LIST   | Affichage des données de la base de données" << endl;
	cout << "SHOW   | Afficher les infos d'une ressource via son ID" << endl;
	cout << "DELETE | Supprimer une ressource via son ID" << endl;
	cout << "RESET  | Supprimer toutes les ressources de la mediatheque" << endl;
}

bool Mediatheque::Add(string _type)
{
	_type = Upper(_type);

	switch (_type)
	{
		case "LIVRE":

			break;
		case "REVUE":
			break;
		case "VHS":
			break;
		case "DVD":
			break;
		case "CD":
			break;
		case "NUMERIQUE":
			break;
		default:

	}
return 1;
}

bool Mediatheque::Load(string _fichiersrc)
{

}
