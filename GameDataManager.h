#pragma once
#include <vector>
#include <string>
#include "DxLib.h"
#include "Item.h"
#include "CharacterDataType.h"
#include "CharacterElement.h"
#include "ItemWeapon.h"
#include "ItemArmor.h"
#include "ItemStone.h"
#include "ItemSpilit.h"
#include "ItemOther.h"

class ListItem;

class GameDataManager{
public:
	//method
	//指定したアイテムオブジェクトの取得
	ItemOther*  getDataOtherItem( int dataNumber );
	ItemWeapon* getDataWeaponItem( int dataNumber );
	ItemArmor*  getDataArmorItem( int dataNumber );
	ItemStone*  getDataStoneItem( int dataNumber );
	ItemSpilit* getDataSpilitItem( int dataNumber );

	CharacterDataType* getCharacterType( int dataNumber );
	CharacterElement*  getCharacterElement( int dataNumber );

	//指定したアイテム種別のリストを取得
	void getListOtherItem( std::vector<ListItem*>& cash );
	void getListWeapon( std::vector<ListItem*>& cash );
	void getListArmor( std::vector<ListItem*>& cash );
	void getListStone( std::vector<ListItem*>& cash );
	void getListSpilit( std::vector<ListItem*>& cash );
	void getListCharacterType( std::vector<ListItem*>& cash );
	void getListCharacterElement( std::vector<ListItem*>& cash );


	//constructor
	GameDataManager(void);
	~GameDataManager(void);

private:
	//field
	std::vector<ItemOther*> other;
	std::vector<ItemWeapon*> weapon;
	std::vector<ItemArmor*> armor;
	std::vector<ItemStone*> stone;
	std::vector<ItemSpilit*> spilit;

	std::vector<CharacterDataType*> type;
	std::vector<CharacterElement*> element;

	//method
	//すべての管理情報のロード
	void loadGameData(void);

	//各種データ区別ごとのロード
	void loadOtherItem(void);
	void loadWeaponItem(void);
	void loadArmorItem(void);
	void loadStoneItem(void);
	void loadSpilitItem(void);
	void loadCharacterType(void);
	void loadCharacterElement(void);
};
