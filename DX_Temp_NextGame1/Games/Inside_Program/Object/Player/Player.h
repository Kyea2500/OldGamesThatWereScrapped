#pragma once
class Player
{
public:
	Player();
	~Player();
	void Init();
	void End();
	void Update();
public:
	bool GameOverFlag() { return PlayerDead; }
private:
	bool PlayerDead;	// trueF€‚ñ‚Å‚é@falseF¶‚«‚Ä‚é
};

