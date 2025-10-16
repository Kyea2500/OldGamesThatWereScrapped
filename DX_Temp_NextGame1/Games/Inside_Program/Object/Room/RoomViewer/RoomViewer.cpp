#include "RoomViewer.h"
#include"../RoomBase.h"
#include"../CAM1/CAM1.h"
#include"../CAM2/CAM2.h"

RoomViewer::RoomViewer():m_RoomKind(kCAM1),
m_pCam1(nullptr),
m_pCam2(nullptr)
{
}

RoomViewer::~RoomViewer()
{
}

void RoomViewer::Init()
{
	// Še•”‰®‚Ì‰Šú‰»ˆ—
	switch (m_RoomKind)
	{
	case RoomKind::kCAM1:
		m_pCam1->Init();
		break;
	case RoomKind::kCAM2:
		m_pCam2->Init();
		break;
	default:
		break;
	}
}

void RoomViewer::End()
{

}

void RoomViewer::Update()
{

}

void RoomViewer::Draw()
{

}