#pragma once
#include "seane.h"

class CharacterCreateSeane : public Seane{
public:
	//method
	void draw(void);
	void calc(void);

	//constructor
	CharacterCreateSeane(void);
	~CharacterCreateSeane(void);

private:
	std::string inputName;
	void inputCharacterName(void);
};
