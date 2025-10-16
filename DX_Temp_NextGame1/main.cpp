#include "Games/Outside_Program/Library/DX_Files_VC/DxLib.h"
#include "Games/Inside_Program/Dive/game.h"
#include "Games/Inside_Program/Scene/Manager/SceneManager.h"

namespace
{
	constexpr int MaxTime = 16667;
}

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// �t���X�N���[���ł͂Ȃ��A�E�B���h�E���[�h�ŊJ���悤�ɂ���
	ChangeWindowMode(Game::kDefaultWindowMode);
	SetWindowText("<Untitle>");

	// ��ʃT�C�Y
	SetGraphMode(Game::kScreenWidth, Game::kScreenHeight, Game::kColorBitNum);

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	// �`���𗠉�ʂɂ���
	SetDrawScreen(DX_SCREEN_BACK);

	std::shared_ptr<SceneManager> sceneManager = std::make_shared<SceneManager>();
	sceneManager->Init();


	// 3D�֘A�̐ݒ�
	SetUseZBuffer3D(true);		// Z�o�b�t�@��L���ɂ���
	SetWriteZBuffer3D(true);	// Z�o�b�t�@�ւ̏������݂��s��
	SetUseBackCulling(true);	// �o�b�N�J�����O��L���ɂ���
	// �Q�[�����[�v
	while (ProcessMessage() == 0)
	{
		// ���[�v���n�܂������Ԃ��o���Ă���
		LONGLONG time = GetNowHiPerformanceCount();
		// ��ʂ��N���A��
		ClearDrawScreen();

		// �����ɃQ�[���̏���������
		sceneManager->Update();
		sceneManager->Draw();

		// ��ʂ̐؂�ւ���҂K�v������
		ScreenFlip();
		//FPS(Frame Per Second)60�ɌŒ�


		// esc�L�[�ŏI��(��������I��)
		if (CheckHitKey(KEY_INPUT_ESCAPE))	break;

		while (GetNowHiPerformanceCount() - time < MaxTime)
		{
		}

	}

	WaitKey();				// �L�[���͑҂�

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}