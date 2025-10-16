#pragma once
#include <memory>
class Time;
class UI_File
{
public:
	UI_File();
	~UI_File();
	void Init();
	void End();
	void Update();
	void Draw();
public:
	bool ClearTime();
private:
	std::shared_ptr<Time> m_pTime;
};

