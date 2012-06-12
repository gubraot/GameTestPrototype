#pragma once
#include "item.h"
#include <string>
#include <vector>

class ItemOther : public Item{
public:
	//method
	ListItem* createListItem( int width, Item* object );

	//constructor
	ItemOther( const std::vector<std::string>& cash );
	~ItemOther(void);

private:
	//field
	int normalUse;
	int takeMax;
	int category;
	int effectVolume;
	int rarelity;
};
