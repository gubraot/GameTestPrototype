#include "FaceSelectWindow.h"
#include <Dxlib.h>

FaceSelectWindow::FaceSelectWindow(void):InputWindow(260, 380, 180, 300, 0){
	std::string filePass;
	char num[5];

	for( int i = 0; i < 50; i++ ){
		filePass = "grf/face/";
		_itoa_s( i, num, 10 );
		filePass += num;
		filePass += ".png";
		faceImageHundle.push_back( LoadGraph( filePass.c_str() ) );
		if( faceImageHundle[faceImageHundle.size() - 1] == -1 ){
			this->selectItemMax = faceImageHundle.size() - 1;
			break;
		}
	}
}

FaceSelectWindow::~FaceSelectWindow(void){
}

void FaceSelectWindow::calc(void){
	if( InputManager::getInstance().getKeyStatus( KEY_INPUT_Z ) == TRUE ){
		this->setInputResult();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_UP ) == TRUE ){
		this->setSelectPrev();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_DOWN ) == TRUE ){
		this->setSelectNext();
	}
}

void FaceSelectWindow::draw(void){
	this->windowDraw();
	//‰æ‘œ•`‰æ
	DrawGraph( 272, 192, faceImageHundle[getNowSelectItem()], TRUE );
}
