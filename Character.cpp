#include "Character.h"
<<<<<<< HEAD
#include "GameDataManager.h"

Character::Character( std::string name, std::string face, int typeNum, int fire, int wind, int earth, int aqua, int dark, int right, int none ){

	this->name = name;
	this->face = face;
	elementType[0] = fire;
	elementType[1] = wind;
	elementType[2] = earth;
	elementType[3] = aqua;
	elementType[4] = dark;
	elementType[5] = right;
	elementType[6] = none;
	exp = 0;
	level = 1;
	statusPoint = 10;
	equipWeapon = -1;
	equipArmor  = -1;
	equipSpilit = -1;
	characterType = typeNum;
	resetCalcStatus();
}

Character::Character( const std::vector<std::string>& cash ){
=======

Character::Character(void){
>>>>>>> GitHub/master
}

Character::~Character(void){
}

<<<<<<< HEAD
void Character::setStatusHP( int addVolume ){
	statusHP += addVolume;
}

void Character::setStatusSP( int addVolume ){
	statusSP += addVolume;
}

void Character::setStatusSTR( int addVolume ){
	statusSTR += addVolume;
}

void Character::setStatusVIT( int addVolume ){
	statusVIT += addVolume;
}

void Character::setStatusAGI( int addVolume ){
	statusAGI += addVolume;
}

void Character::setStatusDEX( int addVolume ){
	statusDEX += addVolume;
}

void Character::setStatusINT( int addVolume ){
	statusINT += addVolume;
}

void Character::setStatusMEN( int addVolume ){
	statusMEN += addVolume;
}

int Character::getCalcStatusHP(void){
	return 0;
}

int Character::getCalcStatusSP(void){
	return 0;
}

int Character::getCalcStatusSTR(void){
	return 0;
}

int Character::getCalcStatusVIT(void){
	return 0;
}

int Character::getCalcStatusAGI(void){
	return 0;
}

int Character::getCalcStatusDEX(void){
	return 0;
}

int Character::getCalcStatusINT(void){
	return 0;
}

int Character::getCalcStatusMEN(void){
	return 0;
}

int Character::getCalcStatusATK(void){
	return 0;
}

int Character::getCalcStatusADDATK(void){
	return 0;
}

int Character::getCalcStatusATKRATE(void){
	return 0;
}

int Character::getCalcStatusDEF(void){
	return 0;
}

int Character::getCalcStatusMATK(void){
	return 0;
}

int Character::getCalcStatusMDEF(void){
	return 0;
}

int Character::getCalcStatusASPD(void){
	return 0;
}

int Character::getCalcStatusCSPD(void){
	return 0;
}

int Character::getCalcStatusHIT(void){
	return 0;
}

int Character::getCalcStatusAVOID(void){
	return 0;
}

int Character::getCalcStatusFLEX(void){
	return 0;
}

int Character::getCalcStatusREGIST( int elementName ){
	return 0;
}

int Character::getCalcStatusCRITRATE(void){
	return 0;
}

int Character::getCalcStatusCRITLEVEL(void){
	return 0;
}

void Character::resetCalcStatus(void){
}

void Character::setEquipWeapon( int takeNumber ){
}

void Character::setEquipArmor( int takeNumber ){
}

void Character::setEquipSpilit( int takeNumber ){
}

void Character::setEquipWeaponStone( int takeNumber, int setSlot ){
}

void Character::setEquipArmorStone( int takeNumber, int setSlot ){
}

CharacterSaveData Character::createSaveData(void){
	CharacterSaveData save;
	return save;
}
=======
void Character::setStatusHP( int addVolume ){}
void Character::setStatusSP( int addVolume ){}
void Character::setStatusSTR( int addVolume ){}
void Character::setStatusVIT( int addVolume ){}
void Character::setStatusAGI( int addVolume ){}
void Character::setStatusDEX( int addVolume ){}
void Character::setStatusINT( int addVolume ){}
void Character::setStatusMEN( int addVolume ){}

int Character::getCalcStatusHP(void){}
int Character::getCalcStatusSP(void){}
int Character::getCalcStatusSTR(void){}
int Character::getCalcStatusVIT(void){}
int Character::getCalcStatusAGI(void){}
int Character::getCalcStatusDEX(void){}
int Character::getCalcStatusINT(void){}
int Character::getCalcStatusMEN(void){}

int Character::getCalcStatusATK(void){}
int Character::getCalcStatusADDATK(void){}
int Character::getCalcStatusATKRATE(void){}
int Character::getCalcStatusDEF(void){}
int Character::getCalcStatusMATK(void){}
int Character::getCalcStatusMDEF(void){}
int Character::getCalcStatusASPD(void){}
int Character::getCalcStatusCSPD(void){}
int Character::getCalcStatusHIT(void){}
int Character::getCalcStatusAVOID(void){}
int Character::getCalcStatusFLEX(void){}
int Character::getCalcStatusREGIST( int elementName ){}
int Character::getCalcStatusCRITRATE(void){}
int Character::getCalcStatusCRITLEVEL(void){}

void Character::resetCalcStatus(void){}

void Character::setEquipWeapon( int takeNumber ){}

void Character::setEquipArmor( int takeNumber ){}

void Character::setEquipSpilit( int takeNumber ){}

void Character::setEquipWeaponStone( int takeNumber, int setSlot ){}
void Character::setEquipArmorStone( int takeNumber, int setSlot ){}

CharacterSaveData Character::createSaveData(void){}
>>>>>>> GitHub/master
