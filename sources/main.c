#include "../headers/affichage.h"
#include "../headers/joueur.h"
#include "../headers/fantome.h"






int main()
{
  // intialistaion
  int ** pl=creer_plateau();

  joueur_t* jou = placer_j(pl);

  fantome_t* fantome = placer_n_f(pl,4);
  // affichage
  afficher(pl);
  //while game
  while (0<1)
  {

    deplacer_j(pl,jou);
    // afficher_brut();
    afficher(pl);
  }


  // clean
  free(pl);
  free(jou);
  free(fantome);
  return EXIT_SUCCESS ;


}
