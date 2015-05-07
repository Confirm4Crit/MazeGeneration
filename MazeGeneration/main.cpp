//Maze Generator Assignment 2, Miles Robson, z23132138, Due 2/3/2013. mrobson3@fau.edu Backuped on dropb
#include <iostream>
#include "mazeGenerator.h"
#include "Creature.h"
#include <time.h> //needed for srand
using namespace std;


void createMaze(int rows, int cols);
void displayMaze();
bool findFlag(int x, int y);

//char maze[40][40] = {
//	
//};

int mazeRows = 19;
int mazeCols = 19;

int startRow = 5;
int startCol = 4;

int flagRow = 5;
int flagCol = 5;

int main(void)
{
	srand(time(NULL)); //keeps things random -Foundation notes
	mazeGenerator mazeGenerator;
	creature creature;
	
	cout << "Enter the number of rows (positive interger < 40" << endl;
	cin >> mazeRows;
	mazeGenerator.setMazeRows(mazeRows);
	cout << "Enter the number of cols (positive interger < 40" << endl;
	cin >> mazeCols;
	mazeGenerator.setMazeCols(mazeCols);
	
	cout << "Enter the creature start row(contain it in the maze)" << endl;
	cin >> startRow;
	mazeGenerator.setStartRow(startRow-1);
	cout << "Enter the creature start col(contain it in the maze)" << endl;
	cin >> startCol;
	mazeGenerator.setStartCol(startCol-1);
	
	cout << "Enter the flag start row(contain it in the maze)" << endl;
	cin >> flagRow;
	mazeGenerator.setFlagRow(flagRow-1);
	cout << "Enter the flag start col(contain it in the maze)" << endl;
	cin >> flagCol;
	mazeGenerator.setFlagCol(flagCol-1);
	cout << "Generating solution...\n'S' is the start position, 'F' is the flag.\nThis may take a moment to generate a solveable maze" << endl;
	

	mazeGenerator.createMaze();

	do{
		srand(time(NULL)); //keeps things random -Foundation notes
		mazeGenerator.createMaze();
	} while (creature.findFlag(mazeGenerator, mazeGenerator.getStartRow(), mazeGenerator.getStartCol()) != 1);
	
	
	
	// need to make a loop te do maze if it doesn't make a path

	

	

	return 0;
}