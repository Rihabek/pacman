#include "joueur.h"
#include "../headers/parametre"


void afficher_brut(int** pl)
{
  for (int i=o; i<P_SIZE; i++)
  {
    for (int j=0; j<P_SIZE+15; j++)
    {
      printf("%d",pl[i][j]);
    }
    printf("\n" );
  }
}
