#ifndef FACE_H
#pragma once
#include "Tools.h"
#include <iostream>
using namespace std;
class Face
{
public:
	Face(Color color, short position_x, short position_y);
	~Face();
	void ReplaceUp(char sticker[3], char rotation);
	void ReplaceDown(char sticker[3], char rotation);
	void ReplaceLeft(char sticker[3], char rotation);
	void ReplaceRight(char sticker[3], char rotation);
	void ShowFace();
	void GetUp(char sticker[3], char rotation);
	void GetDown(char sticker[3], char rotation);
	void GetLeft(char sticker[3], char rotation);
	void GetRight(char sticker[3], char rotation);
private:
	void PrintSticker(int row, int col);
private:
	char stickers[3][3];
	short position_x, position_y;
};

#endif // !FACE_H