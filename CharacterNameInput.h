#pragma once
#include "Inputwindow.h"
#include <string>

class CharacterNameInput : public InputWindow{
public:
	CharacterNameInput(void);
	~CharacterNameInput(void);
	void draw(void);
	void calc(void);

private:
	std::string returnstring;
};
