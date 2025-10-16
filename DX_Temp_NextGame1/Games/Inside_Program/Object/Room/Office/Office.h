#pragma once
#include"../RoomBase.h"

class Office
{
public:
	Office();
	~Office();
	void Init();
	void Update();
	void Draw();
private:
	// �E�����J���Ă��邩
	bool RightDoorTheClose;	// true���܂��Ă�@false���J���Ă�

	// ������������
	bool LeftDoorTheClose;	// ture���܂��Ă�@false���J���Ă�

	// �E���C�g��_�����Ă��邩
	bool RightOnLight;		// ture���_�����Ă���	false���������Ă���

	// �����C�g��_�����Ă��邩
	bool LeftOnLight;		// ture���_�����Ă���	false���������Ă���

	// �G���N�����Ă��邩
	bool Enemy;
};

