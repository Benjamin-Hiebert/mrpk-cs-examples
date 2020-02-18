// This is sort of a written comment guide
// on how to approach the Diamond Lab

/* Step 1: Understand what is asked of you.

	Dr. Alnaji has asked you for a diamond shape that
	prints each star in multiple colors. To begin, I would
	start by writing all of the necessary includes and then
	creating your void or int main().

*/

#include <iostream> 
#include <Windows.h>
#include <time.h> 

using namespace std;

void main() {


}

/* Step 2: Break the problem into managable steps
	
	Start by analyzing what you are given. The code that Dr. 
	Alnaji provided prints a right triangle, essentially 1/4th
	of what your final diamond should look like. I've decided
	to start by turning the given code into a half diamond. After
	that I'll tackle replicating (inverting it) to finish my diamond.

	In this lab, you can copy paste his code in to see what it does
	or you could write your own version of his starting code.
	Since he gave you code, that usually a fine place to start.


*/
void main()
{

	int color;
	srand(time(NULL));
	for (int i = 1; i <= 6; i++)
	{
		// spaces loop
		for (int k = 1; k <= 6 - i; k++)
		{
			cout << " ";
		}
		// stars loop
		for (int j = 1; j <= i; j++)
		{
			color = rand() % 15 + 1;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
			cout << "*";
		}
		cout << endl;
	}

	cout << "Done!!" << endl;
}

/* Step 3: Pseudocode

	At this stage, I'll begin by writing any clarifying comments
	or pseudocode I feel might help me dechiper the algorithm
	necessary to create the shape I want.

*/
 // Increments number of rows 1-5 
for (int i = 1; i <= 6; i++)
{
	// print spaces(decreases per row, thus total rows - 1 per row (what row # we're on) )
	for (int k = 1; k <= 6 - i; k++)
	{
		cout << " ";
	}
	// grows per row, starting at 1 and then adding some stars per row
	for (int j = 1; j <= i; j++)
	{
		// I tackled the innovation immediately, but generally you should
		// finish the lab and then attempt the innovation. 
		color = rand() % 15 + 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // randomizing color
		cout << "*";
	}
	cout << endl; // move to next row
}

/* Step 4: Figuring Out the Top Triangle

	Now, I noticed that the top half of the triangle 
	simply required me to double the number of stars
	I was printing on every row except the first row 
	(since the first row should only have one star). 
	Since I've already written the pseudocode and figured 
	out what I think is a working algorithm, I'll write the code
	and then test it by running the program to see if I get a
	triangle resembling a half diamond.
*/

// Increments number of rows 1-5 
for (int i = 1; i <= 6; i++)
{
	// print spaces(decreases per row, thus total rows - 1 per row (what row # we're on) )
	for (int k = 1; k <= 6 - i; k++)
	{
		cout << " ";
	}
	// grows per row, starting at 1 and then adding some stars per row
	for (int j = 1; j <=  (i * 2) - 1; j++)
	{
		// I tackled the innovation immediately, but generally you should
		// finish the lab and then attempt the innovation. 
		color = rand() % 15 + 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // randomizing color
		cout << "*";
	}
	cout << endl; // move to next row
}


/* Step 5: Inverting it for the Bottom Triangle

	Now that my top half of the triangle is exactly what I
	wanted, I need to turn my attention to replicating it
	minus one row so that I can finish my diamond. To do this,
	I modify my outermost for loop (for rows) to run one less time
	than before. Since my stars and spaces loop are also dependant
	on this outer loop, I also invert it so that it inverts the shape.

*/

// Increments number of rows 1-5 
for (int i = 6; i <= 1; i--)
{
	// print spaces(decreases per row, thus total rows - 1 per row (what row # we're on) )
	for (int k = 1; k <= 6 - i; k++)
	{
		cout << " ";
	}
	// grows per row, starting at 1 and then adding some stars per row
	for (int j = 1; j <= (i * 2) - 1; j++)
	{
		// I tackled the innovation immediately, but generally you should
		// finish the lab and then attempt the innovation. 
		color = rand() % 15 + 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // randomizing color
		cout << "*";
	}
	cout << endl; // move to next row
}

/* Step 6: Code Style and Innovation
 
	Once you've tested your code and it outputs everything 
	as expected you can begin attempting the innovation.
	Afterwards, remember to properly style your code with 
	comments. In the finished file I'll include seperately,
	my code is overly commented and my variables are named
	so that you can easily recognize what is going on. 
	Generally in for loops, you can use single letter variable names
	like x or i. That is totally fine and up to you. 
*/


/* A Note on Trial and Error:

	In my view, working with your own code is about targeted trial and error
	or "intelligent guessing". Basically you're writing code that you think 
	will work, and then attempting to fix it when it does not. When this happens,
	(and it will), spend some time analyzing what went wrong (through
	tests like using a debugger), what exactly is offabout the code you attempted and 
	then try writing an updated version based on what you learned went wrong. 

	Each pass through of your code should be a new trial of something you expect to work
	or at least expect to teach you something about the types of errors you are making.
	And if all else fails, try a shot in the dark. See if you can break your code in a way
	that helps you understand it, but only do this if you are absolutely sure nothing else
	is working and you're completely lost.

*/