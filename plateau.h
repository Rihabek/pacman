// creation de jeu PACMAN par Belkhadiri Rihab

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define H 15
#define W 30
#define GHOSTS 2


struct coord
{
  int x;
  int y;
};

struct mur
{
  struct coord position;
  int vx;
  int vy;
  int lives;
  bool chasing;
  int food_collected;
};

struct ghost
{
  struct coord position;
  int vx;
  int vy;
  bool chasing;
};
