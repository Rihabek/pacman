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
    pl[i]=malloc(sizeof(int*)*P_SIZE);
  }
  mur(pl);
  pacgomme(pl);
  return pl;
}
// si la case est vide le joueur peut se deplacer
int valide(int** pl, int i, int j) // if the case is empty then the player can move
{
  for (i = 0; i <P_SIZE; i++)
  {
    for (j = 0; j < P_SIZE; j++)
    {
      if ((pl[i][j] == 2))
      {
        return 0;
      }
    }
    return 1;
  }
}

// 0 si la case est vide , 1 si elle contien un pacgomme, 2 un mur, F fantome , J joueur

void mur(int** pl)
{
  for (int i=0; i<P_SIZE; i++)
  {
    for (int j=0; j<P_SIZE; j++)// P_SIZE =15 LE H DE PLATEAU
    {
      int nb_aleatoire;
      nb_aleatoire = rand()%4 ; // 1/5 pour avoir un mur
      if (nb_aleatoire == 2)
      {
        pl[i][j] = 2; // return un mur
      }
    }
  }
}

void pacgomme(int**pl)
{
  for (int i = 0; i < P_SIZE; i++)
  {
    for (int j = 0; j < P_SIZE; j++)
    {
      if (pl[i][j] == 0)
      {
        pl[i][j] = 1; // return un pacgomme
      }
    }
  }
}
