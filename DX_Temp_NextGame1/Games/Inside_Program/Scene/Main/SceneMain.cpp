#include "SceneMain.h"
#include"../../Object/UI/UI_File/UI_File.h"
#include"../../Object/Room/RoomViewer/RoomViewer.h"

SceneMain::SceneMain():m_pUI(nullptr),
m_pRoomViewer(nullptr)
{

}

SceneMain::~SceneMain()
{

}

void SceneMain::Init()
{
	m_pUI = std::make_shared<UI_File>();
	m_pUI->Init();

	m_pRoomViewer = std::make_shared<RoomViewer>();
	m_pRoomViewer->Init();
}

void SceneMain::End()
{
	m_pUI->End();
	m_pRoomViewer->End();
}

SceneManager::SceneKind SceneMain::Update()
{
	m_pUI->Update();
	m_pRoomViewer->Update();
	if (m_pUI->ClearTime() == true)
	{
		return SceneManager::SceneKind::kSceneClear;
	}
	return SceneManager::SceneKind::kSceneMain;
}

void SceneMain::Draw()
{
	m_pUI->Draw();
	m_pRoomViewer->Draw();
}
