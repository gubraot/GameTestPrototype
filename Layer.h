#pragma once
#include "DrawObject.h"
#include <vector>

class Layer{
public:
	Layer(void);
	~Layer(void);
	//method
	inline virtual void draw(void){};
	inline virtual void calc(void){};
	void addChild( DrawObject* object );

protected:
	//field
	std::vector<DrawObject*> child;
	
	//method
};
