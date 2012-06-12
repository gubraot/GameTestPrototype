/*
描画される可能性の高いオブジェクトの抽象
DrawObject
*/

#pragma once
#include <Dxlib.h>

class SeaneManager;
class CharacterManager;
class GameDataManager;

class DrawObject{
public:
	//method
	//描画の本体
	virtual void draw() = 0;
	//裏処理の本体
	virtual void calc() = 0;

	//オブジェクト全体で使用する各種マネージャーのセット
	static void setSeaneManager( SeaneManager *seane );
	static void setCharacterManager( CharacterManager *chara );
	static void setGameDataManager( GameDataManager *game );

	//private field
	SeaneManager* getSeaneManager(void);
	CharacterManager* getCharacterManager(void);
	GameDataManager* getGameDataManager(void);

	//constructor
	inline DrawObject(const int x, const int y ):xPosition( x ), yPosition( y ){
	}
	inline virtual ~DrawObject(void){}

protected:
	//private field
	int xPosition;
	int yPosition;
	//method
	inline void GetFont( int fontNum ){
	};

private:
	//private field
	static SeaneManager *seaneManager;
	static CharacterManager *characterManager;
	static GameDataManager *gameDataManager;
};