#include "InputWindow.h"

InputWindow::InputWindow(int x1, int x2, int y1, int y2, int itemMax) : Window(x1, x2, y1, y2){
	this->selectItemMax = itemMax;
	this->nowSelectItem = 0;
	this->inputResult = SELECT;
}

InputWindow::~InputWindow(void){
}

int InputWindow::getInputResult(void){
	return this->inputResult;
}
int InputWindow::getNowSelectItem(void){
	return this->nowSelectItem;
}


//protectedmethod
void InputWindow::setSelectNext(void){
	this->nowSelectItem = ( this->nowSelectItem + 1 ) % this->selectItemMax;
}

void InputWindow::setSelectPrev(void){
	this->nowSelectItem = ( this->nowSelectItem + this->selectItemMax - 1 ) % this->selectItemMax;
}

void InputWindow::setSelectOptional(int number){
	if( number < this->selectItemMax ) this->nowSelectItem = number;
}

void InputWindow::setInputResult(void){
	this->inputResult = this->nowSelectItem;
}

void InputWindow::setInputResultOptional(int select){
	this->inputResult = select;
}

void InputWindow::setInputResultCansel(void){
	this->inputResult = CANSEL;
}

void InputWindow::setSelectItemMax(int number){
	this->selectItemMax = number;
}