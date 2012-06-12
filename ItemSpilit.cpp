#include "ItemSpilit.h"
#include "ListItemSpilit.h"

ItemSpilit::ItemSpilit( const std::vector<std::string>& cash ){
}

ItemSpilit::~ItemSpilit(void){
}

ListItem* ItemSpilit::createListItem( int width, Item* object ){
	return new ListItemSpilit( 200, object );
}