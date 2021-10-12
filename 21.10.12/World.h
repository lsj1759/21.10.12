#pragma once

#include <vector>
#include "Vector2D.h"
#include "Actor.h"
class APlayer;
class AFloor;
class AWall;
class AGoal;

class UWorld
{
public:
	UWorld();
	~UWorld();


	void Init();
	void Term();
	
	void Run();
	
	void AddPlayer(class APlayer* NewPlayer);
	void AddWall(class AWall* NewPlayer);
	void AddGoal(class AGoal* NewPlayer);
	void AddFloor(class AFloor* NewPlayer);

private:
	std::vector<AWall*> Walls;
	std::vector<AFloor*> Floors;
	
	APlayer* Player;
	AGoal* Goal;	
};


