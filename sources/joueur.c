#include "../headers/joueur.h"




joueur_t* joueur = NULL;
joueur_t*placer_j(int** pl)
{
  int i;
  int j;
  i = 13;
  j = 20;
//creation de joueur
  if (pl[i][j] == 3)
  {
    pl[i][j];
  }




}
// function that allow player to move using key touch WASD
void deplacer_j(int** pl, joueur_t *jou)
{
  char lettre;
  //pour deplacer le joueur en utlisant wasd
  printf("s : bas , a:gauche  ,d:droite, w:haut\n");
  scanf("%s",&lettre );

  lettre = (lettre =='s' || lettre =='a' || lettre =='d' || lettre =='w');

  if (lettre = 'd') //droite
  {
    if (jou->x < P_SIZE - 1)
    {
      if (valide(pl, jou->y, jou->x +1) == 0)
      {
        jou->x++;// width=width+1

      }
    }
  }else if(lettre == 'a') //gauche
  {
    if (jou->x > 0 )
    {
      if (valide(pl, jou->y, jou->x -1) == 0)
      {
        jou->x--; //width = width-1

      }
    }
  }else if (lettre == 'w') //haut
  {
    if (jou->y > 0)
    {
      if (valide(pl, jou->y -1, jou->x) == 0)
      {
        jou->y--; // height = height-1

      }
    }
  }else if (lettre == 's') //bas
  {
    if (jou->y < P_SIZE+15 - 1)
    {
      if (valide(pl, jou->y +1, jou->x ) == 0)
      {
        jou->y++; //height = height+1

      }
    }
  }
}

void update_j(int** pl, joueur_t* jou)
{


}
