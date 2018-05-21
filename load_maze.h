/*
 * load_maze.h - header file for the load_maze() function
 */

#ifndef _LOAD_MAZE_H_
#define _LOAD_MAZE_H_
/*
 * external variable definitions
 */
extern char maze[80][80];       // array to hold the data for the maze
extern int x;                   // x location
extern int y;                   // y location
extern int end_x;               // x location for the end of maze
extern int end_y;               // y location for the end of maze

/*
 * function definition
 */
void load_maze();

#endif
