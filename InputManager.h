/*
入力状態管理
InputManager

入力状態の取得と更新などをするだけ。Singletonオブジェクト。

InputManagerの責任:入力状態の取得と管理。
*/
#pragma once
#include <Dxlib.h>


//使用する場合、
//InputManager::getInstance().メソッドでアクセスして使用

class InputManager{
public:
	//method
	//キー入力状態の更新
	void updateKeyStatus(void);
	//キー入力状態取得(コードはDxlib定義に準拠
	bool getKeyStatus( int code );
	//インスタンスへアクセス
	inline static InputManager& getInstance(void){
		static InputManager singleton;
		return singleton;
	}

private:
	//field
	int  inputKey[256];
	bool keyStatus[256];

	//constructor
	InputManager(void);
	~InputManager(void);
};
