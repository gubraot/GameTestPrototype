/*
リストウインドウ構成アイテム抽象
ListItem[ DrawObject<-ListItem ]

基本的にListItemを必要とするListWindow系列か、ListWindow系列によるDataManagerへの取得リクエストにより生成、
ListItem関係は単体で使用できない。内容に応じてDraw,Calcを更新したサブクラスを使用する。

ListItemの責任:選択されるメニューアイテム動作に対する描画と描画に関する処理。
*/

#pragma once
#include "drawobject.h"
#include <string>

//アイテム座標位置返値 ItemSize(削除？)
struct ItemSize{
	int positionX[2];
	int positionY[2];
};

class ListItem : public DrawObject{
public:
	//method
	//描画本体(テスト用のデフォルトはメニュー文字列の表示)
	void draw(void);
	//説明噴出し表示本体
	virtual inline void InfomationDraw(void){};
	//描画前処理本体
	virtual inline void calc(void){};
	//アイテム座標の取得(削除？)
	ItemSize getItemSize(void);

	//constructor
	ListItem( int x, int y, int width, int height, std::string listString );
	inline virtual ~ListItem(void){};

private:
	//field
	static int infoBoxPositionX[2];
	static int infoBoxPositionY[2];

	int xPosition2;
	int yPosition2;
	std::string listString;

	//private method
	//説明窓を動かす(暫定で4行想定)
	void infoBoxMoving(void);
};
