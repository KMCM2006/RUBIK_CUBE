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

void Face::SetUp(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		stickers[0][0] = sticker[0];
		stickers[0][1] = sticker[1];
		stickers[0][2] = sticker[2];
	}
	else
	{
		stickers[0][2] = sticker[0];
		stickers[0][1] = sticker[1];
		stickers[0][0] = sticker[2];
	}
}

void Face::SetDown(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		stickers[2][0] = sticker[0];
		stickers[2][1] = sticker[1];
		stickers[2][2] = sticker[2];
	}
	else
	{
		stickers[2][2] = sticker[0];
		stickers[2][1] = sticker[1];
		stickers[2][0] = sticker[2];
	}
}

void Face::SetLeft(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		stickers[0][0] = sticker[0];
		stickers[1][0] = sticker[1];
		stickers[2][0] = sticker[2];
	}
	else
	{
		stickers[2][0] = sticker[0];
		stickers[1][0] = sticker[1];
		stickers[0][0] = sticker[2];
	}
}

void Face::SetRight(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		stickers[0][2] = sticker[0];
		stickers[1][2] = sticker[1];
		stickers[2][2] = sticker[2];
	}
	else
	{
		stickers[2][2] = sticker[0];
		stickers[1][2] = sticker[1];
		stickers[0][2] = sticker[2];
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

void Face::GetUp(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		sticker[0] = stickers[0][0];
		sticker[1] = stickers[0][1];
		sticker[2] = stickers[0][2];
	}
	else
	{
		sticker[0] = stickers[0][2];
		sticker[1] = stickers[0][1];
		sticker[2] = stickers[0][0];
	}
}

void Face::GetDown(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		sticker[0] = stickers[2][0];
		sticker[1] = stickers[2][1];
		sticker[2] = stickers[2][2];
	}
	else
	{
		sticker[0] = stickers[2][2];
		sticker[1] = stickers[2][1];
		sticker[2] = stickers[2][0];
	}
}

void Face::GetLeft(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		sticker[0] = stickers[0][0];
		sticker[1] = stickers[1][0];
		sticker[2] = stickers[2][0];
	}
	else
	{
		sticker[0] = stickers[2][0];
		sticker[1] = stickers[1][0];
		sticker[2] = stickers[0][0];
	}
}

void Face::GetRight(char sticker[3], char rotation)
{
	if (rotation == 'C')
	{
		sticker[0] = stickers[0][2];
		sticker[1] = stickers[1][2];
		sticker[2] = stickers[2][2];
	}
	else
	{
		sticker[0] = stickers[2][2];
		sticker[1] = stickers[1][2];
		sticker[2] = stickers[0][2];
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
