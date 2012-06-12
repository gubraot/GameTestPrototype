/*
�v���C�f�[�^�Ǘ��I�u�W�F�N�g
GameStatusManager

�v���C���ʂ𔺂��f�[�^�֌W���Ǘ�����I�u�W�F�N�g�B
*/

#pragma once
#include <string>
#include <vector>

class Belonging;

//�f�[�^�Z�[�u�p�̓��ꕨ
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
	//�Z�[�u�f�[�^�Ǎ�
	void dataLoadWeapon(void);
	void dataLoadArmor(void);
	void dataLoadSpilit(void);

	//�Q�[���f�[�^�ۑ�
	void dataSaveWeapon(void);
	void dataSaveArmor(void);
	void dataSaveSpilit(void);
};
