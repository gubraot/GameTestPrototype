#pragma once
#include "listitem.h"

class Item;

class ListItemSpilit : public ListItem{
public:
	//method
	void draw(void);
	void calc(void);
	void InfomationDraw(void);

	//constructor
	ListItemSpilit( int width, Item* object, int takeNumber = -1 );
	~ListItemSpilit(void);

private:
	//field
	const int takeNumber;
	const Item* pointer;
};
