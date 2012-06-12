/*
���X�g�E�C���h�E�\���A�C�e���A�h��
ListItemArmor[ DrawObject<-ListItem<-ListItemArmor ]

�h��A�C�e���̃��X�g�A�C�e���`��Əڍ׏��`���ێ�����\���I�u�W�F�N�g�B
�Q�[���f�[�^�܂��̓Z�[�u�f�[�^�Ƃ��ẴA�C�e���I�u�W�F�N�g����̂ݐ���
*/
#pragma once
#include "listitem.h"

class Item;

class ListItemArmor : public ListItem{
public:
	//method
	void draw(void);
	void calc(void);
	void InfomationDraw(void);

	//constructor
	ListItemArmor( int width, Item* object, int takeNumber = -1 );
	~ListItemArmor(void);

private:
	//field
	const int takeNumber;
	const Item* pointer;
};
