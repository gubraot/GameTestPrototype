#include "ListRequestWindow.h"
#include "GameDataManager.h"
#include "CharacterManager.h"

ListRequestWindow::ListRequestWindow( int x, int y, int width, int num ):
//init list
InputWindow( x, x + width, y, y + (num * 20), num ),
selectPosition( 0 ),
animateCount( 10 ),
scrollPosition( x + 6 ){
//list end
}

ListRequestWindow::~ListRequestWindow(void){
}

void ListRequestWindow::resetAnimateCount(void){
	animateCount = 0;
}

void ListRequestWindow::countUpScroll(void){
	if( animateCount < 5 ){
		scrollPosition += scrollPosition - ( yPosition - ( selectPosition * 20 ) );
		//todo:scrollPositionに応じてListItemの座標の再セット
	}
}

void ListRequestWindow::calc(void){
	if( InputManager::getInstance().getKeyStatus( KEY_INPUT_Z ) == TRUE ){
		this->setInputResult();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_X ) == TRUE ){
		this->setInputResultCansel();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_UP ) == TRUE ){
		this->setSelectPrev();
	}else if( InputManager::getInstance().getKeyStatus( KEY_INPUT_DOWN ) == TRUE ){
		this->setSelectNext();
	}

	//カウントが残っている時は移動中の位置になってる…はず
	countUpScroll();

}

void ListRequestWindow::draw(void){
	windowDraw();
	SetDrawArea( xPosition, yPosition + 6 , xPosotion2, yPosition2 - 6 );
	for( unsigned int i = 0; i < item.size(); i++ ){
		item[i]->draw();
		if( i == getNowSelectItem() ){
			drawSelectAttachItem( item[getNowSelectItem()]->getItemSize() );
		}
	}
	SetDrawArea( 0, 0, 640, 480 );
}

void ListRequestWindow::ListAllClear(void){
	
	for( int i = 0; i < item.size() - 1; i++ ){
		delete item[i];
	}
	item.clear();
}

void ListRequestWindow::requestListCharacterType(void){
	ListAllClear();
	DrawObject::getGameDataManager()->getListCharacterType( item );
}

void ListRequestWindow::requestListCharacterElement(void){
	ListAllClear();
	DrawObject::getGameDataManager()->getListCharacterElement( item );
}

void ListRequestWindow::requestListTakeOtherItem(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListTakeOtherItem( item );
}

void ListRequestWindow::requestListOtherItem(void){
	ListAllClear();
	DrawObject::getGameDataManager()->getListOtherItem( item );
}

void ListRequestWindow::requestListTakeUseItem(void){
	ListAllClear();
	//DrawObject::getsaveDataManager()->getListTakeUseItem( item );
}

void ListRequestWindow::requestListTakeWeapon(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListTakeWeapon
}

void ListRequestWindow::requestListUnusedWeapon(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListUnusedWeapon( item );
}

void ListRequestWindow::requestListWeapon(void){
	ListAllClear();
	DrawObject::getGameDataManager()->getListWeapon( item );
}

void ListRequestWindow::requestListTakeArmor(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListTakeArmor( item );
}

void ListRequestWindow::requestListUnusedArmor(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListUnusedArmor( item );
}

void ListRequestWindow::requestListArmor(void){
	ListAllClear();
	DrawObject::getGameDataManager()->getListArmor( item );
}

void ListRequestWindow::requestListTakeStone(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListTakeStone( item );
}

void ListRequestWindow::requestListUnusedStone(void){
	ListAllClear();
	//DrawObject::getSaveDataManager()->getListUnusedStone( item );
}

void ListRequestWindow::requestListStone(void){
	ListAllClear();
	DrawObject::getGameDataManager()->getListStone( item );
}

void ListRequestWindow::drawSelectAttachItem( ItemSize size ){
	Draw_select( size.positionX[0], size.positionX[1], size.positionY[0], size.positionY[1] );
}
