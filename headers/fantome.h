#ifndef _FANTOME_H_
#define _FANTOME_H_

typedef struct fantome
{
  int x;
  int y;
  int z;
}fantome_t;

const int MAX = 5, MIN = 1;

fantome_t** placer_n_f(int** pl, int n);

void deplacer_f(int** pl, fantome_t **fants);

#endif
