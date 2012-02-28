/*
���͏�ԊǗ�
InputManager

���͏�Ԃ̎擾�ƍX�V�Ȃǂ����邾���BSingleton�I�u�W�F�N�g�B

InputManager�̐ӔC:���͏�Ԃ̎擾�ƊǗ��B
*/
#pragma once
#include <Dxlib.h>


//�g�p����ꍇ�A
//InputManager::getInstance().���\�b�h�ŃA�N�Z�X���Ďg�p

class InputManager{
public:
	//method
	//�L�[���͏�Ԃ̍X�V
	void updateKeyStatus(void);
	//�L�[���͏�Ԏ擾(�R�[�h��Dxlib��`�ɏ���
	bool getKeyStatus( int code );
	//�C���X�^���X�փA�N�Z�X
	inline static InputManager& getInstance(void){
		static InputManager singleton;
		return singleton;
	}

private:
	//field
	int  inputKey[256];
	bool keyStatus[256];

	//constructor
	InputManager(void);
	~InputManager(void);
};
