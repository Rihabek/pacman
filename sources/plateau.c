// creation de jeu PACMAN par Belkhadiri Rihab
#include "../headers/plateau.h"


/**
  *\author belkhadiri rihab
*/

int ** creer_plateau()
{
  int**pl = malloc(sizeof(*pl) * (P_SIZE+15)); //LIGNE
  for (int i =0; i<P_SIZE+15; i++)
  {
    pl[i]=malloc(sizeof(**pl) * P_SIZE);
  }
  return pl;
}

int valide(int** pl, int i, int j)
{

}

void mur(int**pl)
{
  for (int i=0; i<P_SIZE; i++)
  {
    for (int j=0; i<P_SIZE+15; j++)// P_SIZE =15 LE H DE PLATEAU
    {
      int nb_aleatoire;
      nb_aleatoire = rand()%5; // 1/5 pour avoir un mur
      if (nb_aleatoire == 2)
      {
        pl[i][j] = 2; // return un mur
      }
    }
  }
}
