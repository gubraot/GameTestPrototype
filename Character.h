/*
キャラクターオブジェクト案
Character

データとしてのキャラクター状態の管理。(案)
*/

#pragma once
#include <string>
#include <vector>

//セーブデータ化用の入れ物
struct CharacterSaveData{
	char name[20];
	char face[60];
	int  exp;
	int  level;
	int  statusPoint;
	int  characterType;
	int  basicStatus[8];
	int  elementPoint[7];
<<<<<<< HEAD
	int  nowHP;
=======
	int	 nowHP;
>>>>>>> GitHub/master
	int  newSP;
	int  equip[3];
	int  weaponJuel[8];
	int  armorJuel[5];
};


class Character{
public:
<<<<<<< HEAD
	//enum
	enum{
		FIRE = 0,
		WIND,
		EARTH,
		AQUA,
		DARK,
		LIGHT,
		NONE
	};

=======
>>>>>>> GitHub/master
	//method
	//基礎ステータス加算セット
	void setStatusHP( int addVolume );
	void setStatusSP( int addVolume );
	void setStatusSTR( int addVolume );
	void setStatusVIT( int addVolume );
	void setStatusAGI( int addVolume );
	void setStatusDEX( int addVolume );
	void setStatusINT( int addVolume );
	void setStatusMEN( int addVolume );
	//基礎ステータス補正値ゲッタ群
	int getCalcStatusHP(void);
	int getCalcStatusSP(void);
	int getCalcStatusSTR(void);
	int getCalcStatusVIT(void);
	int getCalcStatusAGI(void);
	int getCalcStatusDEX(void);
	int getCalcStatusINT(void);
	int getCalcStatusMEN(void);
	//実効ステータス補正値ゲッタ群
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
	//ステータス再計算
	void resetCalcStatus(void);
	//武器のセット
	void setEquipWeapon( int takeNumber );
	//防具のセット
	void setEquipArmor( int takeNumber );
	//スピリットのセット
	void setEquipSpilit( int takeNumber );
	//玉石のセット
	void setEquipWeaponStone( int takeNumber, int setSlot );
	void setEquipArmorStone( int takeNumber, int setSlot );

	//セーブ用データの生成
	CharacterSaveData createSaveData(void);

	//constructor
<<<<<<< HEAD
	//キャラクター作成時用
	Character( std::string name, std::string face, int typeNum,
			   int fire, int wind, int earth, int aqua, int dark, int right, int none );
	//ロードデータ用
	Character( const std::vector<std::string>& cash );
=======
	Character(void);
>>>>>>> GitHub/master
	~Character(void);

private:
	//field
	std::string name;
	std::string face;
<<<<<<< HEAD
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
=======
	int			statusHP;
	int			statusSP;
	int			statusSTR;
	int			statusVIT;
	int			statusAGI;
	int			statusDEX;
	int			statusINT;
	int			statusMEN;
	int			statusLevel;
	int			nowHP;
	int			nowSP;
	int			exp;
	int			level;
	int			statusPoint;
	int			equipWeapon;
	int			equipArmor;
	int			equipSpilit;
	int			characterType;
	int			elementType[7];
>>>>>>> GitHub/master

	std::vector<int>  equipJuelWeapon;
	std::vector<int>  equipJuelArmor;

	//method
};
