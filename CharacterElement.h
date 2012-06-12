#pragma once
#include <vector>
#include <string>
#include "ListItem.h"

class CharacterElement
{
public:
	CharacterElement( const std::vector<std::string>& cash );
	~CharacterElement(void);

	//method
	int	getRiseStatus( int statusCode );
	int getResistStatus( int elementCode );
	ListItem* createListItem( int width );

private:
	//field
	double      addRiseStatus[8];
	int         resistStatus[7];
	int         stringColor;
	std::string infomationComment;
	std::string infomationString;

};
