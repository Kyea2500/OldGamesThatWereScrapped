#pragma once
#include"../RoomBase.h"
class CAM2:public RoomBase
{
public:
	CAM2();
	~CAM2()override;
	void Init();
	RoomViewer::RoomKind Update()override;
	void Draw()override;
	const char* GetName()const override { return "CAM2"; }
};

