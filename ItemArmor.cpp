#include "ItemArmor.h"
#include "ListItemArmor.h"

ItemArmor::ItemArmor( const std::vector<std::string>& cash ){
	this->name = cash[0];
	this->level = atoi( cash[1].c_str() );
	this->defense = atoi( cash[2].c_str() );
	this->magicDefense = atoi( cash[3].c_str() );
	this->avoid = atoi( cash[4].c_str() );
	this->castSpeed = atoi( cash[5].c_str() );
	for( int i = 0; i < 7; i++ ){
		resist[i] = atoi( cash[i + 6].c_str() );
	}
	this->slot = atoi( cash[13].c_str() );
	this->unique = atoi( cash[14].c_str() );
	this->price = atoi( cash[15].c_str() );
	this->infomation = cash[16];
}

ItemArmor::~ItemArmor(void){
}

ListItem* ItemArmor::createListItem( int width, Item* object ){
	return new ListItemArmor( 200, object );
}
