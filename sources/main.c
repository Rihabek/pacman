#include "../headers/affichage.h"
#include "../headers/joueur.h"
// #include "../headers/fantome.h"






int main()
{
  int ** pl=creer_plateau();
  mur(pl);
  afficher_brut(pl);
  afficher(pl);


}
