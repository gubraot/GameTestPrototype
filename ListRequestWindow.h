/*
�擾���X�g�E�C���h�E�{��
ListRequestWindow[ DrawObject<-Window<-InputWindow<-ListRequestWindow ]

�O������f�[�^�����N�G�X�g���擾�������X�g����I���E�C���h�E��`�悷��{�́B
�������Ƀf�[�^�̓��N�G�X�g���Ȃ��̂ŁA��x���N�G�X�g���Ȃ��ƕ`�悵�Ȃ��B
�g�p����f�[�^�ʂ̓��N�G�X�g�ɂ��l�X�ׁ̈A�㉺�X�N���[���ɑΉ�����B

ListRequestWindow�̐ӔC:�擾���X�g�E�C���h�E�̑I�������ƕ`��B
*/
#pragma once
#include <Dxlib.h>
#include "inputwindow.h"
#include "ListItem.h"
#include <vector>
#include <string>

class ListRequestWindow : public InputWindow{
public:
	//method
	void calc(void);
	void draw(void);

	//���X�g�̎擾
	//Take:�������@Unused:���������g�p�@�ړ��Ȃ�:�V���b�v�w���\
	//�L�����N�^�[����
	void requestListCharacterType(void);
	//��������
	void requestListCharacterElement(void);
	//���̑��A�C�e��
	void requestListTakeOtherItem(void);
	void requestListOtherItem(void);
	//����A�C�e��
	void requestListTakeUseItem(void);
	//����
	void requestListTakeWeapon(void);
	void requestListUnusedWeapon(void);
	void requestListWeapon(void);
	//�h��
	void requestListTakeArmor(void);
	void requestListUnusedArmor(void);
	void requestListArmor(void);
	//�ʐ�
	void requestListTakeStone(void);
	void requestListUnusedStone(void);
	void requestListStone(void);

	//constructor
	ListRequestWindow( int x, int y, int width, int num );
	~ListRequestWindow(void);

private:
	//field
	std::vector<ListItem *> item;
	int animateCount;
	int selectPosition;
	int scrollPosition;

	//private method

	//�擾����ItemSize�ɍ��킹���I��g�\��
	void drawSelectAttachItem( ItemSize size );

	//Window���ێ����Ă���Item�̃��X�g��j��
	void ListAllClear(void);

	//�X�N���[���J�E���^�̃��Z�b�g
	void resetAnimateCount(void);

	//�J�E���^��Ԃɉ������X�N���[���ʒu����
	void countUpScroll(void);
};
