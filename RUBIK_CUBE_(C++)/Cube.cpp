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
		cout << endl << endl;
	}
}

void Cube::LeftClockwise()
{
	char up[3], right[3], down[3], left[3];

	faces[LEFT].GetUp(up);
	faces[LEFT].GetRight(right);
	faces[LEFT].GetDown(down);
	faces[LEFT].GetLeft(left);
	
	faces[LEFT].ReplaceUp(left);
	faces[LEFT].ReplaceRight(up);
	faces[LEFT].ReplaceDown(right);
	faces[LEFT].ReplaceLeft(down);

	faces[UP].GetLeft(up);
	faces[FRONT].GetLeft(right);
	faces[DOWN].GetLeft(down);
	faces[BACK].GetRight(left);

	faces[UP].ReplaceLeft(left);
	faces[FRONT].ReplaceLeft(up);
	faces[DOWN].ReplaceLeft(right);
	faces[BACK].ReplaceRight(down);
}

void Cube::LeftInverted()
{
	char up[3], right[3], down[3], left[3];

	faces[LEFT].GetUp(up);
	faces[LEFT].GetRight(right);
	faces[LEFT].GetDown(down);
	faces[LEFT].GetLeft(left);

	faces[LEFT].ReplaceUp(right);
	faces[LEFT].ReplaceRight(down);
	faces[LEFT].ReplaceDown(left);
	faces[LEFT].ReplaceLeft(up);

	faces[UP].GetLeft(up);
	faces[FRONT].GetLeft(right);
	faces[DOWN].GetLeft(down);
	faces[BACK].GetRight(left);

	faces[UP].ReplaceLeft(right);
	faces[FRONT].ReplaceLeft(down);
	faces[DOWN].ReplaceLeft(left);
	faces[BACK].ReplaceRight(up);
}

void Cube::FrontClockwise()
{
	char up[3], right[3], down[3], left[3];

	faces[FRONT].GetUp(up);
	faces[FRONT].GetRight(right);
	faces[FRONT].GetDown(down);
	faces[FRONT].GetLeft(left);

	faces[FRONT].ReplaceUp(left);
	faces[FRONT].ReplaceRight(up);
	faces[FRONT].ReplaceDown(right);
	faces[FRONT].ReplaceLeft(down);

	faces[UP].GetDown(up);
	faces[RIGHT].GetLeft(right);
	faces[DOWN].GetUp(down);
	faces[LEFT].GetRight(left);

	faces[UP].ReplaceDown(left);
	faces[RIGHT].ReplaceLeft(up);
	faces[DOWN].ReplaceUp(right);
	faces[LEFT].ReplaceRight(down);
}

void Cube::FrontInverted()
{
	char up[3], right[3], down[3], left[3];

	faces[FRONT].GetUp(up);
	faces[FRONT].GetRight(right);
	faces[FRONT].GetDown(down);
	faces[FRONT].GetLeft(left);

	faces[FRONT].ReplaceUp(right);
	faces[FRONT].ReplaceRight(down);
	faces[FRONT].ReplaceDown(left);
	faces[FRONT].ReplaceLeft(up);

	faces[UP].GetDown(up);
	faces[RIGHT].GetLeft(right);
	faces[DOWN].GetUp(down);
	faces[LEFT].GetRight(left);

	faces[UP].ReplaceDown(right);
	faces[RIGHT].ReplaceLeft(down);
	faces[DOWN].ReplaceUp(left);
	faces[LEFT].ReplaceRight(up);
}

void Cube::RightClockwise()
{
	char up[3], right[3], down[3], left[3];

	faces[RIGHT].GetUp(up);
	faces[RIGHT].GetRight(right);
	faces[RIGHT].GetDown(down);
	faces[RIGHT].GetLeft(left);

	faces[RIGHT].ReplaceUp(left);
	faces[RIGHT].ReplaceRight(up);
	faces[RIGHT].ReplaceDown(right);
	faces[RIGHT].ReplaceLeft(down);

	faces[UP].GetDown(up);
	faces[BACK].GetLeft(right);
	faces[DOWN].GetUp(down);
	faces[FRONT].GetRight(left);

	faces[UP].ReplaceDown(left);
	faces[BACK].ReplaceLeft(up);
	faces[DOWN].ReplaceUp(right);
	faces[FRONT].ReplaceRight(down);
}

void Cube::RightInverted()
{
	char up[3], right[3], down[3], left[3];

	faces[RIGHT].GetUp(up);
	faces[RIGHT].GetRight(right);
	faces[RIGHT].GetDown(down);
	faces[RIGHT].GetLeft(left);

	faces[RIGHT].ReplaceUp(right);
	faces[RIGHT].ReplaceRight(down);
	faces[RIGHT].ReplaceDown(left);
	faces[RIGHT].ReplaceLeft(up);

	faces[UP].GetRight(up);
	faces[BACK].GetLeft(right);
	faces[DOWN].GetRight(down);
	faces[FRONT].GetRight(left);

	faces[UP].ReplaceRight(right);
	faces[BACK].ReplaceLeft(down);
	faces[DOWN].ReplaceRight(left);
	faces[FRONT].ReplaceRight(up);
}

