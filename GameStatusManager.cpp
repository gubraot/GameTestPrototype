#include "GameStatusManager.h"

GameStatusManager::GameStatusManager(void){
}

GameStatusManager::~GameStatusManager(void){
}

Belonging* GameStatusManager::getWeapon( int takeNumber ){
	return weapon[takeNumber];
}

Belonging* GameStatusManager::getArmor( int takeNumber ){
	return armor[takeNumber];
}

Belonging* GameStatusManager::getSpilit( int takeNumber ){
	return spilit[takeNumber];
}

void GameStatusManager::dataLoadWeapon(void){
	
}

void GameStatusManager::dataLoadArmor(void){
}

void GameStatusManager::dataLoadSpilit(void){
}

void GameStatusManager::dataSaveWeapon(void){
}

void GameStatusManager::dataSaveArmor(void){
}

void GameStatusManager::dataSaveSpilit(void){
}