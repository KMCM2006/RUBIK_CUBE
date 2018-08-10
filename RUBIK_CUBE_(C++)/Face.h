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
	void SetUp(char _pieces[3], char rotation);
	void SetDown(char _pieces[3], char rotation);
	void SetLeft(char _pieces[3], char rotation);
	void SetRight(char _pieces[3], char rotation);
	void ShowFace();
	void GetUp(char _pieces[3], char rotation);
	void GetDown(char _pieces[3], char rotation);
	void GetLeft(char _pieces[3], char rotation);
	void GetRight(char _pieces[3], char rotation);
private:
	void PrintPiece(int row, int col);
private:
	char pieces[3][3];
	short position_x, position_y;
};

#endif // !FACE_H