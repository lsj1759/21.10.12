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
	AActor::Render();

	//Ãâ·Â
	cout << "P" << endl;
}

//void APlayer::Tick()
//{
//}
