#include "Floor.h"
#include <Windows.h>
#include<iostream>
#define SUPER AActor
using namespace std;

AFloor::AFloor()
{
}

AFloor::~AFloor()
{
}

void AFloor::Render()
{
	SUPER::Render();

	//Ãâ·Â
	cout << " " << endl; // 2D, 3D advanced
}
