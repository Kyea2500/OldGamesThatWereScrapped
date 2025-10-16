#pragma once
class Time
{
public:
	Time();
	~Time();

	void Init();
	void End();
	void Update();
	void Draw();
public:
	bool CountEnd() { return m_CauntAll; }
private:

	float m_Count;
	int m_InternalMin;
	int m_OpenHou;
	bool m_CauntAll;
};

