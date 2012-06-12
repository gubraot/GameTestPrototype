#include "CharacterDataType.h"

CharacterDataType::CharacterDataType( const std::vector<std::string>& cash ){
	for( int i = 0; i < 8; i++ ){
		initStatus[i] = atoi( cash[i].c_str() );
		riseStatus[i] = atof( cash[i + 8].c_str() );
		needStatusPoint[i] = atoi( cash[i + 16].c_str() );
	}
	stringColor = atoi( cash[24].c_str() );
	infomationComment = cash[25];
	infomationString = cash[26];
	typeName = cash[27];
}

CharacterDataType::~CharacterDataType(void){
}

int   CharacterDataType::getInitStatus( int statusNum ){
	return initStatus[statusNum];
}

double CharacterDataType::getRiseStatus( int statusNum ){
	return riseStatus[statusNum];
}

int   CharacterDataType::getNeedPoints( int statusNum ){
	return needStatusPoint[statusNum];
}

ListItem* CharacterDataType::createListItem( int width ){
	std::string name = "ƒ^ƒCƒv" + typeName;
	ListItem* get = new ListItem( 0, 0, width, 20, name );
	return get;
}