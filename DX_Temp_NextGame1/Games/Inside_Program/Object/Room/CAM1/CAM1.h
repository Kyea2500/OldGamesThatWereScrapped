#pragma once
#include"../RoomBase.h"

class CAM1:public RoomBase
{
public:
	// �������Ƃ̋��ʏ���
	CAM1();
	~CAM1();
	void Init();
	RoomViewer::RoomKind Update()override;
	void Draw()override;
	const char* GetName()const override { return "CAM1"; }
};

