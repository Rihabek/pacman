#ifndef _FANTOME_H_
#define _FANTOME_H_

typedef struct fantome
{
  int x;
  int y;
}fantome_t;

fantome_t** placer_n_f(int** pl, int n);

void deplacer_f(int** pl, fantome_t **fants);

#endif
