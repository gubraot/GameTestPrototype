#pragma once
#include "Character.h"
#include <string>
#include <vector>

//�V�K�������̏����ꕨ
struct newCharacter{
};

//�f�[�^�ۑ����̏����ꕨ
struct saveCharacter{
};

class CharacterManager{
public:
	//method
	//�V�K�L�����N�^�[�𐶐�����
	void newCreateCharacter( newCharacter data );

	//�����L�����N�^�[���폜����
	void deleteCharacter( int position );

	//�L�����N�^�[���X�g�A�C�e���̐���(requestListWindow�p)
	void createCharacterListItem( int position );

	//�w��L�����N�^�[�̃I�u�W�F�N�g��Ԃ�
	void getCharacterObject( int position );


	//constructor
	CharacterManager(void);
	~CharacterManager(void);

private:
	//private method
	//�L�����N�^�[�S�̂̃Z�[�u�ƃ��[�h
	void characterDataLoad(void);
	void characterDataSave(void);

	//field
	std::vector<Character*> character;
	std::vector<Character*>	party;
};
