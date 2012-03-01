/*
�L�����N�^�[�I�u�W�F�N�g��
Character

�f�[�^�Ƃ��ẴL�����N�^�[��Ԃ̊Ǘ��B(��)
*/

#pragma once
#include <string>
#include <vector>

//�Z�[�u�f�[�^���p�̓��ꕨ
struct CharacterSaveData{
	char name[20];
	char face[60];
	int  exp;
	int  level;
	int  statusPoint;
	int  characterType;
	int  basicStatus[8];
	int  elementPoint[7];
	int	 nowHP;
	int  newSP;
	int  equip[3];
	int  weaponJuel[8];
	int  armorJuel[5];
};


class Character{
public:
	//method
	//��b�X�e�[�^�X���Z�Z�b�g
	void setStatusHP( int addVolume );
	void setStatusSP( int addVolume );
	void setStatusSTR( int addVolume );
	void setStatusVIT( int addVolume );
	void setStatusAGI( int addVolume );
	void setStatusDEX( int addVolume );
	void setStatusINT( int addVolume );
	void setStatusMEN( int addVolume );
	//��b�X�e�[�^�X�␳�l�Q�b�^�Q
	int getCalcStatusHP(void);
	int getCalcStatusSP(void);
	int getCalcStatusSTR(void);
	int getCalcStatusVIT(void);
	int getCalcStatusAGI(void);
	int getCalcStatusDEX(void);
	int getCalcStatusINT(void);
	int getCalcStatusMEN(void);
	//�����X�e�[�^�X�␳�l�Q�b�^�Q
	int getCalcStatusATK(void);
	int getCalcStatusADDATK(void);
	int getCalcStatusATKRATE(void);
	int getCalcStatusDEF(void);
	int getCalcStatusMATK(void);
	int getCalcStatusMDEF(void);
	int getCalcStatusASPD(void);
	int getCalcStatusCSPD(void);
	int getCalcStatusHIT(void);
	int getCalcStatusAVOID(void);
	int getCalcStatusFLEX(void);
	int getCalcStatusREGIST( int elementName );
	int getCalcStatusCRITRATE(void);
	int getCalcStatusCRITLEVEL(void);
	//�X�e�[�^�X�Čv�Z
	void resetCalcStatus(void);
	//����̃Z�b�g
	void setEquipWeapon( int takeNumber );
	//�h��̃Z�b�g
	void setEquipArmor( int takeNumber );
	//�X�s���b�g�̃Z�b�g
	void setEquipSpilit( int takeNumber );
	//�ʐ΂̃Z�b�g
	void setEquipWeaponStone( int takeNumber, int setSlot );
	void setEquipArmorStone( int takeNumber, int setSlot );

	//�Z�[�u�p�f�[�^�̐���
	CharacterSaveData createSaveData(void);

	//constructor
	Character(void);
	~Character(void);

private:
	//field
	std::string name;
	std::string face;
	int	statusHP;
	int	statusSP;
	int	statusSTR;
	int	statusVIT;
	int	statusAGI;
	int	statusDEX;
	int	statusINT;
	int	statusMEN;
	int	statusLevel;
	int	nowHP;
	int	nowSP;
	int	exp;
	int	level;
	int	statusPoint;
	int	equipWeapon;
	int	equipArmor;
	int	equipSpilit;
	int	characterType;
	int	elementType[7];

	std::vector<int>  equipJuelWeapon;
	std::vector<int>  equipJuelArmor;

	//method
};
