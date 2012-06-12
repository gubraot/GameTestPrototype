#include "ListItemOther.h"

ListItemOther::ListItemOther( int width, Item* object, int takeNumber ):
//init list
ListItem( 0, 0, width, 20, "nonsetting" ),
pointer( object ),
takeNumber( takeNumber ){
//list end
}

ListItemOther::~ListItemOther(void){

}

void ListItemOther::draw(void){
	
}

void ListItemOther::calc(void){

}

void ListItemOther::InfomationDraw(void){

}
