#include "SceneManager.h"
#include "../Title/SceneTitle.h"
#include "../Main/SceneMain.h"
#include "../GameOver/SceneGameOver.h"
#include"../Clear/SceneClear.h"
#include"../../../Outside_Program/Library/DX_Files_VC/DxLib.h"

SceneManager::SceneManager() :
	m_Kind(kSceneMain), // �����V�[�����^�C�g���ɐݒ�
	m_pSceneTitle(nullptr), // �^�C�g���V�[���̃|�C���^��������
	m_pSceneMain(nullptr),  // ���C���V�[���̃|�C���^��������
	m_pSceneClear(nullptr),
	m_pSceneGameOver(nullptr) // �Q�[���I�[�o�[�V�[���̃|�C���^��������
{
}

SceneManager::~SceneManager()
{
	// �e�V�[���̃|�C���^�����
	if (m_pSceneTitle != nullptr)
	{
		m_pSceneTitle = nullptr;
		delete m_pSceneTitle;
	}
	else if (m_pSceneMain != nullptr)
	{
		m_pSceneMain = nullptr;
		delete m_pSceneMain;
	}
	else if (m_pSceneClear != nullptr)
	{
		m_pSceneClear = nullptr;
		delete m_pSceneClear;
	}
	else if (m_pSceneGameOver != nullptr)
	{
		m_pSceneGameOver = nullptr;
		delete m_pSceneGameOver;
	}

}

void SceneManager::Init()
{
	// �V�[���̏�����
	switch (m_Kind)
	{
	case SceneKind::kSceneTitle:
		m_pSceneTitle = new SceneTitle();
		m_pSceneTitle->Init();
		break;
	case SceneKind::kSceneMain:
		m_pSceneMain = new SceneMain();
		m_pSceneMain->Init();
		break;
	case SceneKind::kSceneClear:
		m_pSceneClear = new SceneClear();
		m_pSceneClear->Init();
	case SceneKind::kSceneGameOver:
		m_pSceneGameOver = new SceneGameOver();
		m_pSceneGameOver->Init();
		break;
	default:
		break;
	}
}

void SceneManager::End()
{// �V�[���̏I������
	switch (m_Kind)
	{
	case SceneKind::kSceneTitle:
		m_pSceneTitle->End();
		delete m_pSceneTitle;
		m_pSceneTitle = nullptr;
		break;
	case SceneKind::kSceneMain:
		m_pSceneMain->End();
		delete m_pSceneMain;
		m_pSceneMain = nullptr;
		break;
	case SceneKind::kSceneClear:
		m_pSceneClear->End();
		delete m_pSceneClear;
		m_pSceneClear = nullptr;
	case SceneKind::kSceneGameOver:
		m_pSceneGameOver->End();
		delete m_pSceneGameOver;
		m_pSceneGameOver = nullptr;
		break;
	default:
		break;
	}
}

void SceneManager::Update()
{
	/*Pad::Update();*/
	SceneKind nextKind = m_Kind;
	// �V�[���̍X�V
	switch (m_Kind)
	{
	case SceneKind::kSceneTitle:
		nextKind = m_pSceneTitle->Update();
		break;
	case SceneKind::kSceneMain:
		nextKind = m_pSceneMain->Update();
		break;
	case SceneKind::kSceneClear:
		nextKind = m_pSceneClear->Update();
		break;
	case SceneKind::kSceneGameOver:
		nextKind = m_pSceneGameOver->Update();
		break;
	default:
		break;
	}

	if (nextKind != m_Kind)
	{
		// ���ݎ��s���̃V�[��(m_kind)�̏I������
		End();
		// ���̃V�[���ɐ؂�ւ�
		m_Kind = nextKind;
		// �؂�ւ���̃V�[���̏�����
		Init();
	}
}


void SceneManager::Draw()
{
	// �V�[���̕`��
	switch (m_Kind)
	{
	case SceneKind::kSceneTitle:
		m_pSceneTitle->Draw();
		break;
	case SceneKind::kSceneMain:
		m_pSceneMain->Draw();
		break;
	case SceneKind::kSceneClear:
		m_pSceneClear->Draw();
		break;
	case SceneKind::kSceneGameOver:
		m_pSceneGameOver->Draw();
		break;
	default:
		break;
	}
}