void Cube::BackClockwise()
{
	char up[3], right[3], down[3], left[3];

	faces[BACK].GetUp(up);
	faces[BACK].GetRight(right);
	faces[BACK].GetDown(down);
	faces[BACK].GetLeft(left);

	faces[BACK].ReplaceUp(left);
	faces[BACK].ReplaceRight(up);
	faces[BACK].ReplaceDown(right);
	faces[BACK].ReplaceLeft(down);

	faces[UP].GetUp(up);
	faces[LEFT].GetLeft(right);
	faces[DOWN].GetDown(down);
	faces[RIGHT].GetRight(left);

	faces[UP].ReplaceUp(left);
	faces[LEFT].ReplaceLeft(up);
	faces[DOWN].ReplaceDown(right);
	faces[RIGHT].ReplaceRight(down);
}

void Cube::BackInverted()
{
	char up[3], right[3], down[3], left[3];

	faces[BACK].GetUp(up);
	faces[BACK].GetRight(right);
	faces[BACK].GetDown(down);
	faces[BACK].GetLeft(left);

	faces[BACK].ReplaceUp(right);
	faces[BACK].ReplaceRight(down);
	faces[BACK].ReplaceDown(left);
	faces[BACK].ReplaceLeft(up);

	faces[UP].GetUp(up);
	faces[LEFT].GetLeft(right);
	faces[DOWN].GetDown(down);
	faces[RIGHT].GetRight(left);

	faces[UP].ReplaceUp(right);
	faces[LEFT].ReplaceLeft(down);
	faces[DOWN].ReplaceDown(left);
	faces[RIGHT].ReplaceRight(up);
}

void Cube::UpClockwise()
{
	char up[3], right[3], down[3], left[3];

	faces[UP].GetUp(up);
	faces[UP].GetRight(right);
	faces[UP].GetDown(down);
	faces[UP].GetLeft(left);

	faces[UP].ReplaceUp(left);
	faces[UP].ReplaceRight(up);
	faces[UP].ReplaceDown(right);
	faces[UP].ReplaceLeft(down);

	faces[BACK].GetUp(up);
	faces[RIGHT].GetUp(right);
	faces[FRONT].GetUp(down);
	faces[LEFT].GetUp(left);

	faces[BACK].ReplaceUp(left);
	faces[RIGHT].ReplaceUp(up);
	faces[FRONT].ReplaceUp(right);
	faces[LEFT].ReplaceUp(down);
}

void Cube::UpInverted()
{
	char up[3], right[3], down[3], left[3];

	faces[UP].GetUp(up);
	faces[UP].GetRight(right);
	faces[UP].GetDown(down);
	faces[UP].GetLeft(left);

	faces[UP].ReplaceUp(right);
	faces[UP].ReplaceRight(down);
	faces[UP].ReplaceDown(left);
	faces[UP].ReplaceLeft(up);

	faces[BACK].GetUp(up);
	faces[RIGHT].GetUp(right);
	faces[FRONT].GetUp(down);
	faces[LEFT].GetUp(left);

	faces[BACK].ReplaceUp(right);
	faces[RIGHT].ReplaceUp(down);
	faces[FRONT].ReplaceUp(left);
	faces[LEFT].ReplaceUp(up);
}

void Cube::DownClockwise()
{
	char up[3], right[3], down[3], left[3];

	faces[DOWN].GetUp(up);
	faces[DOWN].GetRight(right);
	faces[DOWN].GetDown(down);
	faces[DOWN].GetLeft(left);

	faces[DOWN].ReplaceUp(left);
	faces[DOWN].ReplaceRight(up);
	faces[DOWN].ReplaceDown(right);
	faces[DOWN].ReplaceLeft(down);

	faces[FRONT].GetDown(up);
	faces[RIGHT].GetDown(right);
	faces[BACK].GetDown(down);
	faces[LEFT].GetDown(left);

	faces[FRONT].ReplaceDown(left);
	faces[RIGHT].ReplaceDown(up);
	faces[BACK].ReplaceDown(right);
	faces[LEFT].ReplaceDown(down);
}

void Cube::DownInverted()
{
	char up[3], right[3], down[3], left[3];

	faces[DOWN].GetUp(up);
	faces[DOWN].GetRight(right);
	faces[DOWN].GetDown(down);
	faces[DOWN].GetLeft(left);

	faces[DOWN].ReplaceUp(right);
	faces[DOWN].ReplaceRight(down);
	faces[DOWN].ReplaceDown(left);
	faces[DOWN].ReplaceLeft(up);

	faces[FRONT].GetDown(up);
	faces[RIGHT].GetDown(right);
	faces[BACK].GetDown(down);
	faces[LEFT].GetDown(left);

	faces[FRONT].ReplaceDown(right);
	faces[RIGHT].ReplaceDown(down);
	faces[BACK].ReplaceDown(left);
	faces[LEFT].ReplaceDown(up);
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
		cout << "1. LeftClockwise(L)" << endl;
		cout << "2. LeftInverted(L')" << endl;
		cout << "3. FrontClockwise(F)" << endl;
		cout << "4. FrontInverted(F')" << endl;
		cout << "5. RightClockwise(R)" << endl;
		cout << "6. RightInverted(R')" << endl;
		cout << "7. BackClockwise(B)" << endl;
		cout << "8. BackInverted(B')" << endl;
		cout << "9. UpClockwise(U)" << endl;
		cout << "10. UpInverted(U')" << endl;
		cout << "11. DownClockwise(D)" << endl;
		cout << "12. DownInverted(D')" << endl;
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
