#include "../headers/fantome.h"



fantome_t* placer_n_f(int** pl, int n)
{
  fantome_t* fantome = malloc(n * sizeof(fantome_t*));
  int i;
  for (i = 0; i <= n; i++)
  {

    int x = rand()%P_SIZE;
    int y = rand()%P_SIZE;



    while (valide(pl,x, y))
    {
      x = rand()%P_SIZE;
      y = rand()%P_SIZE;
    }

     x = fantome[i].x;
     y = fantome[i].y;

     
  }

  pl[fantome->x][fantome->y] = 3;

  return fantome;

}


void deplacer_f(int** pl, fantome_t **fants)
{



}
