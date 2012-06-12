/*
�E�C���h�E�\���I�u�W�F�N�g����
Window[ DrawObject<-Window ]

�E�C���h�E����p���ĕ`�悷�鉽���ɕK���K�v�ƂȂ镔����Z�߂����ۃN���X�B
�E�C���h�E�p�[�c�����یp�����č쐬����

Window�̐ӔC:�E�C���h�E�p�[�c�`��ɂ������b�����̏����B
*/

#pragma once
#include "drawobject.h"


class Window : public DrawObject{
public:
	//method
	//�`��̖{��(�f�t�H���g�͕ۑ��l�Ɋ���g�\���̂�)
	void draw(void);
	//�������̖{��
	inline virtual void calc(void){};
	//�E�����W�n�̃Q�b�g
	int getxPosition2(void);
	int getyPosition2(void);

	//constructor
	Window(int x1, int x2, int y1, int y2);
	virtual ~Window(void);

protected:
	//protected method
	//�E�C���h�E�g�`��
	void windowDraw(void);
	//�I��g�`��
	void Draw_select( int x1, int x2, int y1, int y2 );

private:
	//field
	int xPosition2;
	int yPosition2;
	int drawCount;

	int windowParts[9];
	int windowSelectParts[9];

	//private method
	//�w��͈͂�~���l�߂�摜�`��
	void tileImageDraw( int x1, int x2, int y1, int y2, int image );
};
