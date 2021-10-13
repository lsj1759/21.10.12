#include "Actor.h"
#include <iostream>
#include <Windows.h>

using namespace std;

AActor::AActor()
{
	
}

AActor::~AActor()
{
}

void AActor::Inptu()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
	/*cout << "Actor Render()" << endl;*/
	COORD Cur;
	Cur.X = Location.X;
	Cur.Y = Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void AActor::SetLocation(FVector2D NewLocation)
{
	Location.X = NewLocation.X;
	Location.Y = NewLocation.Y;

}

FVector2D AActor::GetLocation()
{
	return Location;
}
