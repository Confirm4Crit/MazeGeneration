#pragma once
#include "mazeGenerator.h"
#include <iostream>

using namespace std;

class creature
{
public:
	friend class mazeGenerator;
	static bool findFlag(mazeGenerator maze, int x, int y);

private:
};