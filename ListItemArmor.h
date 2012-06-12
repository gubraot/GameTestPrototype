/*
リストウインドウ構成アイテム、防具
ListItemArmor[ DrawObject<-ListItem<-ListItemArmor ]

防具アイテムのリストアイテム描画と詳細情報描画を保持する構成オブジェクト。
ゲームデータまたはセーブデータとしてのアイテムオブジェクトからのみ生成
*/
#pragma once
#include "listitem.h"

class Item;

class ListItemArmor : public ListItem{
public:
	//method
	void draw(void);
	void calc(void);
	void InfomationDraw(void);

	//constructor
	ListItemArmor( int width, Item* object, int takeNumber = -1 );
	~ListItemArmor(void);

private:
	//field
	const int takeNumber;
	const Item* pointer;
};
