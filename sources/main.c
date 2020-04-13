#include "../headers/affichage.h"
#include "../headers/joueur.h"
#include "../headers/fantome.h"






int main()
{

  int ** pl=creer_plateau();
  mur(pl);
  // afficher_brut(pl);
  pacgomme(pl);

  joueur_t* jou = placer_j(pl);
  afficher(pl);
  while (0<1){
      deplacer_j(pl,jou);
      afficher(pl);
  }
  afficher(pl);

  return EXIT_SUCCESS ;


}
