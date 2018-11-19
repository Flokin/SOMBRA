#ifndef DEF_NOAR_H
#define DEF_NOAR_H

#include <cstring>

using namespace std;

struct noeud
{
	int cle;
  char c;

	noeud * fg;
	noeud * fd;
  noeud * pere;
};

class arbre
{
	noeud * root;

	public:

		arbre();
		arbre(noeud * r);
		~arbre();
    void suppression(noeud * r);
    void insertion(int x);
    void insert(int x, noeud * r);
		voif pre();
    void prefixe(noeud * r);
		void inf();
    void infixe(noeud * r);
		void post();
    void postfixe(noeud * r);
    bool recherche(int cle);
    void hauteur();
    void haut(noeud * r);
};

#endif
