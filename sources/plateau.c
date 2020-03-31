// creation de jeu PACMAN par Belkhadiri Rihab
#include "../headers/plateau.h"




int ** creer_plateau()
{
  int**pl = malloc(sizeof(*pl) * (P_SIZE+15)); //LIGNE
  for (int i =0; i<P_SIZE+15; i++)
  {
    pl[i]=malloc(sizeof(**pl) * P_SIZE);
  }
  return pl;
}
