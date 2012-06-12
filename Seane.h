#pragma once
#include "DrawObject.h"
#include "InputWindow.h"
#include "Layer.h"
#include <string>
#include <vector>

class SeaneManager;

class Seane{
public:
	Seane(void);
	virtual ~Seane(void);
	//method
	inline virtual void draw(void){};
	inline virtual void calc(void){};
	void addChild( DrawObject* object );
	void deleteChild(void);
	static void setSeaneManager( SeaneManager *manager );

protected:
	//field
	std::vector<DrawObject*> child;
	std::vector<Layer*> layer;
	std::vector<int> hierarchical;

	InputWindow *window;
	SeaneManager *manager;
	//method
	void childCalc(void);
	void childDraw(void);
	void inputCalc(void);
	void inputDraw(void);

	int  getHierarchicalLevel( int level );
	int  getHierarchical(void);
	int  getHierarchicalNum(void);
	void setHierarchical( int set );
	void deleteHierarchical(void);
	void addHierarchical(void);

	void setInputObject( InputWindow *object );
	InputWindow* getInputObject(void);

	void setSeaneRequest( int enumSeane );

private:
	static SeaneManager *smanager;
};
