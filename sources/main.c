#include "../headers/affichage.h"
#include "../headers/joueur.h"
// #include "../headers/fantome.h"






int main(int argc, char const *argv[])
{
  srand(time(NULL));
  int ** pl=creer_plateau();
  mur(pl);
  afficher_brut(pl);
  afficher(pl);


}
