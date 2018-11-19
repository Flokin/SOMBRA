#include "arbre.cpp"
#include <iostream>

using namespace std;

int main()
{
  arbre A;

  A.insertion(10);
  A.insertion(5);
  A.insertion(15);
  A.insertion(2);
  A.insertion(20);
  A.insertion(12);
  A.insertion(7);
  A.insertion(6);

  cout<<" /////////////////////////// PARTIE 1 ///////////////////////////"<<endl;
  A.inf(); // (((2)5((6)7))10((12)15(20)))
  cout<<" ___________________________________"<<endl;
  A.pref(); // 10(5(2;7(6)); 15(12;20))
  cout<<" ___________________________________"<<endl;
  A.postf(); // (5(2;7(6)) 15(12;20))10
  cout<<" ___________________________________"<<endl;


  if(A.recherche(6)==true)
  {
    cout<<" On l'a trouvé !"<<endl;
  }
  else
  {
    cou<<"NON"<<endl;
  }// true
  if(A.recherche(60)==true)
  {
    cout<<" On l'a trouvé !"<<endl;
  }
  else
  {
    cou<<"NON"<<endl;
  }// true

  cout<<" ___________________________________"<<endl;

  A.hauteur();

  cout<<" /////////////////////////// PARTIE 2 ///////////////////////////"<<endl;
}
