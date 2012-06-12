#pragma once
#include "seane.h"
#include "ListWindow.h"

class CampSeane : public Seane{
public:
	//method
	void draw(void);
	void calc(void);

	//constructor
	CampSeane(void);
	~CampSeane(void);

private:
	int backimage;

};
