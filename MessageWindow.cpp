#include "MessageWindow.h"

MessageWindow::MessageWindow(int x, int y, int width, std::string message ) : Window( x, x + width, y, y + 30 ){
	this->message = message;
}

MessageWindow::~MessageWindow(void){
}

void MessageWindow::draw(void){
	windowDraw();
	DrawString( xPosition + 5, yPosition + 5, message.c_str(), GetColor( 255, 255, 255 ) );
}
