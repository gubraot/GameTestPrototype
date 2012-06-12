#pragma once
#include "item.h"
#include <string>
#include <vector>

class ListItem;

class ItemArmor : public Item{
public:
	//method
	ListItem* createListItem( int width, Item* object );

	//constructor
	ItemArmor( const std::vector<std::string>& cash );
	~ItemArmor(void);

private:
	//field
	int defense;
	int magicDefense;
	int avoid;
	int castSpeed;
	int resist[7];
	int slot;
	int unique;
};
