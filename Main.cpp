//
//Main.cpp
//
//

//------
//�C���N���[�h
//------
#include "GameMain.h"
#include <DxLib.h>

//�Ƃ肠�����C���X�^���X����
HINSTANCE hInst;

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ){

	GameMain gMain;
	gMain.setHInst( hInstance );
	hInst = hInstance;

	//�Q�[���{�̃N���X����
	gMain.runGame();

	//�Q�[���{�̃N���X�̏I���̓Q�[���̏I�����Ӗ�����
	return 0;

}