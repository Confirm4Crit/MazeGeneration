#include "mazeGenerator.h"


using namespace std;

void mazeGenerator::displayMaze()
{
	int i;

	cout << ("The current maze:\n");
	for (int i = 0; i<mazeRows; i++)
	{
		for (int j = 0; j<mazeCols; j++)
		{
			cout << maze[i][j];


		}
		cout << "\n";
	}
	cout << "\n";

	return;

}
void mazeGenerator::createMaze()
{
	for (int i = 0; i<mazeRows; i++)
	{
		for (int j = 0; j<mazeCols; j++)
		{
			if (i == 0 || j == 0 || i == (mazeRows - 1) || j == (mazeCols - 1))
			{
				maze[i][j] = '#';
			}
			else
			{
				int x = rand() % 4;
				if (x <= 2)
				{
					maze[i][j] = '.';

				}
				else
					maze[i][j] = '#';
			}
			maze[startRow][startCol] = 'S';
			maze[flagRow][flagCol] = 'F';
			

		}
	}
}

int mazeGenerator::getMazeRows(){
	return mazeRows;
}
void mazeGenerator::setMazeRows(int x){
	mazeRows = x;
}

int mazeGenerator::getMazeCols(){
	return mazeCols;
}
void mazeGenerator::setMazeCols(int x){
	mazeCols = x;
}

int mazeGenerator::getStartRow(){
	return startRow;
}
void mazeGenerator::setStartRow(int x){
	startRow = x;
}

int mazeGenerator::getStartCol(){
	return startCol;
}
void mazeGenerator::setStartCol(int x){
	startCol = x;
}

int mazeGenerator::getFlagRow(){
	return flagRow;
}
void mazeGenerator::setFlagRow(int x){
	flagRow = x;
}

int mazeGenerator::getFlagCol(){
	return flagCol;
}
void mazeGenerator::setFlagCol(int x){
	flagCol = x;
}

char mazeGenerator::getMazeCord(int x, int y){
	return maze[x][y];
}
void mazeGenerator::setMazeCord(int x, int y, char mark)
{
	maze[x][y] = mark;
}