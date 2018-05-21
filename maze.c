/*
 * maze.c - simple program that reads a maze from a file and lets
 * you navigate through it.
 *
 * Create a file called maze.dat and enter a map using 1 for a open space
 * and 0 for a closed space, S for the start and F for the finish.
 *
 * Maximum size of the maze is 79 wide by 79 high
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "load_maze.h"
#include "get_directions.h"


/*
 * Function declarations
 */
void load_maze();
void get_directions();

/*
 * Global variables
 */
char maze[80][80];    // array holding the data for the maze
int x;                // x location
int y;                // y location
int end_x;            // x location for end
int end_y;            // y location for end

/*
 * main program function
 */
int main()
{
  load_maze();                  // calls function to load the maze

  printf("Welcome to the maze game, version 0.1 - Alpha\n\n");

  printf("You are standing at the entrance of a dark maze,\n");
  while (!(x == end_x && y == end_y)) {
    get_directions();
  }

  printf("You found the exit!  Well Done!\n");

  return 0;
}
