#include "../headers/affichage.h"

void afficher(int** pl)
{
  for (int i=0; i<P_SIZE; i++)
  {
    for (int j=0; j<P_SIZE+15; j++)
    {
      // 0 si la case est vide , 1 si elle contien un pacgomme, 2 un mur, F fantome , J joueur
      if (pl[i][j] == 0)
      {
        printf("   ");
      }
      else if (pl[i][j] == 1)
      {
        printf(" . ");
      }
      else if (pl[i][j] == 2)
      {
        printf(" # ");
      }
      else if (pl[i][j] == 3)
      {
        printf(" F ");
      }
      else if (pl[i][j] == 4)
      {
        printf(" J ");
      }
    }
    printf("\n");
  }
}


void afficher_brut(int** pl)
{
  for (int i=0; i<P_SIZE; i++)
  {
    for (int j=0; j<P_SIZE+15; j++)
    {
      printf("%c",pl[i][j]);
    }
    printf("\n" );
  }
}






// for(int j=0; j<W;j++)
// {
//   pl[0][j]='#';//bord du haut
// }
// for(int j=0; j<W;j++)
// {
//   pl[W-1][j]='#';//bord du bas
// }
// for(int i=1; i<H;i++)
// {
//   pl[i][0]='#';//bord gauche
// }
// for(int i=0; i<H;i++)
// {
//   pl[i][W-1]='#';//bord de droite
// }
// //on rempli l'interieur avec des points
// for (int i=1;i<H-1;i++)
// {
//   for (int j=1;j<W-1;j++)
//   {
//     pl[i][j]='.';
//   }
// }
