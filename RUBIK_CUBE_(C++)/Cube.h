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
	void Clockwise(int face);
	void Inverted(int face);
	void LeftGenericRotation(char rotations[4]);
	void FrontGenericRotation(char rotations[4]);
	void RightGenericRotation(char rotations[4]);
	void BackGenericRotation(char rotations[4]);
	void UpGenericRotation(char rotations[4]);
	void DownGenericRotation(char rotations[4]);
private:
	Face faces[6];
	char up[3], right[3], down[3], left[3];
};

#endif // !CUBE_H