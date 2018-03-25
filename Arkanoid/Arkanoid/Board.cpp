#include "Board.h"
#include <iostream>
#include <fstream>

void Board::Initialize() {

	std::ifstream readFile("config.txt");

	if (readFile.is_open())	{										//Read config.txt file
		readFile >> rows >> columns >> bricks;
		readFile.close();
	}

	square = new Board*[rows];
	for (int i = 0; i < rows; ++i) {
		square[i] = new Board[columns];
	}
}

void Board::printBoard() {

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << square[i][j].character << std::endl;
		}
	}
}

