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
	//��ġ����
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//���
	cout << "P" << endl;
}

//void APlayer::Tick()
//{
//}
