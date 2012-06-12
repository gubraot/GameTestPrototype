#include "TitleSeane.h"
#include "SeaneManager.h"

TitleSeane::TitleSeane():Seane(){
	backimage = LoadGraph( "grf/sys/Enter_dungeon.png" );
}

TitleSeane::~TitleSeane(void){
	DeleteGraph( backimage );
}

void TitleSeane::calc(void){
	childCalc();
	inputCalc();

	switch( getHierarchicalLevel( 0 ) ){
		case INIT:
			setInputObject( new ListWindow( 100, 350, 140, 3, "‚Í‚¶‚ß‚©‚ç", "‚Â‚Ã‚«‚©‚ç", "ƒQ[ƒ€I—¹" ) );
			setHierarchical( SELECT );
			break;

		case SELECT:
			setHierarchical( window->getInputResult() );
			if( getHierarchical() >= 0 ){
				addHierarchical();
			}
			break;

		case CANSEL:
			deleteHierarchical();
			break;

		case 0:
			setSeaneRequest( SEANECAMP );
			break;
	}
}

void TitleSeane::draw(void){
	DrawGraph( 0, 0, backimage, FALSE );
	this->childDraw();
	inputDraw();
}