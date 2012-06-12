#include "CharacterElement.h"

CharacterElement::CharacterElement( const std::vector<std::string>& cash ){
	for( int i = 0; i < 8; i++ ){
		addRiseStatus[i] = atof( cash[i].c_str() );
		if( i < 7 ){
			resistStatus[i] = atoi( cash[i + 8].c_str() );
		}
	}
	stringColor = atoi( cash[15].c_str() );
	infomationComment = cash[16];
	infomationString = cash[17];
}

CharacterElement::~CharacterElement(void){
}

int	CharacterElement::getRiseStatus( int statusCode ){
	return 0;
}

int CharacterElement::getResistStatus( int elementCode ){
	return 0;
}

ListItem* CharacterElement::createListItem( int width ){
	ListItem* get = new ListItem( 0, 0, width, 20, this->infomationString );
	return get;
}