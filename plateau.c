// creation de jeu PACMAN par Belkhadiri Rihab

#include <plateau.h>


plateau creer_plateau(); //creation du plateau du jeu
{
    int** plateau = malloc(sizeof(int*)*W);
    int i;
    for (i=0; i<W; i++)
    {
      plateau[i]=malloc(sizeof(int)*H);
      int j;
      for (j=0; j<W; j++)
      {
        plateau[i][j]=1;
      }
    }
       return plateau;
}
