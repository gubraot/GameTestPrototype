//
//Main.cpp
//
//

//------
//インクルード
//------
#include "GameMain.h"
#include <DxLib.h>

//とりあえずインスタンスだけ
HINSTANCE hInst;

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ){

	GameMain gMain;
	gMain.setHInst( hInstance );
	hInst = hInstance;

	//ゲーム本体クラス動作
	gMain.runGame();

	//ゲーム本体クラスの終了はゲームの終了を意味する
	return 0;

}