/*
リストウインドウ本体:基本
ListWindow[ DrawObject<-Window<-InputWindow<-ListWindow ]

コンストラクタで渡した文字列を基に1行選択メニューの描画と処理。

ListWindowの責任:リストウインドウの選択処理と描画。
*/

#pragma once
#include "InputWindow.h"
#include "ListItem.h"
#include <vector>
#include <string>

class ListWindow : public InputWindow{
public:
	//method
	//描画の本体
	void draw(void);
	//裏処理の本体
	void calc(void);

	//constructor
	ListWindow( int x, int y, int width, int num, char* manuString ...);
	~ListWindow(void);

protected:
	//field
	std::vector<ListItem *> item;

	//private method
	//選択中のManuItemに合わせて選択枠の描画(todo:描画責任をListItemに移動)
	void drawSelectAttachItem( ItemSize size );
};
