#include "../headers/fantome.h"



fantome_t** placer_n_f(int** pl, int n)
{
  fantome_t** t = malloc(n*sizeof(fantome_t*));
  for(int i = 0; i<n; i++)
  {
    t[i] = malloc(sizeof(fantome_t*)*3);

  }
  return t;
}

void deplacer_f(int** pl, fantome_t **fants){

}
