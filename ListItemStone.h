#pragma once
#include "listitem.h"

class Item;

class ListItemStone : public ListItem{
public:
	//method
	void draw(void);
	void calc(void);
	void InfomationDraw(void);

	//constructor
	ListItemStone( int width, Item* object, int takeNumber = -1 );
	~ListItemStone(void);

private:
	//field
	const int takeNumber;
	const Item* pointer;
};
