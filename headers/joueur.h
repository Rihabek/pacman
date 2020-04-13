#ifndef _JOUEUR_H_
#define _JOUEUR_H_

#include "plateau.h"

//coordonnes de joueur
typedef struct joueur {
  int x;
  int y;
  char jou_char ;
}joueur_t;


joueur_t*placer_j(int** pl);


void deplacer_j(int** pl, joueur_t *jou);


void update_j(int** pl, joueur_t* jou);


#endif
