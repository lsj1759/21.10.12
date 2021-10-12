#include "World.h"
#include "Player.h"
#include "Floor.h"
#include "Goal.h"
#include "Wall.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	Term();
}

void UWorld::Init()
{
}

void UWorld::Term()
{
	for (size_t i = 0; i < Walls.size(); ++i)
	{
		if (Walls[i] != nullptr)
		{
			delete Walls[i];
			Walls[i] = nullptr;
		}
	}
	Walls.clear();

	for (size_t i = 0; i < Floors.size(); ++i)
	{
		if (Floors[i] != nullptr)
		{
			delete Floors[i];
			Floors[i] = nullptr;
		}
	}
	Floors.clear();

	if (Player != nullptr)
	{
		delete Player; //�÷��̾� �����Ͱ� ����ġ�� �޸� ������ ���� �ع�
		Player = nullptr;
	}

	if (Goal != nullptr)
	{
		delete Goal; //������ �����Ͱ� ����ġ�� �޸� ������ ���� �ع�
		Goal = nullptr;
	}
}

void UWorld::Run()
{
	while (true)
	{
		//Input
		//Tick
		//Render
		for (size_t i = 0; i < Walls.size(); ++i)
		{
			if (Walls[i] != nullptr)
			{
				Walls[i]->Render();
			}
		}

		for (size_t i = 0; i < Floors.size(); ++i)
		{
			if (Floors[i] != nullptr)
			{
				Floors[i]->Render();
			}
		}

		if (Player != nullptr)
		{
			Player->Render();
		}

		if (Goal != nullptr)
		{
			Goal->Render();
		}
	}
}
