#pragma once
#include <vector>
#include <string>
#include "ListItem.h"

class CharacterDataType{
public:
	CharacterDataType( const std::vector<std::string>& cash );
	~CharacterDataType(void);

	//method
	int    getInitStatus( int statusNum );
	double getRiseStatus( int statusNum );
	int    getNeedPoints( int statusNum );
	ListItem* createListItem( int width );

private:
	//field
	int         initStatus[8];
	double      riseStatus[8];
	int         needStatusPoint[8];
	int         stringColor;
	std::string infomationComment;
	std::string infomationString;
	std::string typeName;

};
