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
  for (i = 0; i <P_SIZE; i++)
  {
    for (j = 0; j < P_SIZE+15; j++) {
      if ((pl[i][j] == 2))
      {
        return 0;
      }
    }
  }
}

void mur(int**pl, int i, int j)
{
  for (i=0; i<4; i++)
  {
    for (j=0; i<4; j++)
    {
      int nb_aleatoirex;
      int nb_aleatoirey;
      nb_aleatoirex = rand()%4 ; 
      nb_aleatoirey = rand()%4;
      if ((nb_aleatoirex == 2) || (nb_aleatoirey ==2))
      {
        pl[i][j]=2; // return un mur
        printf("%d", pl[i][j]);
      }
    }
  }
}
