#pragma once
#include "inputwindow.h"
#include <string>
#include <vector>

class FaceSelectWindow : public InputWindow{
public:
	FaceSelectWindow(void);
	~FaceSelectWindow(void);

	void draw(void);
	void calc(void);

private:
	std::vector<int> faceImageHundle;
};
