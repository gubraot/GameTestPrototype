#pragma once
#include "window.h"
#include <string>

class MessageWindow : public Window{
public:
	MessageWindow(int x, int y, int width, std::string message );
	~MessageWindow(void);

	void draw(void);

private:
	std::string message;
};
