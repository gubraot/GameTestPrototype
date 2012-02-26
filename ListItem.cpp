#include "ListItem.h"
#include <Dxlib.h>

//static field
int ListItem::infoBoxPositionX[2] = {320, 320};
int ListItem::infoBoxPositionY[2] = {240, 240};
//static field end

ListItem::ListItem( int x, int y, int width, int height, std::string listString ) :
//init list
listString( listString ),
DrawObject( x, y ),
xPosition2( x + width ),
yPosition2( y + height ){
//list end
}

void ListItem::infoBoxMoving(void){
	if( xPosition < 320 ){
		infoBoxPositionX[0] = xPosition;
		infoBoxPositionX[1] = xPosition + 200;
	}else{
		infoBoxPositionX[0] = xPosition2 - 200;
		infoBoxPositionX[1] = xPosition2;
	}

	if( yPosition < 240 ){
		infoBoxPositionY[0] = yPosition2 + 10;
		infoBoxPositionY[1] = yPosition2 + 60;
	}else{
		infoBoxPositionY[0] = yPosition - 60;
		infoBoxPositionY[1] = yPosition - 10;
	}
}

void ListItem::draw(void){
	DrawString( xPosition + 5, yPosition, listString.c_str(), GetColor( 255, 255, 255 ) );
}

ItemSize ListItem::getItemSize(void){
	ItemSize size;
	size.positionX[0] = xPosition;
	size.positionX[1] = xPosition2;
	size.positionY[0] = yPosition;
	size.positionY[1] = yPosition2;
	return size;
}