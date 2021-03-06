#include "ListRequestWindow.h"
#include "GameDataManager.h"
#include "CharacterManager.h"

ListRequestWindow::ListRequestWindow( int x, int y, int width, int num, listcode code ):
//init list
InputWindow( x, x + width, y, y + (num * 20), num ),
selectPosition( 0 ),
animateCount( 10 ),
scrollPosition( x + 6 ){
//list end

	//コードに応じた初期リスト生成
	switch( code ){
		case CTYPE:
			requestListCharacterType();
			break;

		case CELEMENT:
			requestListCharacterElement();
			break;

		case TOTHER:
			requestListTakeOtherItem();
			break;

		case OTHER:
			requestListOtherItem();
			break;

		case TUSE:
			requestListTakeUseItem();
			break;

		case TWEAPON:
			requestListTakeWeapon();
			break;

		case UWEAPON:
			requestListUnusedWeapon();
			break;

		case WEAPON:
			requestListWeapon();
			break;

		case TARMOR:
			requestListTakeArmor();
			break;

		case UARMOR:
			requestListUnusedArmor();
			break;

		case ARMOR:
			requestListArmor();
			break;

		case TSTONE:
			requestListTakeStone();
			break;

		case USTONE:
			requestListUnusedStone();
			break;

		case STONE:
			requestListStone();
			break;
	}

	//初期位置セット
	for( unsigned int i = 0; i < item.size(); i++ ){
		item[i]->setItemPosition( this->xPosition, this->yPosition + ( i * 20 ) );
	}

}

ListRequestWindow::~ListRequestWindow(void){
	for( int i = 0; i < item.size() - 1; i++ ){
		delete item[i];
	}
	item.clear();
}

void ListRequestWindow::resetAnimateCount(void){
	animateCount = 0;
}

void ListRequestWindow::setListItemPosition(void){
	for( int i = 0; i < item.size() - 1; i++ ){
		item[i]->setItemPosition( xPosition, scrollPosition + (i * 20) );
	}
}

void ListRequestWindow::countUpScroll(void){
	if( animateCount < 6 ){
		scrollPosition += ( scrollPosition - ( yPosition - ( selectPosition * 20 ))) * ( 5 + animateCount ) / 10.0;
		setListItemPosition();
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
	SetDrawArea( xPosition, yPosition + 1 , getxPosition2(), getyPosition2() - 2 );
	for( unsigned int i = 0; i < item.size(); i++ ){
		item[i]->draw();
	}
	SetDrawArea( 0, 0, 640, 480 );
	drawSelectAttachItem( item[getNowSelectItem()]->getItemSize() );
}

void ListRequestWindow::ListAllClear(void){

	if( item.size() == 0 ) return;
	
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
