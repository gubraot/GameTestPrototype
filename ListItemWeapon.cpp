#include "ListItemWeapon.h"
#include "GameDataManager.h"
#include "ItemWeapon.h"

ListItemWeapon::ListItemWeapon( int width, Item* object, int takeNumber ):
//init list
ListItem( 0, 0, width, 20, "nonsetting" ),
pointer( object ),
takeNumber( takeNumber ){
//list end
}

ListItemWeapon::~ListItemWeapon(void){

}

void ListItemWeapon::draw(void){
	
}

void ListItemWeapon::calc(void){

}

void ListItemWeapon::InfomationDraw(void){

}