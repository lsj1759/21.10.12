#include "Floor.h"
#include <Windows.h>
#include<iostream>

using namespace std;

AFloor::AFloor()
{
}

AFloor::~AFloor()
{
}

void AFloor::Render()
{
	//��ġ����
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//��ġ����
	//���
	cout << " " << endl; // 2D, 3D advanced
}
