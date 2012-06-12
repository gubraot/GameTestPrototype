#include "ItemWeapon.h"
#include "ListItemWeapon.h"

ItemWeapon::ItemWeapon( const std::vector<std::string>& cash ){
	this->name = cash[0];
	this->level = atoi( cash[1].c_str() );
	this->attack = atoi( cash[2].c_str() );
	this->addAttack = atoi( cash[3].c_str() );
	this->magic = atoi( cash[4].c_str() );
	this->speed = atoi( cash[5].c_str() );
	this->hitRate = atoi( cash[6].c_str() );
	this->price = atoi( cash[7].c_str() );
	this->slot = atoi( cash[8].c_str() );
	this->unique = atoi( cash[9].c_str() );
	this->element = atoi( cash[10].c_str() );
	this->category = atoi( cash[11].c_str() );
	this->range = atoi( cash[12].c_str() );
	this->infomation = cash[13];
}

ItemWeapon::~ItemWeapon(void){
}

ListItem* ItemWeapon::createListItem( int width, Item* object ){
	return new ListItemWeapon( 200, object );
}
