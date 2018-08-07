#include "Face.h"

Face::Face(Color color, short position_x, short position_y)
{
	this->position_x = position_x;
	this->position_y = position_y;
	char value_sticker;
	switch (color)
	{
	case BLUE:
		value_sticker = 'B';
		break;
	case GREEN:
		value_sticker = 'G';
		break;
	case RED:
		value_sticker = 'R';
		break;
	case ORANGE:
		value_sticker = 'O';
		break;
	case YELLOW:
		value_sticker = 'Y';
		break;
	case WHITE:
		value_sticker = 'W';
		break;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			stickers[i][j] = value_sticker;
		}
	}
}


Face::~Face()
{
}

void Face::ReplaceUp(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		stickers[0][i] = sticker[i];
	}
}

void Face::ReplaceDown(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		stickers[2][i] = sticker[i];
	}
}

void Face::ReplaceLeft(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		stickers[i][0] = sticker[i];
	}
}

void Face::ReplaceRight(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		stickers[i][2] = sticker[i];
	}
}

void Face::ShowFace()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			PrintSticker(i, j);
		}
	}
}

void Face::GetUp(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		sticker[i] = stickers[0][i];
	}
}

void Face::GetDown(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		sticker[i] = stickers[2][i];
	}
}

void Face::GetLeft(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		sticker[i] = stickers[i][0];
	}
}

void Face::GetRight(char sticker[3])
{
	for (int i = 0; i < 3; i++)
	{
		sticker[i] = stickers[i][2];
	}
}


void Face::PrintSticker(int row, int col)
{
	Color color;
	switch (stickers[row][col])
	{
	case 'B':
		color = BLUE;
		break;
	case 'G':
		color = GREEN;
		break;
	case 'R':
		color = RED;
		break;
	case 'O':
		color = ORANGE;
		break;
	case 'Y':
		color = YELLOW;
		break;
	case 'W':
		color = WHITE;
		break;
	}
	setColor(color);
	gotoxy(position_x + col, position_y + row);
	cout << stickers[row][col];
}
