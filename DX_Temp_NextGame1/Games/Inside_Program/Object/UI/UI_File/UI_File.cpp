#include "UI_File.h"
#include"../Time/Time.h"

UI_File::UI_File(): m_pTime(nullptr)
{
}

UI_File::~UI_File()
{
}

void UI_File::Init()
{
	m_pTime = std::make_shared <Time>();
	m_pTime->Init();
}

void UI_File::End()
{
	m_pTime->End();
}

void UI_File::Update()
{
	m_pTime->Update();
}

void UI_File::Draw()
{
	m_pTime->Draw();
}

bool UI_File::ClearTime()
{
	return m_pTime->CountEnd();
}
