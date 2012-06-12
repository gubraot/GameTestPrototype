#include "Seane.h"
#include "SeaneManager.h"

SeaneManager* Seane::smanager;

Seane::Seane(void){
	hierarchical.push_back( INIT );
	window = NULL;
}

Seane::~Seane(void)
{
	for( unsigned int i = 0; i < child.size(); i++ ){
		delete child[i];
	}
	for( unsigned int i = 0; i < layer.size(); i++ ){
		delete layer[i];
	}
	delete window;
}

void Seane::setSeaneManager( SeaneManager *manager ){
	Seane::smanager = manager;
}

void Seane::addChild( DrawObject *object ){
	child.push_back( object );
}

void Seane::deleteChild(void){
	for( unsigned int i = 0; i < child.size(); i++ ){
		delete child[i];
	}
	child.clear();
}
void Seane::childCalc(void){
	if( layer.size() == 0 ){
		for( unsigned int i = 0; i < child.size(); i++ ){
			child[i]->calc();
		}
	}
}

void Seane::childDraw(void){
	if( layer.size() == 0 ){
		for( unsigned int i = 0; i < child.size(); i++ ){
			child[i]->draw();
		}
	}
}

void Seane::inputCalc(void){
	if( window != NULL ){
		window->calc();
	}
}

void Seane::inputDraw(void){
	if( window != NULL ){
		window->draw();
	}
}

int  Seane::getHierarchicalLevel( int level ){
	return hierarchical[level];
}

int  Seane::getHierarchical(void){
	int lastLevel = hierarchical.size() - 1;
	return hierarchical[lastLevel];
}

int  Seane::getHierarchicalNum(void){
	return hierarchical.size() - 1;
}

void Seane::setHierarchical( int set ){
	int lastLevel = hierarchical.size() - 1;
	hierarchical[lastLevel] = set;
}

void Seane::deleteHierarchical(void){
	hierarchical.pop_back();
	//0–¢–ž–hŽ~
	if( hierarchical.size() == 0 ){
		hierarchical.push_back( INIT );
	}else{
		int lastLevel = hierarchical.size() - 1;
		hierarchical[lastLevel] = INIT;
	}
	delete window;
	window = NULL;
}

void Seane::addHierarchical(void){
	hierarchical.push_back( INIT );
	delete window;
	window = NULL;
}

void Seane::setInputObject( InputWindow *object ){
	if( window != NULL ){
		delete window;
	}
	window = object;
}

InputWindow* Seane::getInputObject(void){
	return window;
}


void Seane::setSeaneRequest( int enumSeane ){
	manager->resetSeane( enumSeane );
}