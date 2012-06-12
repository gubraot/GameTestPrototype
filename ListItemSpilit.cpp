#include "ListItemSpilit.h"
#include "ItemSpilit.h"

ListItemSpilit::ListItemSpilit( int width, Item* object, int takeNumber ):
//init list
ListItem( 0, 0, width, 20, "nonsetting" ),
pointer( object ),
takeNumber( takeNumber ){
//list end
}

ListItemSpilit::~ListItemSpilit(void){

}

void ListItemSpilit::draw(void){
	
}

void ListItemSpilit::calc(void){

}

void ListItemSpilit::InfomationDraw(void){
}