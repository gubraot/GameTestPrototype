#pragma once
#include "Character.h"
#include <string>
#include <vector>

//新規生成時の情報入れ物
struct newCharacter{
};

//データ保存時の情報入れ物
struct saveCharacter{
};

class CharacterManager{
public:
	//method
	//新規キャラクターを生成する
	void newCreateCharacter( newCharacter data );

	//既存キャラクターを削除する
	void deleteCharacter( int position );

	//キャラクターリストアイテムの生成(requestListWindow用)
	void createCharacterListItem( int position );

	//指定キャラクターのオブジェクトを返す
	void getCharacterObject( int position );


	//constructor
	CharacterManager(void);
	~CharacterManager(void);

private:
	//private method
	//キャラクター全体のセーブとロード
	void characterDataLoad(void);
	void characterDataSave(void);

	//field
	std::vector<Character*> character;
	std::vector<Character*>	party;
};
