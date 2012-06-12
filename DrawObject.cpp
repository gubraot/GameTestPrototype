#include "DrawObject.h"

SeaneManager* DrawObject::seaneManager;
CharacterManager* DrawObject::characterManager;
GameDataManager* DrawObject::gameDataManager;

void DrawObject::setSeaneManager( SeaneManager *seane ){
		DrawObject::seaneManager = seane;
}

void DrawObject::setCharacterManager( CharacterManager *chara ){
		DrawObject::characterManager = chara;
}

void DrawObject::setGameDataManager( GameDataManager *game ){
		DrawObject::gameDataManager = game;
}

SeaneManager* DrawObject::getSeaneManager(void){
		return DrawObject::seaneManager;
}

CharacterManager* DrawObject::getCharacterManager(void){
		return DrawObject::characterManager;
}

GameDataManager* DrawObject::getGameDataManager(void){
		return DrawObject::gameDataManager;
}