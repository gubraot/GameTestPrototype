#include "InputManager.h"

InputManager::InputManager(void){
	for( int i = 0; i < 256; i++ ){
		keyStatus[i] = FALSE;
		inputKey[i]  = 0;
	}
}

InputManager::~InputManager(void){
}

void InputManager::updateKeyStatus(void){
	char keyCash[256];

	GetHitKeyStateAll( keyCash );

	//押下長の記録
	for( int i = 0; i < 256; i++ ){
		if( keyCash[i] == 1 ){
			inputKey[i]++;
		}else{
			inputKey[i] = 0;
		}
		//長さに応じて入力状態のセット
		if( inputKey[i] == 1 ){
			keyStatus[i] = TRUE;
		}else if( (inputKey[i] - 30) > 0 && inputKey[i] % 6 == 0 ){
			if( i == KEY_INPUT_UP || i == KEY_INPUT_DOWN || i == KEY_INPUT_LEFT || i == KEY_INPUT_RIGHT ){
				keyStatus[i] = TRUE;
			}else{
				keyStatus[i] = FALSE;
			}
		}else{
			keyStatus[i] = FALSE;
		}
	}
}

bool InputManager::getKeyStatus(int code){
	if( keyStatus[code] == TRUE ){
		keyStatus[code] = FALSE;
		return TRUE;
	}else{
		return FALSE;
	}
}
