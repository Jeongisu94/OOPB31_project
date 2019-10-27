#pragma once
#include "Shape.h"

class Line : public Shape {
public:
	Line(int, int, int, int, HDC);

	virtual void repaint();
};

