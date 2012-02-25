#include "ListItem.h"
#include <Dxlib.h>

ListItem::ListItem( int x, int y, int width, int height, std::string listString ) :
//init list
listString( listString ),
DrawObject( x, y ),
xPosition2( x + width ),
yPosition2( y + height ){
//list end
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