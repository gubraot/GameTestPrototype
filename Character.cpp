#include "Character.h"

Character::Character(void){
}

Character::~Character(void){
}

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
