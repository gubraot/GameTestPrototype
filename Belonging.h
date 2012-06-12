/*
所持物データ抽象クラス
Belonging

個体でデータ異なる所持物抽象オブジェクト。
*/

#pragma once
#include <string>
#include <vector>

class Item;

class Belonging{
public:
	//method

	//constructor
	//新規登録用
	Belonging( int baseNumber );
	//ロードデータ用
	Belonging( const std::vector<std::string>& cash );
	~Belonging(void);

private:
	//field
	int takeStatus;
	int baseItemNumber;
};
