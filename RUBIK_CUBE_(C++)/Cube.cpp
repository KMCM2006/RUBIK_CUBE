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
	clockwise(LEFT);

	faces[UP].GetLeft(up, 'C');
	faces[FRONT].GetLeft(right, 'C');
	faces[DOWN].GetLeft(down, 'C');
	faces[BACK].GetRight(left, 'I');

	faces[UP].ReplaceLeft(left, 'C');
	faces[FRONT].ReplaceLeft(up, 'C');
	faces[DOWN].ReplaceLeft(right, 'C');
	faces[BACK].ReplaceRight(down, 'I');
}

void Cube::LeftInverted()
{
	inverted(LEFT);

	faces[UP].GetLeft(up, 'I');
	faces[FRONT].GetLeft(right, 'I');
	faces[DOWN].GetLeft(down, 'I');
	faces[BACK].GetRight(left, 'C');

	faces[UP].ReplaceLeft(right, 'I');
	faces[FRONT].ReplaceLeft(down, 'I');
	faces[DOWN].ReplaceLeft(left, 'I');
	faces[BACK].ReplaceRight(up, 'C');
}

void Cube::FrontClockwise()
{
	clockwise(FRONT);

	faces[UP].GetDown(up, 'C');
	faces[RIGHT].GetLeft(right, 'C');
	faces[DOWN].GetUp(down, 'I');
	faces[LEFT].GetRight(left, 'I');

	faces[UP].ReplaceDown(left, 'C');
	faces[RIGHT].ReplaceLeft(up, 'C');
	faces[DOWN].ReplaceUp(right, 'I');
	faces[LEFT].ReplaceRight(down, 'I');
}

void Cube::FrontInverted()
{
	inverted(FRONT);

	faces[UP].GetDown(up, 'I');
	faces[RIGHT].GetLeft(right, 'I');
	faces[DOWN].GetUp(down, 'C');
	faces[LEFT].GetRight(left, 'C');

	faces[UP].ReplaceDown(right, 'I');
	faces[RIGHT].ReplaceLeft(down, 'I');
	faces[DOWN].ReplaceUp(left, 'C');
	faces[LEFT].ReplaceRight(up, 'C');
}

void Cube::RightClockwise()
{
	clockwise(RIGHT);

	faces[UP].GetRight(up, 'I');
	faces[BACK].GetLeft(right, 'C');
	faces[DOWN].GetRight(down, 'I');
	faces[FRONT].GetRight(left, 'I');

	faces[UP].ReplaceRight(left, 'I');
	faces[BACK].ReplaceLeft(up, 'C');
	faces[DOWN].ReplaceRight(right, 'I');
	faces[FRONT].ReplaceRight(down, 'I');
}

void Cube::RightInverted()
{
	inverted(RIGHT);

	faces[UP].GetRight(up, 'C');
	faces[BACK].GetLeft(right, 'I');
	faces[DOWN].GetRight(down, 'C');
	faces[FRONT].GetRight(left, 'C');

	faces[UP].ReplaceRight(right, 'C');
	faces[BACK].ReplaceLeft(down, 'I');
	faces[DOWN].ReplaceRight(left, 'C');
	faces[FRONT].ReplaceRight(up, 'C');
}

void Cube::BackClockwise()
{
	clockwise(BACK);

	faces[UP].GetUp(up, 'I');
	faces[LEFT].GetLeft(right, 'C');
	faces[DOWN].GetDown(down, 'C');
	faces[RIGHT].GetRight(left, 'I');

	faces[UP].ReplaceUp(left, 'I');
	faces[LEFT].ReplaceLeft(up, 'C');
	faces[DOWN].ReplaceDown(right, 'C');
	faces[RIGHT].ReplaceRight(down, 'I');
}

void Cube::BackInverted()
{
	inverted(BACK);

	faces[UP].GetUp(up, 'C');
	faces[LEFT].GetLeft(right, 'I');
	faces[DOWN].GetDown(down, 'I');
	faces[RIGHT].GetRight(left, 'C');

	faces[UP].ReplaceUp(right, 'C');
	faces[LEFT].ReplaceLeft(down, 'I');
	faces[DOWN].ReplaceDown(left, 'I');
	faces[RIGHT].ReplaceRight(up, 'C');
}

void Cube::UpClockwise()
{
	clockwise(UP);

	faces[BACK].GetUp(up, 'I');
	faces[RIGHT].GetUp(right, 'I');
	faces[FRONT].GetUp(down, 'I');
	faces[LEFT].GetUp(left, 'I');

	faces[BACK].ReplaceUp(left, 'I');
	faces[RIGHT].ReplaceUp(up, 'I');
	faces[FRONT].ReplaceUp(right, 'I');
	faces[LEFT].ReplaceUp(down, 'I');
}

void Cube::UpInverted()
{
	inverted(UP);

	faces[BACK].GetUp(up, 'C');
	faces[RIGHT].GetUp(right, 'C');
	faces[FRONT].GetUp(down, 'C');
	faces[LEFT].GetUp(left, 'C');

	faces[BACK].ReplaceUp(right, 'C');
	faces[RIGHT].ReplaceUp(down, 'C');
	faces[FRONT].ReplaceUp(left, 'C');
	faces[LEFT].ReplaceUp(up, 'C');
}

void Cube::DownClockwise()
{
	clockwise(DOWN);

	faces[FRONT].GetDown(up, 'C');
	faces[RIGHT].GetDown(right, 'C');
	faces[BACK].GetDown(down, 'C');
	faces[LEFT].GetDown(left, 'C');

	faces[FRONT].ReplaceDown(left, 'C');
	faces[RIGHT].ReplaceDown(up, 'C');
	faces[BACK].ReplaceDown(right, 'C');
	faces[LEFT].ReplaceDown(down, 'C');
}

void Cube::DownInverted()
{
	inverted(DOWN);

	faces[FRONT].GetDown(up, 'I');
	faces[RIGHT].GetDown(right, 'I');
	faces[BACK].GetDown(down, 'I');
	faces[LEFT].GetDown(left, 'I');

	faces[FRONT].ReplaceDown(right, 'I');
	faces[RIGHT].ReplaceDown(down, 'I');
	faces[BACK].ReplaceDown(left, 'I');
	faces[LEFT].ReplaceDown(up, 'I');
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

void Cube::clockwise(int face)
{
	faces[face].GetUp(up, 'C');
	faces[face].GetRight(right, 'C');
	faces[face].GetDown(down, 'I');
	faces[face].GetLeft(left, 'I');

	faces[face].ReplaceUp(left, 'C');
	faces[face].ReplaceRight(up, 'C');
	faces[face].ReplaceDown(right, 'I');
	faces[face].ReplaceLeft(down, 'I');
}

void Cube::inverted(int face)
{
	faces[face].GetUp(up, 'I');
	faces[face].GetRight(right, 'I');
	faces[face].GetDown(down, 'C');
	faces[face].GetLeft(left, 'C');

	faces[face].ReplaceUp(right, 'I');
	faces[face].ReplaceRight(down, 'I');
	faces[face].ReplaceDown(left, 'C');
	faces[face].ReplaceLeft(up, 'C');
}

