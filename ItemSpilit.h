#pragma once
#include "item.h"
#include <string>
#include <vector>

class ItemSpilit : public Item{
public:
	//method
	ListItem* createListItem( int width, Item* object );

	//constructor
	ItemSpilit( const std::vector<std::string>& cash );
	~ItemSpilit(void);

private:
	//field
	std::string anotherName;
	int skill[6];
	int color;
	int ChangeStatus[8];
};
