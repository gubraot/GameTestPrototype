/*
�������f�[�^���ۃN���X
Belonging

�̂Ńf�[�^�قȂ鏊�������ۃI�u�W�F�N�g�B
*/

#pragma once
#include <string>
#include <vector>

class Item;

class Belonging{
public:
	//method

	//constructor
	//�V�K�o�^�p
	Belonging( int baseNumber );
	//���[�h�f�[�^�p
	Belonging( const std::vector<std::string>& cash );
	~Belonging(void);

private:
	//field
	int takeStatus;
	int baseItemNumber;
};
