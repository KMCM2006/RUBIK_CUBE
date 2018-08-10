#include "Face.h"

Face::Face(Color color, short position_x, short position_y)
{
	this->position_x = position_x;
	this->position_y = position_y;
	char value_piece;
	switch (color)
	{
	case BLUE:
		value_piece = 'B';
		break;
	case GREEN:
		value_piece = 'G';
		break;
	case RED:
		value_piece = 'R';
		break;
	case ORANGE:
		value_piece = 'O';
		break;
	case YELLOW:
		value_piece = 'Y';
		break;
	case WHITE:
		value_piece = 'W';
		break;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			pieces[i][j] = value_piece;
		}
	}
}


Face::~Face()
{
}

void Face::SetUp(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		pieces[0][0] = _pieces[0];
		pieces[0][1] = _pieces[1];
		pieces[0][2] = _pieces[2];
	}
	else
	{
		pieces[0][2] = _pieces[0];
		pieces[0][1] = _pieces[1];
		pieces[0][0] = _pieces[2];
	}
}

void Face::SetDown(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		pieces[2][0] = _pieces[0];
		pieces[2][1] = _pieces[1];
		pieces[2][2] = _pieces[2];
	}
	else
	{
		pieces[2][2] = _pieces[0];
		pieces[2][1] = _pieces[1];
		pieces[2][0] = _pieces[2];
	}
}

void Face::SetLeft(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		pieces[0][0] = _pieces[0];
		pieces[1][0] = _pieces[1];
		pieces[2][0] = _pieces[2];
	}
	else
	{
		pieces[2][0] = _pieces[0];
		pieces[1][0] = _pieces[1];
		pieces[0][0] = _pieces[2];
	}
}

void Face::SetRight(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		pieces[0][2] = _pieces[0];
		pieces[1][2] = _pieces[1];
		pieces[2][2] = _pieces[2];
	}
	else
	{
		pieces[2][2] = _pieces[0];
		pieces[1][2] = _pieces[1];
		pieces[0][2] = _pieces[2];
	}
}

void Face::ShowFace()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			PrintPiece(i, j);
		}
	}
}

void Face::GetUp(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		_pieces[0] = pieces[0][0];
		_pieces[1] = pieces[0][1];
		_pieces[2] = pieces[0][2];
	}
	else
	{
		_pieces[0] = pieces[0][2];
		_pieces[1] = pieces[0][1];
		_pieces[2] = pieces[0][0];
	}
}

void Face::GetDown(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		_pieces[0] = pieces[2][0];
		_pieces[1] = pieces[2][1];
		_pieces[2] = pieces[2][2];
	}
	else
	{
		_pieces[0] = pieces[2][2];
		_pieces[1] = pieces[2][1];
		_pieces[2] = pieces[2][0];
	}
}

void Face::GetLeft(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		_pieces[0] = pieces[0][0];
		_pieces[1] = pieces[1][0];
		_pieces[2] = pieces[2][0];
	}
	else
	{
		_pieces[0] = pieces[2][0];
		_pieces[1] = pieces[1][0];
		_pieces[2] = pieces[0][0];
	}
}

void Face::GetRight(char _pieces[3], char rotation)
{
	if (rotation == 'C')
	{
		_pieces[0] = pieces[0][2];
		_pieces[1] = pieces[1][2];
		_pieces[2] = pieces[2][2];
	}
	else
	{
		_pieces[0] = pieces[2][2];
		_pieces[1] = pieces[1][2];
		_pieces[2] = pieces[0][2];
	}
}


void Face::PrintPiece(int row, int col)
{
	Color color;
	switch (pieces[row][col])
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
	cout << pieces[row][col];
}
