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
	AActor::Render();


	//Ãâ·Â
	cout << "G" << endl;
}
