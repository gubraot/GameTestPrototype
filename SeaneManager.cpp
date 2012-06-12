#include "SeaneManager.h"
#include "Seane.h"

SeaneManager::SeaneManager(void){
	//初期シーンセット
	this->seane = new CharacterCreateSeane();
	Seane::setSeaneManager(this);
}

SeaneManager::~SeaneManager(void){
}

void SeaneManager::drawSeane(void){
	this->seane->draw();
}

void SeaneManager::calcSeane(void){
	this->seane->calc();
}

void SeaneManager::resetSeane( int seane ){
	delete this->seane;

	switch( seane ){
		case SEANETITLE:
			this->seane = new TitleSeane();
			break;

		case SEANECAMP:
			this->seane = new CampSeane();
			break;

		case SEANECCREATE:
			this->seane = new CharacterCreateSeane();
			break;
	}
}