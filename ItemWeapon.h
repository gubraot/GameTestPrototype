#pragma once
#include "item.h"
#include <string>
#include <vector>

class ItemWeapon : public Item{
public:
	//method
	ListItem* createListItem( int width, Item* object );

	//constructor
	ItemWeapon( const std::vector<std::string>& cash );
	~ItemWeapon(void);

private:
	int attack;
	int addAttack;
	int hitRate;
	int magic;
	int speed;
	int category;
	int range;
	int slot;
	int unique;
	int element;
};
