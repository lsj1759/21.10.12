#include <string>
#include <iostream>
#include <fstream>
#include "Engine.h"
#include "World.h"
#include "Player.h"
#include "Floor.h"
#include "Goal.h"
#include "Wall.h"


using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::vector;


UEngine::UEngine()
{
	Init();
}

UEngine::~UEngine()
{
	Term();
}

void UEngine::Run()
{
	World->Run();
}

bool UEngine::LoadLevel(std::string filename)
{
	ifstream fin;
	string line;
	fin.open("map01.dat");

	if (!fin.is_open())
	{
		//cout << "Could not open the file -'"
		//	<< "map01.dat" << "'" << endl;
		return false;
	}

	int Y = 0;

	while (!fin.eof())
	{
		getline(fin, line);

		for (size_t X = 0; X < line.length(); ++X)
		{
			if (line[X] == '#')
			{
				SpawnWall(FVector2D(X, Y));
			}
			else if (line[X] == 'P')
			{
				SpawnPlayer(FVector2D(X, Y));
			}

			else if (line[X] == 'G')
			{
				SpawnGoal(FVector2D(X, Y));
			}
			else if (line[X] == ' ')
			{
				SpawnFloor(FVector2D(X, Y));
			}
		}
		/*cout << line[1] << endl;
		(line[1] == '#')*/
		{
			Y++;
		}

		/*cout << line << endl; */
	}
	fin.close();


	return true;
}

void UEngine::SpawnPlayer(FVector2D NewLocation)
{
	//积己
	APlayer* NewPlayer = new APlayer();
	NewPlayer->SetLocation(NewLocation);

	//历厘
	World->AddPlayer(NewPlayer);
}

void UEngine::SpawnWall(FVector2D NewLocation)
{
	//积己
	AWall* NewWall = new AWall();
	NewWall->SetLocation(NewLocation);

	//历厘
	World->AddWall(NewWall);
}

void UEngine::SpawnGoal(FVector2D NewLocation)
{
	//积己
	AGoal* NewGoal = new AGoal();
	NewGoal->SetLocation(NewLocation);

	//历厘
	World->AddGoal(NewGoal);
}

void UEngine::SpawnFloor(FVector2D NewLocation)
{
	//积己
	AFloor* NewFloor = new AFloor();
	NewFloor->SetLocation(NewLocation);

	//历厘
	World->AddFloor(NewFloor);
}

void UEngine::Init()
{
	World = new UWorld();
}

void UEngine::Term()
{
	if (World != nullptr)
	{
		delete World;
		World = nullptr;
	}
}

void UEngine::Input()
{
}

void UEngine::Tick()
{
}

void UEngine::Render()
{
}

