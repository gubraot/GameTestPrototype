/*
�Q�[�����C���I�u�W�F�N�g
GameMain

�N�����ɍŏ��ɐ�������A�I���܂ŉ^�������ɂ���I�u�W�F�N�g�B
*/

#pragma once
#include "ListWindow.h"
#include "FpsControl.h"
#include "DrawObject.h"

class SeaneManager;
class GameDataManager;
class CharacterManager;
class GameStatusManager;

class GameMain{

	enum runCode{
		NONE,
		RUNNING,
		EXIT,
		ERROR_INIT
	};

public:
	GameMain(void);
	inline virtual ~GameMain(void){};

	void runGame(void);
	void setHInst( HINSTANCE inst );

private:
	//�����Ԋi�[
	runCode	 runCode;
	FpsControl fps;

	SeaneManager* seaneManager;
	GameDataManager* gameDataManager;
	CharacterManager* characterManager;
	GameStatusManager* gameStatusManager;

	HINSTANCE hInst;

	void mainRoop(void);
	void destructor(void);

	void fontLoad( char* source );

};
