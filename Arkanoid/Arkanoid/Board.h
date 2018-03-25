#pragma once



struct Board
{
	
	Board **square;
	int rows, columns,bricks;
	char character;
	

	
	//methods
	void Initialize();							//initialize the dynamic 2D array
	void printBoard();							//prints the current state of the board

	
};




