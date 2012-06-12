#pragma once
#include "Seane.h"
#include "ListWindow.h"

class TitleSeane : public Seane{
public:
	//method
	void draw(void);
	void calc(void);

	//constructor
	TitleSeane(void);
	~TitleSeane(void);

private:
	int backimage;
};
