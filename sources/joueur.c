#include "../headers/joueur.h"




joueur_t* joueur = NULL;
joueur_t*placer_j(int** pl)
{
  //creation de joueur
    joueur_t*joueur = malloc(sizeof(joueur_t));
    // placer le joueur aléatoirmenet
    joueur->x=rand() % P_SIZE+15; //x
    joueur->y=rand() % P_SIZE; //y

}
//
// void deplacer_j(int** pl, joueur_t *jou)
// {
//   char lettre = 'b';
//   //pour deplacer le joueur en utlisant wasd
//   printf("s : bas , a:gauche  ,d:droite, w:haut\n");
//   scanf("%s\n",&lettre );
//
//   lettre = (lettre =="s" || lettre =="a" || lettre =="d" || lettre =="w");
//
//   if (lettre = "d") //droite
//   {
//     if (jou->W < P_SIZE - 1)
//     {
//       if (valide(pl, jou->H, jou->W +1) == 0)
//       {
//         jou->W++
//
//       }
//     }
//   }else if(lettre == "a") //gauche
//   {
//     if (jou->W > 0 )
//     {
//       if (valide(pl, jou->H, jou->W -1) == 0)
//       {
//         jou->W--
//
//       }
//     }
//   }else if (lettre == "w") //haut
//   {
//     if (jou->H > 0)
//     {
//       if (valide(pl, jou->H -1, jou->W ) == 0)
//       {
//         jou->H--
//
//       }
//     }
//   }else if (lettre == "s") //bas
//   {
//     if (jou->H < P_SIZE+15 - 1)
//     {
//       if (valide(pl, jou->H +1, jou->W ) == 0)
//       {
//         jou->H++
//
//       }
//     }
//   }
// }

void update_j(int** pl, joueur_t* jou)
{


}
