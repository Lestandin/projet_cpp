#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
void main ()
{
string STRING;
if stream infile ;
i n f i l e . open ( "names.txt" ) ;
while ( ! i n f i l e . e o f )
{
g e t l i n e ( i n f i l e ,STRING) ;
cout << STRING;
}
i n f i l e . c l o s e ( ) ;
}

//Dans ce second exemple, le code C++ présenté permet de lire une chaine de caractère tapée par
//l’utilisateur dans la console. La lecture de la chaine de caractères est réalisée lorsque l’utilisateur appuie
//sur la touche return.

void l e c t u r e_c l a v i e r ( )
{
s t r i n g chaine ;
cout << "Entrez une phrase : " << endl ;
g e t l i n e ( cin , chaine ) ;
cout << "La phrase est : " << chaine << endl ;
}
Ce troisième exemple illustre les méthodes disponibles dans la classe string. Ces dernières vous seront
surement utiles lors de votre développement.
void t e s t_s t r i n g ( ){
s t r i n g c = "Voici une phrase !" ;
cout << "Taille de la chaine     : " << c . l eng th ( ) << endl ;

cout << "Pos. du premier espace  : " << c . f i n d ( " " ) << endl ;
cout << "Pos. du dernier espace  : " << c . r f i n d ( " " ) << endl ;
cout << "Pos. du mot ’une’       : " << c . f i n d ( "une" ) << endl ;
cout << "Premier mot             : " << c . subs t r ( 0 , c . f i n d ( " " ) ) << endl ;
cout << "Comparaison (true)      : " << c . compare ( c ) << endl ;
cout << "Comparaison (false)     : " << c . compare ( "TOTO" ) << endl ;
}
Ce quatrième exemple vous permet de découper une chaine de caractères en sous parties en fonction
d’un séparateur (ici le caractère "=").
void decoupe_s t r ing ( )
{
s t r i n g c ;
cout << "Entrez une phrase : " << endl ;
g e t l i n e ( cin , c ) ;
int t a i l l e = c . s i z e ( ) ;
i f ( t a i l l e != 0 ){
int pos = c . f i n d ( ’=’ ) ;
cout << "Ligne lue : *" << c << "*" << endl ;
cout << "Position: " << pos << endl ;
cout << "Mot 1 : " << c . subs t r ( 0 , pos ) << endl ;
cout << "Mot 2 : " << c . subs t r ( pos+1, t a i l l e 􀀀(pos+1)) << endl ;
}
}

//Ce dernier exemple vous indique la procédure à suivre pour récupérer un pointeur sur la chaine de
//caractère contenue dans un objet de type string.

void pointeur_char ( )
{
s t r i n g STRING;
cout << "Votre message = " ;
g e t l i n e ( cin , STRING) ;
char chaine = STRING. c_str ( ) ;
cout << "INTEGER = " << a t o i ( chaine ) ;
}
