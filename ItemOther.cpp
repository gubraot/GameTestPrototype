#include "ItemOther.h"
#include "ListItemOther.h"

ItemOther::ItemOther( const std::vector<std::string>& cash ){
	this->itemNumber = atoi( cash[0].c_str() );
	this->name = cash[1];
	this->infomation = cash[2];
	this->normalUse = atoi( cash[3].c_str() );
	this->category = atoi( cash[4].c_str() );
	this->takeMax = atoi( cash[5].c_str() );
	this->effectVolume = atoi( cash[6].c_str() );
	this->level = atoi( cash[7].c_str() );
	this->rarelity = atoi( cash[8].c_str() );
	this->price = atoi( cash[9].c_str() );
}

ItemOther::~ItemOther(void){
}

ListItem* ItemOther::createListItem( int width, Item* object ){
	return new ListItemOther( 200, object );
}
