#include "Floor.h"
#include <Windows.h>
#include<iostream>
#define SUPER AActor //내용추가
using namespace std;

AFloor::AFloor()
{
}

AFloor::~AFloor()
{
}

void AFloor::Render()
{
	SUPER::Render();// 내용추가

	//출력
	cout << " " << endl; // 2D, 3D advanced
}
