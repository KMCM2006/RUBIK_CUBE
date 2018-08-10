#include "Cube.h"

Cube::Cube():faces{ { ORANGE, 34, 5 }, { GREEN, 38, 5 }, { RED, 42, 5 }, { YELLOW, 46, 5 }, { WHITE, 38, 1 }, { BLUE, 38, 9 } }
{
}

Cube::~Cube()
{
}

void Cube::ShowCube()
{
	for (int i = 0; i < 6; i++)
	{
		faces[i].ShowFace();
	}
}

void Cube::LeftClockwise()
{
	Clockwise(LEFT);
	char rotations[4] = { 'C', 'C', 'C', 'I' };
	LeftGenericRotation(rotations);
	faces[UP].SetLeft(left, 'C');
	faces[FRONT].SetLeft(up, 'C');
	faces[DOWN].SetLeft(right, 'C');
	faces[BACK].SetRight(down, 'I');
}

void Cube::LeftInverted()
{
	Inverted(LEFT);
	char rotations[4] = { 'I', 'I', 'I', 'C' };
	LeftGenericRotation(rotations);
	faces[UP].SetLeft(right, 'I');
	faces[FRONT].SetLeft(down, 'I');
	faces[DOWN].SetLeft(left, 'I');
	faces[BACK].SetRight(up, 'C');
}

void Cube::FrontClockwise()
{
	Clockwise(FRONT);
	char rotations[4] = { 'C', 'C', 'I', 'I' };
	FrontGenericRotation(rotations);
	faces[UP].SetDown(left, 'C');
	faces[RIGHT].SetLeft(up, 'C');
	faces[DOWN].SetUp(right, 'I');
	faces[LEFT].SetRight(down, 'I');
}

void Cube::FrontInverted()
{
	Inverted(FRONT);
	char rotations[4] = { 'I', 'I', 'C', 'C' };
	FrontGenericRotation(rotations);
	faces[UP].SetDown(right, 'I');
	faces[RIGHT].SetLeft(down, 'I');
	faces[DOWN].SetUp(left, 'C');
	faces[LEFT].SetRight(up, 'C');
}

void Cube::RightClockwise()
{
	Clockwise(RIGHT);
	char rotations[4] = { 'I', 'C', 'I', 'I' };
	RightGenericRotation(rotations);
	faces[UP].SetRight(left, 'I');
	faces[BACK].SetLeft(up, 'C');
	faces[DOWN].SetRight(right, 'I');
	faces[FRONT].SetRight(down, 'I');
}

void Cube::RightInverted()
{
	Inverted(RIGHT);
	char rotations[4] = { 'C', 'I', 'C', 'C' };
	RightGenericRotation(rotations);
	faces[UP].SetRight(right, 'C');
	faces[BACK].SetLeft(down, 'I');
	faces[DOWN].SetRight(left, 'C');
	faces[FRONT].SetRight(up, 'C');
}

void Cube::BackClockwise()
{
	Clockwise(BACK);
	char rotations[4] = { 'I', 'C', 'C', 'I' };
	BackGenericRotation(rotations);
	faces[UP].SetUp(left, 'I');
	faces[LEFT].SetLeft(up, 'C');
	faces[DOWN].SetDown(right, 'C');
	faces[RIGHT].SetRight(down, 'I');
}

void Cube::BackInverted()
{
	Inverted(BACK);
	char rotations[4] = { 'C', 'I', 'I', 'C' };
	BackGenericRotation(rotations);
	faces[UP].SetUp(right, 'C');
	faces[LEFT].SetLeft(down, 'I');
	faces[DOWN].SetDown(left, 'I');
	faces[RIGHT].SetRight(up, 'C');
}

void Cube::UpClockwise()
{
	Clockwise(UP);
	char rotations[4] = { 'I', 'I', 'I', 'I' };
	UpGenericRotation(rotations);
	faces[BACK].SetUp(left, 'I');
	faces[RIGHT].SetUp(up, 'I');
	faces[FRONT].SetUp(right, 'I');
	faces[LEFT].SetUp(down, 'I');
}

void Cube::UpInverted()
{
	Inverted(UP);
	char rotations[4] = { 'C', 'C', 'C', 'C' };
	UpGenericRotation(rotations);
	faces[BACK].SetUp(right, 'C');
	faces[RIGHT].SetUp(down, 'C');
	faces[FRONT].SetUp(left, 'C');
	faces[LEFT].SetUp(up, 'C');
}

void Cube::DownClockwise()
{
	Clockwise(DOWN);
	char rotations[4] = { 'C', 'C', 'C', 'C' };
	DownGenericRotation(rotations);
	faces[FRONT].SetDown(left, 'C');
	faces[RIGHT].SetDown(up, 'C');
	faces[BACK].SetDown(right, 'C');
	faces[LEFT].SetDown(down, 'C');
}

