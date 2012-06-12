/*
ゲームメインオブジェクト
GameMain

起動時に最初に生成する、終了まで運命を共にするオブジェクト。
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
	//動作状態格納
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
