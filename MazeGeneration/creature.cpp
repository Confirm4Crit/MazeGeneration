#include "creature.h"
#include "mazeGenerator.h"
using namespace std;

bool creature::findFlag(mazeGenerator maze, int x, int y)
{
		
		// Checks if outside of maze, should never happen
		if (x < 0 || x > maze.mazeCols - 1 || y < 0 || y > maze.mazeRows - 1) return 0;
	
		// checks for flag
		if (maze.getMazeCord(x,y) == 'F')
		{
			cout << "Flag Found!" << endl;
			maze.displayMaze();
			return 1;
		}
			
	
		// returns failure
		if (maze.maze[x][y] != '.' && maze.maze[x][y] != 'S') return 0;
	
		// marks soultion path
		if (maze.maze[x][y] != 'S')
		maze.setMazeCord(x, y, '+');
	
		// If findFlag North of x,y is true, return true.
		if (findFlag(maze, x, y - 1) == 1) return 1;
	
		// If findFlag East of x,y is true, return true.
		if (findFlag(maze, x + 1, y) == 1) return 1;
	
		// If findFlag South of x,y is true, return true.
		if (findFlag(maze, x, y + 1) == 1) return 1;
	
		// If findFlag West of x,y is true, return true.
		if (findFlag(maze, x - 1, y) == 1) return 1;
	
		
	
		//TODO: Turn these into functions as instructed.
}