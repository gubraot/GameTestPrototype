#pragma once
#include <string>
#include <vector>
#include "Seane.h"
#include "TitleSeane.h"
#include "CampSeane.h"
#include "CharacterCreateSeane.h"

enum{
	SEANETITLE,
	SEANECAMP,
	SEANECCREATE
};

class SeaneManager{
public:
	//method
	void setSeane( Seane *seane );
	void drawSeane(void);
	void calcSeane(void);
	void resetSeane( int seaneCode );

	//constructor
	SeaneManager(void);
	~SeaneManager(void);

private:
	Seane *seane;
};
