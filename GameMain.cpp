#include "GameMain.h"
#include <DxLib.h>
#include "SeaneManager.h"
#include "GameDataManager.h"
#include "CharacterManager.h"
#include "GameStatusManager.h"


//�R���X�g���N�^
GameMain::GameMain(void) : runCode( NONE ){
	ChangeWindowMode( TRUE );						//�E�C���h�E���[�h
	SetMainWindowText( "2��ڎ���i" );				//�^�C�g���Z�b�g
	if( DxLib_Init() == -1 ){						//DX���C�u����������
		runCode = ERROR_INIT;
		return;
	}
	SetDrawScreen( DX_SCREEN_BACK );				//�`���ʂ̐ݒ�

	//�O���t�H���g�f�[�^�Ǎ��A�t�H���g�Z�b�g
	fontLoad( "font/�݂������.ttf" );
	fontLoad( "font/VL-PGothic-Regular.ttf" );
	SetFontSize( 20 );
	ChangeFont( "VL P�S�V�b�N" );
	SetFontThickness( 4 );
	ChangeFontType( DX_FONTTYPE_ANTIALIASING );

	seaneManager = new SeaneManager();
	gameDataManager = new GameDataManager();
	characterManager = new CharacterManager();
	gameStatusManager = new GameStatusManager();
	//�N���X�t�B�[���h�ێ��̐ݒ�
	DrawObject::setSeaneManager( seaneManager );
	DrawObject::setGameDataManager( gameDataManager );
	DrawObject::setCharacterManager( characterManager );

	runCode = RUNNING;
}

//�����f�X�g���N�^
void GameMain::destructor(void){

	delete this->seaneManager;
	

	//�G���[�ɂ��I������ꍇ
	switch( runCode ){
		case ERROR_INIT:
			MessageBox(NULL , TEXT("Init���ɃG���[���������܂����B"), TEXT("�ُ픭��"), MB_OK );
			break;
	}
}

//�O���t�H���g�f�[�^�̓Ǎ���
void GameMain::fontLoad( char *source ){
	char *fontCash = source;
	if( AddFontResourceEx(fontCash, FR_PRIVATE, NULL) == 0 ){
		//�G���[��f��
		MessageBox(NULL , TEXT("�O���t�H���g�̓ǂݍ��݂Ɏ��s���܂����B"), TEXT("�ُ픭��"), MB_OK );
		runCode = ERROR_INIT;
		return;
	}
}

void GameMain::setHInst( HINSTANCE inst ){
	this->hInst = inst;
}

//�Q�[�����쏈��(���C�����[�v)
void GameMain::runGame(void){
	while( ProcessMessage() != -1 && runCode == RUNNING ){

		InputManager::getInstance().updateKeyStatus();

		//�`���ʈ�̃��Z�b�g
		ClearDrawScreen();

		//SeaneManager�ɓo�^����Ă���Seane�̕`��
		seaneManager->calcSeane();
		seaneManager->drawSeane();

		fps.drawFps();

		//����ʕ`���Ԃ̓]��
		ScreenFlip();		

		//Fps����
		fps.calcFps();
	}

	//�I��
	destructor();
	return;
}