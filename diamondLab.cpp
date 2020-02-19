#include <iostream> // for cout
#include <Windows.h> // for changing color
#include <time.h> // for randomization

using namespace std; // standard namespace
/*
This is my guide for the dimaond lab. My approach was to think of each row
based on how many stars and spaces I would need to fill it.

To make it more obvious what everything is, I decided to not use single letter
variables in my for loops.

*/

void main()
{

	int color;
	int numberOfRows = 5; // how big do we want the diamond to be

	srand(time(NULL));

	for (int currentRow = 0; currentRow <= numberOfRows; currentRow++)
	{
		// print spaces (decreases per row, thus numberOfRows - current row count)
		for (int numSpaces = 0; numSpaces <= numberOfRows - currentRow; numSpaces++)
		{
			cout << " ";			// I prefer all of my for loops to use {} since they're needed for loops with 2+ lines anyways
		}
		// print stars (current row * 2) - 1 gives you 1 star on the first row and the correct
		// number of stars on the remaining rows
		for (int numStars = 1; numStars <= (currentRow * 2) - 1; numStars++)
		{
			color = rand() % 15 + 1; // randomize color
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // set console text color
			cout << "*";
		}
		cout << endl; // move to next row
	}

	// Bottom half of the diamond

	// starts at numRows - 1, because we're working backwards (but also - 1 row because we aren't printing the previous row again)
	for (int currentRow = numberOfRows - 1; currentRow >= 0; currentRow--)
	{
		// same as inner loop because we're already inverting the outer for loop
		for (int numSpaces = 0; numSpaces <= numberOfRows - currentRow; numSpaces++)
		{
			cout << " ";
		}
		// same as original loop because we're already inverting the outer for loop
		for (int numStars = 1; numStars <= (currentRow * 2) - 1; numStars++)
		{
			color = rand() % 15 + 1;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			cout << "*";
		}
		cout << endl; // move to next row
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // set console color back to white
	cout << "Done!!" << endl;
}
