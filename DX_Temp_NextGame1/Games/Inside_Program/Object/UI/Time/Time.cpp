#include"Time.h"
#include"../../../Outside_Program/Library/DX_Files_VC/DxLib.h"
#include"../../../Dive/game.h"

namespace
{
	constexpr float kMaxCountSec = 10.0f;
	constexpr int kMaxCountMin = 30;
	constexpr int kClearCount = 6;
	constexpr int kTextPosX = Game::kScreenWidth-150;
	constexpr int kTextPosY = 50;
}

Time::Time() :m_Count(0.0f),
m_InternalMin(0.0f),
m_OpenHou(0)
{

}

Time::~Time()
{

}

void Time::Init()
{
	m_Count = 0.0f;
	m_InternalMin = 0;
	m_OpenHou = 0;
}

void Time::End()
{

}

void Time::Update()
{
	m_Count++;
	if(m_Count >= kMaxCountSec)
	{
		m_InternalMin++;
		m_Count = 0.0f;
		if(m_InternalMin >= kMaxCountMin)
		{
			m_OpenHou++;
			m_InternalMin = 0;
			if(m_OpenHou >= kClearCount)
			{
				m_CauntAll = true;
			}
		}
	}
}

void Time::Draw()
{
	if (m_OpenHou == 0)
	{
		DrawFormatString(kTextPosX, kTextPosY, 0xffffff, "12 PM");
	}
	else
	{
		DrawFormatString(kTextPosX, kTextPosY, 0xffffff, "%d AM", m_OpenHou);
	}

}