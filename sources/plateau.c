// creation de jeu PACMAN par Belkhadiri Rihab
#include "../headers/plateau.h"


/**
  *\author belkhadiri rihab
*/

// creation de plateau

int ** creer_plateau()
{
  int** pl=malloc(sizeof(int*)*P_SIZE);
  for (int i = 0; i < P_SIZE; i++)
  {
    pl[i]=malloc(sizeof(int*)*P_SIZE+15);
  }
  return pl;
}
// si la case es vide le joeur peut se deplacer
int valide(int** pl, int i, int j) // if the case is empty then the player can move
{
  for (i = 0; i <P_SIZE; i++)
  {
    for (j = 0; j < P_SIZE+15; j++)
    {
      if ((pl[i][j] == 2))
      {
        return 0;
      }
    }
    return 1;
  }
}


void mur(int** pl)
{
  for (int i=0; i<P_SIZE; i++)
  {
    for (int j=0; j<P_SIZE+15; j++)// P_SIZE =15 LE H DE PLATEAU
    {
      int nb_aleatoire;
      nb_aleatoire = rand()%5 ; // 1/5 pour avoir un mur
      if (nb_aleatoire == 2)
      {
        pl[i][j] = 2; // return un mur
      }
      else if ((nb_aleatoire == 1) || (nb_aleatoire == 3))
      {
        pl[i][j] = 1;// return un pacgomme
      }
    }
  }
}
