#include "../headers/joueur.h"




joueur_t* placer_j(int** pl)
{
  joueur_t* joueur= NULL;
  //malloc reserves a block of memory for joueur
  joueur=malloc(sizeof(joueur_t));

  joueur->x = rand()% P_SIZE ; //x
  joueur->y =rand()% P_SIZE; //y

    pl[joueur->x][joueur->y] = 4;
    return joueur;
}



// function that allow player to move using key touch WASD
void deplacer_j(int** pl, joueur_t *jou)
{
  char lettre;
  //pour deplacer le joueur en utlisant wasd
  printf("s : bas , a:gauche  ,d:droite, w:haut\n");
  scanf("%s",&lettre);

  lettre = (lettre =='s' || lettre =='a' || lettre =='d' || lettre =='w');

  if (lettre = 'd') //droite
  {
    if (jou->x < P_SIZE - 1)
    {
      if (!valide(pl,jou->x +1,jou->y))
      {
        jou->x++;// width=width+1
      }
    }
  }else if(lettre == 'a') //gauche
  {
    if (jou->x > 0 )
    {
      if (!valide(pl, jou->x -1, jou->y))
      {
        jou->x--; //width = width-1

      }
    }
  }else if (lettre == 'w') //haut
  {
    if (jou->y > 0)
    {
      if (!valide(pl,jou->x , jou->y -1))
      {
        jou->y--; // height = height-1

      }
    }
  }else if (lettre == 's') //bas
  {
    if (jou->y < P_SIZE - 1)
    {
      if (!valide(pl, jou->x , jou->y +1))
      {
        jou->y++; //height = height+1

      }
    }
  }
  update_j(pl,jou);
}

//modifier l'emplacement de joueur aprés avois se deplacer

void update_j(int** pl, joueur_t* jou)
{
  for (int i=0; i < P_SIZE; i++)
  {
    for (int j = 0; j < P_SIZE; j++)
    {
      if (pl[i][j] == 4)
      {
        pl[i][j] == 0;
      }
    }
  }
  pl[jou->x][jou->y] = 4;
}
