#include "../headers/joueur.h"




joueur_t* joueur = NULL;
joueur_t*placer_j(int** pl)
{
  //creation de joueur
    joueur_t*joueur = malloc(sizeof(joueur_t));
    // placer le joueur aléatoirmenet
    joueur->x=rand() % P_SIZE; //x
    joueur->y=rand() % P_SIZE; //y

}

void deplacer_j(int** pl, joueur_t *jou)
{
  //char lettre = 1;// de la merde
//pour deplacer le joueur en utlisant wasd
//printf("s : bas , d:droite  ,..... \n");
return;
}




// if (lettre =='d') //right
// {
//   if jou->col <P
// }
//
// }
