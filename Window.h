/*
ウインドウ構成オブジェクト抽象
Window[ DrawObject<-Window ]

ウインドウ窓を用いて描画する何かに必ず必要となる部分を纏めた抽象クラス。
ウインドウパーツを作る際継承して作成する

Windowの責任:ウインドウパーツ描画における基礎部分の処理。
*/

#pragma once
#include "drawobject.h"


class Window : public DrawObject{
public:
	//method
	//描画の本体(デフォルトは保存値に基いた枠表示のみ)
	void draw(void);
	//裏処理の本体
	inline virtual void calc(void){};
	//右下座標系のゲット
	int getxPosition2(void);
	int getyPosition2(void);

	//constructor
	Window(int x1, int x2, int y1, int y2);
	virtual ~Window(void);

protected:
	//protected method
	//ウインドウ枠描画
	void windowDraw(void);
	//選択枠描画
	void Draw_select( int x1, int x2, int y1, int y2 );

private:
	//field
	int xPosition2;
	int yPosition2;
	int drawCount;

	int windowParts[9];
	int windowSelectParts[9];

	//private method
	//指定範囲を敷き詰める画像描画
	void tileImageDraw( int x1, int x2, int y1, int y2, int image );
};
