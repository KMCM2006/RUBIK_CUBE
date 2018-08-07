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
	void ReplaceUp(char sticker[3]);
	void ReplaceDown(char sticker[3]);
	void ReplaceLeft(char sticker[3]);
	void ReplaceRight(char sticker[3]);
	void ShowFace();
	void GetUp(char sticker[3]);
	void GetDown(char sticker[3]);
	void GetLeft(char sticker[3]);
	void GetRight(char sticker[3]);
private:
	void PrintSticker(int row, int col);
private:
	char stickers[3][3];
	short position_x, position_y;
};

#endif // !FACE_H