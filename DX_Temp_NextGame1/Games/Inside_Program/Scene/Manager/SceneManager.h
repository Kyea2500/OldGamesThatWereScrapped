#pragma once
#include <memory>
class SceneTitle;
class SceneMain;
class SceneGameOver;
class SceneClear;
class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	void Init();
	void End();
	void Update();
	void Draw();
public:
	enum SceneKind
	{
		kSceneTitle,
		kSceneMain,
		kSceneGameOver,
		kSceneClear,
		kSceneNum
	}; private:
		SceneKind m_Kind;
		// �e�V�[���̃|�C���^
		SceneTitle* m_pSceneTitle;
		SceneMain* m_pSceneMain;
		SceneGameOver* m_pSceneGameOver;
		SceneClear* m_pSceneClear;
};
