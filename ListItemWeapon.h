#pragma once
#include "listitem.h"

class Item;

class ListItemWeapon : public ListItem{
public:
	//method
	void draw(void);
	void calc(void);
	void InfomationDraw(void);

	//constructor
	ListItemWeapon( int width, Item* object, int takeNumber = -1 );
	~ListItemWeapon(void);

private:
	//field
	const int takeNumber;
	const Item* pointer;
};