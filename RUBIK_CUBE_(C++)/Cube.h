#ifndef CUBE_H
#pragma once
#include "Face.h"
class Cube
{
public:
	Cube();
	~Cube();
	void ShowCube();
	void LeftClockwise();
	void LeftInverted();
	void FrontClockwise();
	void FrontInverted();
	void RightClockwise();
	void RightInverted();
	void BackClockwise();
	void BackInverted();
	void UpClockwise();
	void UpInverted();
	void DownClockwise();
	void DownInverted();
	void main();
private:
	void clockwise(int face);
	void inverted(int face);
private:
	Face faces[6];
};

#endif // !CUBE_H