#pragma once

#include "Vector2D.h"
#include "Actor.h"

//Player is a Actor.
//Player has is a Vector2D.

class APlayer : public AActor //���
{
public:
	APlayer();
	~APlayer();

	virtual void Render() override; // �߰� �� �κ�
};

