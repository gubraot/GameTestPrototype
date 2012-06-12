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
			setInputObject( new ListWindow( 100, 100, 200, 5, "�_���W������", "�M���h", "�h��", "���X", "�ł΂���" ) );
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

		case 0://�_���W������
			deleteHierarchical();
			break;

		case 1://�M���h
			switch( getHierarchicalLevel( 1 ) ){
				case INIT:
					setInputObject( new ListWindow( 100, 100, 200, 4, "�L�����N�^�쐬", "�L�����N�^�폜", "�ĕҐ�", "���ɖ߂�" ) );
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

		case 2://�h��
			switch( getHierarchicalLevel( 1 ) ){
				case INIT:
					setInputObject( new ListWindow( 100, 100, 200, 3, "�x��", "�Z�[�u", "���ɖ߂�" ) );
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

		case 3://���X
			switch( getHierarchicalLevel( 1 ) ){
				case INIT:
					setInputObject( new ListWindow( 100, 100, 200, 5, "����̍w��", "�����i�̔��p", "����̍w��", "�h��̍w��", "�߂�" ) );
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

		case 4://�f�o�b�O���j���[
			deleteHierarchical();
			break;
	}
}

void CampSeane::draw(void){
	DrawGraph( 0, 0, backimage, FALSE );
	this->childDraw();
	inputDraw();
	DrawFormatString( 50, 50, GetColor( 255, 255, 255 ), "���݂̊K�w�ʒu:%d", this->hierarchical.size() ); 
}