#include "Pad.h"
#include"../../../Outside_Program/Library/DX_Files_VC/DxLib.h"

namespace
{
	int padInput = 0;  // ���݂̃t���[���̃p�b�h����
	int lastInput = 0; // �ЂƂO�̃t���[���̃p�b�h����
}

void Pad::Update()
{
	// �O�̃t���[���ɉ�����Ă����{�^���̏����o���Ă���
	lastInput = padInput;
	// �̃t���[���ɉ�����Ă���{�^���̏����擾����
	padInput = GetJoypadInputState(DX_INPUT_KEY_PAD1);
}

bool Pad::IsPress(int button)
{
	return (padInput & button);
}

bool Pad::IsTrigger(int button)
{
	// (padInput & button) == 0�̏ꍇfalse
	// ����ȊO�̏ꍇ��true������
	bool isNow = (padInput & button);
	bool isLast = (lastInput & button);
	return (isNow && !isLast);
}