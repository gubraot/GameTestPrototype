/*
���X�g�E�C���h�E�\���A�C�e������
ListItem[ DrawObject<-ListItem ]

��{�I��ListItem��K�v�Ƃ���ListWindow�n�񂩁AListWindow�n��ɂ��DataManager�ւ̎擾���N�G�X�g�ɂ�萶���A
ListItem�֌W�͒P�̂Ŏg�p�ł��Ȃ��B���e�ɉ�����Draw,Calc���X�V�����T�u�N���X���g�p����B

ListItem�̐ӔC:�I������郁�j���[�A�C�e������ɑ΂���`��ƕ`��Ɋւ��鏈���B
*/

#pragma once
#include "drawobject.h"
#include <string>

//�A�C�e�����W�ʒu�Ԓl ItemSize
struct ItemSize{
	int positionX[2];
	int positionY[2];
};

class ListItem : public DrawObject{
public:
	//method
	//�`��{��(�e�X�g�p�̃f�t�H���g�̓��j���[������̕\��)
	void draw();
	//�`��O�����{��
	inline void calc(){};
	//�A�C�e�����W�̎擾
	ItemSize getItemSize(void);

	//constructor
	ListItem( int x, int y, int width, int height, std::string listString );
	inline virtual ~ListItem(void){};

private:
	//field
	int xPosition2;
	int yPosition2;
	std::string listString;
};
