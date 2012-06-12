#include "ListItemArmor.h"
#include "GameDataManager.h"
#include "ItemArmor.h"

ListItemArmor::ListItemArmor( int width, Item* object, int takeNumber ):
//init list
ListItem( 0, 0, width, 20, "nonsetting" ),
pointer( object ),
takeNumber( takeNumber ){
//list end
}

ListItemArmor::~ListItemArmor(void){

}

void ListItemArmor::draw(void){
	
}

void ListItemArmor::calc(void){

}

void ListItemArmor::InfomationDraw(void){

}