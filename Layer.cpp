#include "Layer.h"

Layer::Layer(void)
{
}

Layer::~Layer(void){
	for( unsigned int i = 0; i < child.size(); i++ ){
		delete child[i];
	}
}

void Layer::addChild( DrawObject *object ){
	child.push_back( object );
}