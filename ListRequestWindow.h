/*
取得リストウインドウ本体
ListRequestWindow[ DrawObject<-Window<-InputWindow<-ListRequestWindow ]

外部からデータをリクエストし取得したリストから選択ウインドウを描画する本体。
生成時にデータはリクエストしないので、一度リクエストしないと描画しない。
使用するデータ量はリクエストにより様々の為、上下スクロールに対応する。

ListRequestWindowの責任:取得リストウインドウの選択処理と描画。
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

	//リストの取得
	//Take:所持中　Unused:所持中未使用　接頭なし:ショップ購入可能
	//キャラクター特性
	void requestListCharacterType(void);
	//属性特性
	void requestListCharacterElement(void);
	//その他アイテム
	void requestListTakeOtherItem(void);
	void requestListOtherItem(void);
	//消費アイテム
	void requestListTakeUseItem(void);
	//武器
	void requestListTakeWeapon(void);
	void requestListUnusedWeapon(void);
	void requestListWeapon(void);
	//防具
	void requestListTakeArmor(void);
	void requestListUnusedArmor(void);
	void requestListArmor(void);
	//玉石
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

	//取得したItemSizeに合わせた選択枠表示
	void drawSelectAttachItem( ItemSize size );

	//Windowが保持しているItemのリストを破棄
	void ListAllClear(void);

	//スクロールカウンタのリセット
	void resetAnimateCount(void);

	//カウンタ状態に応じたスクロール位置操作
	void countUpScroll(void);
};
