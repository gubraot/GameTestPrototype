#pragma once
#include "Window.h"
#include "InputManager.h"

	//enum
	enum{
		SELECT = -1,
		CANSEL = -2,
		INIT   = -3
	};

class InputWindow : public Window{
public:

	//method
	int getInputResult(void);
	int getNowSelectItem(void);

	//constructor
	InputWindow(int x1, int x2, int y1, int y2, int itemMax);
	~InputWindow(void);

protected:
	//field
	int inputResult;
	int nowSelectItem;
	int selectItemMax;
	//method
	void setSelectNext(void);
	void setSelectPrev(void);
	void setSelectOptional(int number);
	void setInputResult(void);
	void setInputResultOptional(int select);
	void setInputResultCansel(void);
	void setSelectItemMax(int number);
};
