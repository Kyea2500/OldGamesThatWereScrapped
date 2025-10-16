#pragma once
#include"../Manager/SceneManager.h"
class UI_File;
class RoomViewer;
class SceneMain
{
public:
	SceneMain();
	~SceneMain();
	void Init();
	void End();
	SceneManager::SceneKind Update();
	void Draw();
private:
	std::shared_ptr<UI_File> m_pUI;
	std::shared_ptr<RoomViewer> m_pRoomViewer;
};

