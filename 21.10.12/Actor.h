#pragma once
#include "Vector2D.h"

//��� X
//public: ��� ��� ����
//private: ���� ��� �����


//���
//public: ��� ��� ����, ��� ����
//private: ���� ��� �����, ��� ������
//protected: ���� ��� �����, ��� ����

//�������� �۾��Ѵ�.
//������ �ִ� class�߿��� ��� �� Ŭ������ ����
//��� �� class�� ��� �޾Ƽ� ���ϴ� class�� �����
//���� ���� class�� �� ��� ������ �߰�

class AActor
{
public:
	AActor();
	~AActor();

	void Inptu();
	void Tick();
	void Render();
	void SetLocation(FVector2D NewLocation);
	FVector2D GetLocation();

protected: // ��� ���� ��
	FVector2D Location;
};

