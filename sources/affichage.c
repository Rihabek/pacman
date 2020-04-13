#include "../headers/affichage.h"


void afficher_brut(int** pl)
{
  for (int i=0; i<P_SIZE; i++)
  {

    for (int j=0; j<P_SIZE; j++)
    {
      printf(" %d", pl[i][j]);
    }
    printf(" \n");
  }
}


void afficher(int** pl)
{

  for (int i=0; i<P_SIZE; i++)
  {

    for (int j=0; j<P_SIZE; j++)
    {

      // 0 si la case est vide , 1 si elle contien un pacgomme, 2 un mur, F fantome , J joueur
      if (pl[i][j] == 0)
      {
        printf("  ");
      }
      else if (pl[i][j] == 1)
      {
        printf(". ");
      }
      else if (pl[i][j] == 2)
      {
        printf("# ");
      }
      else if (pl[i][j] == 3)
      {
        printf("F ");
      }
      else if (pl[i][j] == 4)
      {
        printf("J ");
      }
    }
    printf(" \n");

  }
}
