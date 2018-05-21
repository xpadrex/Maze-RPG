/*
 * get_directions.c - get_directions() function for the maze.c program
 *
 * Checks to see what directions are available to move and takes input from
 * the user.
 */

#include <stdio.h>
#include <string.h>
#include "get_directions.h"
#include "load_maze.h"

void get_directions();      // declare the function

/*
 * function - get_directioins()
 */
void get_directions()
{
  char move;                // char to take the direction to move
  short valid_move = 0;     // TRUE or FALSE based on a valid movement


  while (valid_move == 0) {
    /* variables for available directions */
    short north = 0;
    short south = 0;
    short east = 0;
    short west = 0;

    printf("Possible exits are ");
    if (maze[x - 1][y] == '1' || maze[x - 1][y] == 'F') {
      printf("(N)orth ");
      north = 1;
    }
    if (maze[x][y + 1] == '1' || maze[x][y + 1] == 'F') {
      printf("(E)ast ");
      east = 1;
    }
    if (maze[x + 1][y] == '1' || maze[x + 1][y] == 'F') {
      printf("(S)outh ");
      south = 1;
    }
    if (maze[x][y - 1] == '1' || maze[x][y - 1] == 'F') {
      printf("(W)est ");
      west = 1;
    }
    printf(": ");
    scanf(" %c", &move);

    switch(move) {
      case 'n':
        if (north == 1) {
          x -= 1;
          valid_move = 1;
          break;
        }
      case 's':
        if (south == 1) {
          x += 1;
          valid_move = 1;
          break;
        }
      case 'e':
        if (east == 1) {
          y += 1;
          valid_move = 1;
          break;
        }
      case 'w':
        if (west == 1) {
          y -= 1;
          valid_move = 1;
          break;
        }
      default:
        printf("\nYou walk into the wall, OUCH!\n");
        break;
    }
  }
}
