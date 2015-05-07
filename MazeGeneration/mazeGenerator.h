#pragma once
#include <iostream>
#include "creature.h"

using namespace std;

class mazeGenerator
{
public:
	friend class creature;
	void createMaze();
	void displayMaze();

	int getMazeRows();
	void setMazeRows(int mazeRows);

	int getMazeCols();
	void setMazeCols(int MazeCols);
	
	int getStartRow();
	void setStartRow(int startRow);

	int getStartCol();
	void setStartCol(int startCol);
	
	int getFlagRow();
	void setFlagRow(int flagRow);
	
	int getFlagCol();
	void setFlagCol(int flagCol);

	char getMazeCord(int x, int y);
	void setMazeCord(int x, int y, char mark);

private:
	char maze[40][40];
	int mazeRows;
	int mazeCols;

	int startRow;
	int startCol;

	int flagRow;
	int flagCol;

};