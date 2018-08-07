#ifndef TOOLS_H
#define TOOLS_H
#include <Windows.h>

#define LEFT 0
#define FRONT 1
#define RIGHT 2
#define BACK 3
#define UP 4
#define DOWN 5

enum Color {
	BLUE = 9,
	GREEN = 10,
	RED = 12,
	ORANGE = 6,
	YELLOW = 14, 
	WHITE = 15
};

inline void gotoxy(short x, short y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

inline void setColor(Color color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
#endif // !TOOLS_H

