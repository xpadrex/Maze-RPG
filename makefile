# makefile for maze game

maze.o: maze.c load_maze.h get_directions.h
	gcc -c maze.c

load_maze.o: load_maze.c load_maze.h
	gcc -c load_maze.c

get_directions.o: get_directions.c get_directions.h load_maze.h
	gcc -c get_directions.c

maze: maze.o load_maze.o get_directions.o
	gcc maze.o load_maze.o get_directions.o -o maze
