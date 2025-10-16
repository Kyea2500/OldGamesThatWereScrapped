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
	// 右扉が開いているか
	bool RightDoorTheClose;	// true＝閉まってる　false＝開いてる

	// 左扉も同じく
	bool LeftDoorTheClose;	// ture＝閉まってる　false＝開いてる

	// 右ライトを点灯しているか
	bool RightOnLight;		// ture＝点灯している	false＝消灯している

	// 左ライトを点灯しているか
	bool LeftOnLight;		// ture＝点灯している	false＝消灯している

	// 敵が侵入しているか
	bool Enemy;
};

