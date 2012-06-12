#pragma once
#include <vector>
#include <string>

class ListItem;

class Item{
public:
	//method
	virtual ListItem* createListItem( int width, Item* object ) = 0;

	//constructor
	Item(void);
	virtual ~Item(void);

protected:

	//field
	std::string name;
	std::string infomation;
	int			itemNumber;
	int         level;
	int         price;
};
