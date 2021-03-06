#ifndef _MENU_H
#define _MENU_H

#include "Framework\timer.h"

enum E_Color
{
	E_LIGHTBLUE = 1,
	E_GREEN,
	E_PINK,
	E_YELLOW,
	MAX_COLOR
};

enum E_Squence
{
	E_MAINMENU,
	E_GAME,
	E_INSTRUCTION,
	E_HIGHSCORE,
	E_EXIT,
	MAX_STATES
};

void MainMenu();
void Instruction();
void Game();
void Game2();
void HighScore();
void QuitGame();
void ColorOptions();
void Options();
void HiScore(int);

#endif // _MENU_H