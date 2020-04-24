#include "../headers/joueur.h"




joueur_t* placer_j(int** pl)
{
  joueur_t* joueur= NULL;
  //malloc reserves a block of memory for joueur
  joueur=malloc(sizeof(joueur_t));

  joueur->x = 14 ; //x

  joueur->y =14; //y
      printf("x :%d\n", joueur->x );
      printf("y : %d\n", joueur->y );

    pl[joueur->x][joueur->y] = 4;
    return joueur;
}



// function that allow player to move using key touch WASD
void deplacer_j(int** pl, joueur_t *jou)
{
  char lettre;
  do {
  //pour deplacer le joueur en utlisant wasd
  printf("s : gauche , a:haut  ,d:droite, w:bas\n");
  scanf("%s",&lettre);

  }
  while (!(lettre =='s' || lettre =='a' || lettre =='d' || lettre =='w'));
  printf("letter = %c\n", lettre);

    if(lettre == 'a') //haut
    {
      if (jou->x > 0 )
      {
        if (!valide(pl, jou->x -1, jou->y) )
        {

          jou->x--; //width = width-1

        }
      }
    }if (lettre == 'w') //bas
    {
      if (jou->x < P_SIZE - 1)
      {
        if (!valide(pl,jou->x +1,jou->y))
        {
          jou->x++;// width=width+1

        }
      }
    }if (lettre == 's') //a gauche
    {
      if (jou->y > 0)
      {
        if (!valide(pl,jou->x , jou->y -1) )
        {
          jou->y--; // height = height-1

        }
      }
    }if (lettre == 'd') //droite
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
      if (pl[i][j] == 4 )
      {
          pl[i][j] = 0;
      }
    }
  }
  pl[jou->x][jou->y] = 4;
}
