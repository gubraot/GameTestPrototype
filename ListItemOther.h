#pragma once
#include "listitem.h"

class Item;

class ListItemOther : public ListItem{
public:
	//method
	void draw(void);
	void calc(void);
	void InfomationDraw(void);

	//constructor
	ListItemOther( int width, Item* object, int takeNumber = -1 );
	~ListItemOther(void);

private:
	//field
	const int takeNumber;
	const Item* pointer;
};
