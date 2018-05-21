/*
 * load_maze.c - load_maze() function for the maze.c program
 * 
 * loads the information from the maze.dat file into an array to create
 * the maze and find the start and end locations.  
 * 
 * maze.dat takes the current format: '1' represents a room
 * and 0 is a wall.  'S' is the player start and 'F' is the end.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "load_maze.h"

void load_maze();


void load_maze()
{
  short line = 0;               // line number read from file
  char *location;               // char pointer used for strchr

  FILE *in = fopen("maze.dat", "r");

  while (fscanf(in, "%79[^\n]\n", maze[line]) == 1) {
    if (strchr(maze[line], 'S')) {
      location = strchr(maze[line], 'S');
      y = (int)(location - maze[line]);
      x = line;
    }
    else if (strchr(maze[line], 'F')) {
      location = strchr(maze[line], 'F');
      end_y = (int)(location - maze[line]);
      end_x = line;
    }
    line++;
  }
}

