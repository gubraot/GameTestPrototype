/*
プレイデータ管理オブジェクト
GameStatusManager

プレイ結果を伴うデータ関係を管理するオブジェクト。
*/

#pragma once
#include <string>
#include <vector>

class Belonging;

//データセーブ用の入れ物
struct GameSaveData{
};


class GameStatusManager{
public:
	//method
	Belonging* getWeapon( int takeNumber );
	Belonging* getArmor( int takeNumber );
	Belonging* getSpilit( int takeNumber );

	//constructor
	GameStatusManager(void);
	~GameStatusManager(void);

private:
	//field
	std::vector<Belonging*> weapon;
	std::vector<Belonging*> armor;
	std::vector<Belonging*> spilit;

	//private method
	//セーブデータ読込
	void dataLoadWeapon(void);
	void dataLoadArmor(void);
	void dataLoadSpilit(void);

	//ゲームデータ保存
	void dataSaveWeapon(void);
	void dataSaveArmor(void);
	void dataSaveSpilit(void);
};
