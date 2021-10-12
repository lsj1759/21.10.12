#include "Player.h"
#include <iostream>
#include <Windows.h>

using namespace std;

APlayer::APlayer()
{
}

APlayer::~APlayer()
{
}

//void APlayer::Input()
//{
//}

void APlayer::Render()
{
	//위치지정
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//출력
	cout << "P" << endl;
}

//void APlayer::Tick()
//{
//}
