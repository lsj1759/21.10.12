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


	//���
	cout << "G" << endl;
}
