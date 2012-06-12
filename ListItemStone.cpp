#include "ListItemStone.h"

ListItemStone::ListItemStone( int width, Item* object, int takeNumber ):
//init list
ListItem( 0, 0, width, 20, "nonsetting" ),
pointer( object ),
takeNumber( takeNumber ){
//list end
}

ListItemStone::~ListItemStone(void){

}

void ListItemStone::draw(void){
	
}

void ListItemStone::calc(void){

}

void ListItemStone::InfomationDraw(void){

}