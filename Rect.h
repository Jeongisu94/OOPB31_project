#pragma once
#include "Shape.h"

class Rect :public Shape{ 
	public:

	Rect(int, int, int, int, HDC);

	virtual void repaint();

};

