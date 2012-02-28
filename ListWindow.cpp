#include "ListWindow.h"

ListWindow::ListWindow( int x, int y, int width, int num, char* manuString ...) :
//init list
InputWindow( x, x + width, y, y + 4 + (num * 20), num ){
//list end

	std::string manutxt;
	va_list list;

	va_start( list, num );	
	for(int i = 0; i < num; i++ ){
		manutxt = va_arg(list, char *);
		item.push_back( new ListItem( x + 2, y + 2 + (i * 20), width - 4, 20, manutxt ) );
	}
	
	va_end( list );
}

ListWindow::~ListWindow(void){
	for( unsigned int i = 0; i < item.size(); i++ ){
		delete item[i];
	}
	item.clear();
}

void ListWindow::drawSelectAttachItem( ItemSize size ){
	Draw_select( size.positionX[0], size.positionX[1], size.positionY[0], size.positionY[1] );
}

void ListWindow::draw(void){
	windowDraw();
	for( unsigned int i = 0; i < item.size(); i++ ){
		item[i]->draw();
		if( i == getNowSelectItem() ){
			drawSelectAttachItem( item[getNowSelectItem()]->getItemSize() );
		}
	}
}

void ListWindow::calc(void){
	if( InputManager::getInstance().getKeyStatus( KEY_INPUT_Z ) == TRUE ){
		this->setInputResult();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_X ) == TRUE ){
		this->setInputResultCansel();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_UP ) == TRUE ){
		this->setSelectPrev();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_DOWN ) == TRUE ){
		this->setSelectNext();
	}
}