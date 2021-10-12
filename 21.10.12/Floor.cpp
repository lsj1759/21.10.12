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
	//위치지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//위치지정
	//출력
	cout << " " << endl; // 2D, 3D advanced
}
