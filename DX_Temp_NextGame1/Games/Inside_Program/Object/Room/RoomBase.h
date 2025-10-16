#pragma once
#include"RoomViewer/RoomViewer.h"
class RoomBase
{
public:
	virtual ~RoomBase(){}
//	SceneManager::SceneKind SceneMain::Update();
	virtual RoomViewer::RoomKind Update() = 0;
	virtual void Draw() = 0;
	virtual const char* GetName() const = 0;
};

