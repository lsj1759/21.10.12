#include "Actor.h"
#include <iostream>

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
	cout << "Actor Render()" << endl;
}

void AActor::SetLocation(FVector2D NewLocation)
{
	Location.X = NewLocation.X;
	Location.Y = NewLocation.Y;

}

FVector2D AActor::GetLocation()
{
	return FVector2D();
}
