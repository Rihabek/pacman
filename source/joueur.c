#include "joueur.h"




joueur_t* joueur = NULL;
joueur_t*placer_j(int** pl)
{
  //creation de joueur
    struct joueur*joueur = malloc(sizeof(joueur*));
    // placer le joueur aléatoirmenet
    joueur->x=rand() % P_SIZE; //x
    joueur->y=rand() % P_SIZE; //y

}

void deplacer_j(int** pl, joueur_t *jou)
//pour deplacer le joueur en utlisant wasd
const char _right = 'd', _left = 'a', _up = 'w', _down = 's';

int char;

scanf("%s",char);

if (char=='d') //right
{
  if jou->col <P
}
