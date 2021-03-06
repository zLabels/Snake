// This is the main file to hold everthing together

#include "Framework\timer.h"
#include "Framework\console.h"
#include "game.h"
#include "menu.h"

StopWatch g_timer;            // Timer function to keep track of time and the frame rate
bool GB_QuitGame = false;      // Set to true if you want to quit the game
bool GB_GameOver = false;
const unsigned char FPS = 5; // FPS of this game

void mainLoop();

// TODO:
// Bug in waitUnitil. it waits for the time from getElapsedTime to waitUntil, but should be insignificant.

int main()
{
	Init();				// initialize your variables
	while (!GB_QuitGame) // run this loop until user wants to quit 
	{
		MainMenu(); // runs the menu screen
	}
	ShutDown(); // do clean up, if any. free memory.

	return 0;
}

// This main loop calls functions to get input, update and render the game
// at a specific frame rate
/*void Game()
{
	int I_Current = 500;
	CreateSnake(3);
	cls();
	Map();
	g_timer.startTimer();	// Start timer to calculate how long it takes to render this frame
	while (!GB_GameOver)      // run this loop until user wants to quit
	{
		GetInput();							// get keyboard input
		I_Current = Update(g_timer.getElapsedTime());	// update the game
		Render();							 // render the graphics output to screen
		g_timer.waitUntil(I_Current/FPS);		 // Frame rate limiter. Limits each frame to a specified time in ms.      
	}
	HighScore();
	GG();
}*/
void Game2()
{
	int I_Current = 500;
	CreateSnake(3);
	CreateSnake2(3);
	cls();
	Map();
	g_timer.startTimer();	// Start timer to calculate how long it takes to render this frame
	while (!GB_GameOver)      // run this loop until user wants to quit
	{
		GetInput();
		GetInput2();							// get keyboard input
		I_Current = Update(g_timer.getElapsedTime());	// update the game
		Render();						// render the graphics output to screen
		g_timer.waitUntil(I_Current/FPS);		 // Frame rate limiter. Limits each frame to a specified time in ms.      
	}
	HighScore();
	GG();
	GG2();
}