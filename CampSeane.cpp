#include "CampSeane.h"

CampSeane::CampSeane(void):Seane(){
	backimage = LoadGraph( "grf/sys/Enter_dungeon.png" );
}

CampSeane::~CampSeane(void){
	DeleteGraph( backimage );
}

void CampSeane::calc(void){
	childCalc();
	inputCalc();

	switch( getHierarchicalLevel( 0 ) ){
		case INIT:
			setInputObject( new ListWindow( 100, 100, 200, 5, "ƒ_ƒ“ƒWƒ‡ƒ“‚Ö", "ƒMƒ‹ƒh", "h‰®", "¤“X", "‚Å‚Î‚Á‚®" ) );
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

		case 0://ƒ_ƒ“ƒWƒ‡ƒ“‚Ö
			deleteHierarchical();
			break;

		case 1://ƒMƒ‹ƒh
			switch( getHierarchicalLevel( 1 ) ){
				case INIT:
					setInputObject( new ListWindow( 100, 100, 200, 4, "ƒLƒƒƒ‰ƒNƒ^ì¬", "ƒLƒƒƒ‰ƒNƒ^íœ", "Ä•Ò¬", "’¬‚É–ß‚é" ) );
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

				default:
					deleteHierarchical();
					break;
			}
			break;

		case 2://h‰®
			switch( getHierarchicalLevel( 1 ) ){
				case INIT:
					setInputObject( new ListWindow( 100, 100, 200, 3, "‹x‚Þ", "ƒZ[ƒu", "’¬‚É–ß‚é" ) );
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

				default:
					deleteHierarchical();
					break;
			}
			break;

		case 3://¤“X
			switch( getHierarchicalLevel( 1 ) ){
				case INIT:
					setInputObject( new ListWindow( 100, 100, 200, 5, "“¹‹ï‚Ìw“ü", "ŠŽ•i‚Ì”„‹p", "•Ší‚Ìw“ü", "–h‹ï‚Ìw“ü", "–ß‚é" ) );
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

				default:
					deleteHierarchical();
					break;
			}
			break;

		case 4://ƒfƒoƒbƒOƒƒjƒ…[
			deleteHierarchical();
			break;
	}
}

void CampSeane::draw(void){
	DrawGraph( 0, 0, backimage, FALSE );
	this->childDraw();
	inputDraw();
	DrawFormatString( 50, 50, GetColor( 255, 255, 255 ), "Œ»Ý‚ÌŠK‘wˆÊ’u:%d", this->hierarchical.size() ); 
}