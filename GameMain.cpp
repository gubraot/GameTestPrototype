#include "GameMain.h"
#include <DxLib.h>
#include "SeaneManager.h"
#include "GameDataManager.h"
#include "CharacterManager.h"
#include "GameStatusManager.h"


//コンストラクタ
GameMain::GameMain(void) : runCode( NONE ){
	ChangeWindowMode( TRUE );						//ウインドウモード
	SetMainWindowText( "2代目試作品" );				//タイトルセット
	if( DxLib_Init() == -1 ){						//DXライブラリ初期化
		runCode = ERROR_INIT;
		return;
	}
	SetDrawScreen( DX_SCREEN_BACK );				//描画画面の設定

	//外部フォントデータ読込、フォントセット
	fontLoad( "font/みかちゃん.ttf" );
	fontLoad( "font/VL-PGothic-Regular.ttf" );
	SetFontSize( 20 );
	ChangeFont( "VL Pゴシック" );
	SetFontThickness( 4 );
	ChangeFontType( DX_FONTTYPE_ANTIALIASING );

	seaneManager = new SeaneManager();
	gameDataManager = new GameDataManager();
	characterManager = new CharacterManager();
	gameStatusManager = new GameStatusManager();
	//クラスフィールド保持の設定
	DrawObject::setSeaneManager( seaneManager );
	DrawObject::setGameDataManager( gameDataManager );
	DrawObject::setCharacterManager( characterManager );

	runCode = RUNNING;
}

//実質デストラクタ
void GameMain::destructor(void){

	delete this->seaneManager;
	

	//エラーにより終了する場合
	switch( runCode ){
		case ERROR_INIT:
			MessageBox(NULL , TEXT("Init中にエラーが発生しました。"), TEXT("異常発生"), MB_OK );
			break;
	}
}

//外部フォントデータの読込み
void GameMain::fontLoad( char *source ){
	char *fontCash = source;
	if( AddFontResourceEx(fontCash, FR_PRIVATE, NULL) == 0 ){
		//エラーを吐く
		MessageBox(NULL , TEXT("外部フォントの読み込みに失敗しました。"), TEXT("異常発生"), MB_OK );
		runCode = ERROR_INIT;
		return;
	}
}

void GameMain::setHInst( HINSTANCE inst ){
	this->hInst = inst;
}

//ゲーム動作処理(メインループ)
void GameMain::runGame(void){
	while( ProcessMessage() != -1 && runCode == RUNNING ){

		InputManager::getInstance().updateKeyStatus();

		//描画画面域のリセット
		ClearDrawScreen();

		//SeaneManagerに登録されているSeaneの描画
		seaneManager->calcSeane();
		seaneManager->drawSeane();

		fps.drawFps();

		//裏画面描画状態の転送
		ScreenFlip();		

		//Fps制御
		fps.calcFps();
	}

	//終了
	destructor();
	return;
}