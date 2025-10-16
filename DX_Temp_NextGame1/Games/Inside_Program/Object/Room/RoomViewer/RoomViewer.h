#pragma once
#include <memory>
class CAM1;
class CAM2;
class RoomViewer
{
public:
	RoomViewer();
	~RoomViewer();
	void Init();
	void End();
	void Update();
	void Draw();

public:
	enum RoomKind
	{
		kCAM1,
		kCAM2,
		kRoomNum
	};

private:
	RoomKind m_RoomKind;

	// 各部屋のポインタ
	CAM1* m_pCam1;
	CAM2* m_pCam2;
};