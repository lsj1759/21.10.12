#include "Goal.h"
#include <Windows.h>
#include <iostream>

using namespace std;

AGoal::AGoal()
{
}

AGoal::~AGoal()
{
}

void AGoal::Render()
{
	//��ġ����
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//��ġ����
	//���
	cout << "G" << endl;
}
