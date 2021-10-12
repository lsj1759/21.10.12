#pragma once

#include "Vector2D.h"

class FVector2D;

class AWall
{
public:
	AWall();
	~AWall();
private:
	FVector2D Location;

	void Render();
};

