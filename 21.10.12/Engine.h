#pragma once
class UEngine
{
public:
	UEngine();
	~UEngine();

	void Run();
private:
	bool bIsRunning = false;

	void Init();
	void Term();


	void Input();
	void Tick();
	void Render();

	class UWorld* World;
};