void Cube::DownInverted()
{
	Inverted(DOWN);
	char rotations[4] = { 'I', 'I', 'I', 'I' };
	DownGenericRotation(rotations);
	faces[FRONT].SetDown(right, 'I');
	faces[RIGHT].SetDown(down, 'I');
	faces[BACK].SetDown(left, 'I');
	faces[LEFT].SetDown(up, 'I');
}

void Cube::main()
{
	int option;
	do
	{
		system("cls");
		ShowCube();
		setColor(WHITE);
		gotoxy(0, 0);
		cout << "1. LeftClockwise	(L)" << endl;
		cout << "2. LeftInverted		(L')" << endl;
		cout << "3. FrontClockwise	(F)" << endl;
		cout << "4. FrontInverted	(F')" << endl;
		cout << "5. RightClockwise	(R)" << endl;
		cout << "6. RightInverted	(R')" << endl;
		cout << "7. BackClockwise	(B)" << endl;
		cout << "8. BackInverted		(B')" << endl;
		cout << "9. UpClockwise		(U)" << endl;
		cout << "10. UpInverted		(U')" << endl;
		cout << "11. DownClockwise	(D)" << endl;
		cout << "12. DownInverted	(D')" << endl;
		cout << "13. Exit" << endl;
		cout << "Enter an option: "; cin >> option;
		switch (option)
		{
		case 1:
			LeftClockwise();
			break;
		case 2:
			LeftInverted();
			break;
		case 3:
			FrontClockwise();
			break;
		case 4:
			FrontInverted();
			break;
		case 5:
			RightClockwise();
			break;
		case 6:
			RightInverted();
			break;
		case 7:
			BackClockwise();
			break;
		case 8:
			BackInverted();
			break;
		case 9:
			UpClockwise();
			break;
		case 10:
			UpInverted();
			break;
		case 11:
			DownClockwise();
			break;
		case 12:
			DownInverted();
			break;
		case 13:
			cout << "GOOD BYE" << endl;
			system("pause");
			break;
		default:
			cout << "Ingrese una opcion valida" << endl;
			break;
		}
	}while (option != 13);

}

void Cube::Clockwise(int face)
{
	faces[face].GetUp(up, 'C');
	faces[face].GetRight(right, 'C');
	faces[face].GetDown(down, 'I');
	faces[face].GetLeft(left, 'I');

	faces[face].SetUp(left, 'C');
	faces[face].SetRight(up, 'C');
	faces[face].SetDown(right, 'I');
	faces[face].SetLeft(down, 'I');
}

void Cube::Inverted(int face)
{
	faces[face].GetUp(up, 'I');
	faces[face].GetRight(right, 'I');
	faces[face].GetDown(down, 'C');
	faces[face].GetLeft(left, 'C');

	faces[face].SetUp(right, 'I');
	faces[face].SetRight(down, 'I');
	faces[face].SetDown(left, 'C');
	faces[face].SetLeft(up, 'C');
}

void Cube::LeftGenericRotation(char rotations[4])
{
	faces[UP].GetLeft(up, rotations[0]);
	faces[FRONT].GetLeft(right, rotations[1]);
	faces[DOWN].GetLeft(down, rotations[2]);
	faces[BACK].GetRight(left, rotations[3]);
}

void Cube::FrontGenericRotation(char rotations[4])
{
	faces[UP].GetDown(up, rotations[0]);
	faces[RIGHT].GetLeft(right, rotations[1]);
	faces[DOWN].GetUp(down, rotations[2]);
	faces[LEFT].GetRight(left, rotations[3]);
}

void Cube::RightGenericRotation(char rotations[4])
{
	faces[UP].GetRight(up, rotations[0]);
	faces[BACK].GetLeft(right, rotations[1]);
	faces[DOWN].GetRight(down, rotations[2]);
	faces[FRONT].GetRight(left, rotations[3]);
}

void Cube::BackGenericRotation(char rotations[4])
{
	faces[UP].GetUp(up, rotations[0]);
	faces[LEFT].GetLeft(right, rotations[1]);
	faces[DOWN].GetDown(down, rotations[2]);
	faces[RIGHT].GetRight(left, rotations[3]);
}

void Cube::UpGenericRotation(char rotations[4])
{
	faces[BACK].GetUp(up, rotations[0]);
	faces[RIGHT].GetUp(right, rotations[1]);
	faces[FRONT].GetUp(down, rotations[2]);
	faces[LEFT].GetUp(left, rotations[3]);
}

void Cube::DownGenericRotation(char rotations[4])
{
	faces[FRONT].GetDown(up, rotations[0]);
	faces[RIGHT].GetDown(right, rotations[1]);
	faces[BACK].GetDown(down, rotations[2]);
	faces[LEFT].GetDown(left, rotations[3]);
}

