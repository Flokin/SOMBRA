#include "arbre.h"
#include <iostream>

using namespace std;

noeud * nnoeud(int x, char y, noeud * r)
{
	noeud * tmp = new noeud ;

	tmp->cle = x ;
  tmp->c = y ;
	tmp->fg = NULL ;
	tmp->fd = NULL ;
	tmp->pere = r ;

	return tmp ;
}

arbre::arbre()
{
	root = NULL
}

arbre::arbre(noeud * r)
{
  r = root;
	root = NULL;
}

arbre::~arbre()
{
	suppression(root) ;
}

void arbre::suppression(noeud * r)
{
	if(r == NULL)
  {
    return ;
  }
	else
	{
		suppression(r->fg) ;
		suppression(r->fd) ;
	}

	delete [] r ;
}

void arbre:insertion(int x)
{
  if(root == NULL)
  {
    root = nnoeud(x,NULL,NULL);
  }
  else
  {
    insert(x,root);
  }
}

void arbre:insert(int x, noeud * r)
{
  if(r != NULL)
  {
    if(r->cle > x)
    {
			if(r->fg != NULL)
			{
      	insert(x,r->fg);
			}
			else
			{
				r->fg = nnoeud(x,NULL,NULL);
			}
    }
    else if(r->cle < x)
    {
			if(r->fd != NULL)
			{
				insert(x,r->fd);
			}
			else
			{
				r->fg = nnoeud(x,NULL,NULL);
			}
    }
  }
  else
  {
    r = nnoeud(x,NULL,NULL)
  }
}

void arbre::pre()
{
	prefixe(root);
}

void arbre::prefixe(noeud * r)
{
  if(r != NULL)
  {
    cout<<" "<<r->cle<<" ( ";
		prefixe(r->fg);
		prefixe(r->fd);
		cout<<" ) ";
	}
}

void arbre::inf()
{
	infixe(root);
}

void arbre::infixe(noeud * r)
{
  if(r != NULL)
  {
    cout<<" ( ";
		infixe(r->fg);
		cout<<" "<<r->cle<<" ";
		infixe(r->fd);
		cout<<" ) ";
  }
}

void arbre::post()
{
	postfixe(root);
}

void arbre::postfixe(noeud * r)
{
  if(r != NULL)
  {
    cout<<" ( ";
		postfixe(r->fg);
		postfixe(r->fd);
		cout<<" ) "<<r->cle<<" ";
  }
}

bool arbre::recherche(int x)
{
  noeud * r = root ;

  while(r != NULL)
  {

    if(r->cle == x)
    {
      return true ;
    }
    else
    {
      if(r->cle <= x)
      {
        r = r->fg ;
      }
      else
      {
        r = r->fd ;
      }
    }
}

bool

return false ;
}

void arbre::hauteur()
{
  cout<<haut(root)<<endl;
}

int arbre::haut(noeud * r)
{
	int h1,h2 = 0 ;

	if(r == NULL)
  {
    return 0;
  }
  else
  {
    	h1 = haut(r->fg) ;
	    h2 = haut(r->fd) ;
  }

	if(h1 > h2)
  {
    return h1 + 1 ;
  }
	else
  {
    return h2 + 1 ;
  }
}
/*
void arbre:InsertPrefixe(char exp)
{
  noeud * r = root;

}*/
void arbre::InsertionInfixe(char exp[], int taille)
{
	for(int i(-1);i<taille;i++)
	{

	}
}
