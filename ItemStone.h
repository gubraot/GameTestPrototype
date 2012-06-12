#pragma once
#include "item.h"
#include <string>
#include <vector>

class ListItem;

class ItemStone : public Item{
public:
	//method
	ListItem* createListItem( int width, Item* object );

	//constructor
	ItemStone( const std::vector<std::string>& cash );
	~ItemStone(void);

private:
	//field
	int addStatusHP;
	int addStatusSP;
	int addStatusSTR;
	int addStatusVIT;
	int addStatusAGI;
	int addStatusDEX;
	int addStatusINT;
	int addStatusMEN;
	int addStatusCRIT;
	int addResist[7];
	int skill[3];
	int rarelity;
	int unique;

	//method
};
