// creation de jeu PACMAN par Belkhadiri Rihab
#include "plateau.h"

#define H 15
#define W 30


int ** creer_plateau();
{
int** pl = malloc(sizeof(int*)*W);
int i;
  for (i=0; i<W; i++)
  {
    pl[1]=malloc(sizeof(int*)*H);
    int j;
    for (j=0;j<H;j++)
    {
      if((i==0)||(i==H-1)||(j==0)||(j==W-1)) //Vérifie qu'une des conditions est réalisée	si
      {
        pl[i][j]=2 //retourner un mur
      }
      else
      {
        srand(time(NULL));
        int x=1;
        x=rand() % (5-1)+1;
        if (x==1)
        {
          pl[i][j]=2;
        }
        else if ((x==2)||(x==3))
        {
          pl[i][j]=1;
        }
      }
    }

  }
  return pl;
}










}
