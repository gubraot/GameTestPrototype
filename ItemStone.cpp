#include "ItemStone.h"
#include "ListItemStone.h"

ItemStone::ItemStone( const std::vector<std::string>& cash ){
	this->name = cash[0];
	this->infomation = cash[1];
	this->addStatusHP = atoi( cash[2].c_str() );
	this->addStatusSP = atoi( cash[3].c_str() );
	this->addStatusSTR = atoi( cash[4].c_str() );
	this->addStatusVIT = atoi( cash[5].c_str() );
	this->addStatusAGI = atoi( cash[6].c_str() );
	this->addStatusDEX = atoi( cash[7].c_str() );
	this->addStatusINT = atoi( cash[8].c_str() );
	this->addStatusMEN = atoi( cash[9].c_str() );
	this->addStatusCRIT = atoi( cash[10].c_str() );
	for( int i = 0; i < 7; i++ ){
		this->addResist[i] = atoi( cash[11 + i].c_str() );
	}
	for( int i = 0; i < 3; i++ ){
		this->skill[i] = atoi( cash[18 + i].c_str() );
	}
	this->unique = atoi( cash[21].c_str() );
	this->rarelity = atoi( cash[22].c_str() );
	this->unique = atoi( cash[23].c_str() );
}

ItemStone::~ItemStone(void){
}

ListItem* ItemStone::createListItem( int width, Item* object ){
	return new ListItemStone( 200, object );
}