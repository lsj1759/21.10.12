#include "Wall.h"
#include <iostream>
#include <Windows.h>

using namespace std;

AWall::AWall()
{
}

AWall::~AWall()
{
}

void AWall::Render()
{
	AActor::Render();

	cout << "#" << endl;
	////��ġ����
	//COORD Cur;
	//Cur.X = Location.X;
	//Cur.Y = Location.Y;
	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	////���
	//cout << "#" << endl;

}

//void AWall::SetLocation(FVector2D NewLocation)
//{
//	Location.X = NewLocation.X;
//	Location.Y = NewLocation.Y;
//}
