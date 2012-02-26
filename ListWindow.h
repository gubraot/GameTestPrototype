/*
���X�g�E�C���h�E�{��:��{
ListWindow[ DrawObject<-Window<-InputWindow<-ListWindow ]

�R���X�g���N�^�œn��������������1�s�I�����j���[�̕`��Ə����B

ListWindow�̐ӔC:���X�g�E�C���h�E�̑I�������ƕ`��B
*/

#pragma once
#include "InputWindow.h"
#include "ListItem.h"
#include <vector>
#include <string>

class ListWindow : public InputWindow{
public:
	//method
	//�`��̖{��
	void draw(void);
	//�������̖{��
	void calc(void);

	//constructor
	ListWindow( int x, int y, int width, int num, char* manuString ...);
	~ListWindow(void);

protected:
	//field
	std::vector<ListItem *> item;

	//private method
	//�I�𒆂�ManuItem�ɍ��킹�đI��g�̕`��(todo:�`��ӔC��ListItem�Ɉړ�)
	void drawSelectAttachItem( ItemSize size );
};
