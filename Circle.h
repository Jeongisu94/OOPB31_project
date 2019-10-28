#pragma once
#include "Shape.h"
class Circle : 	public Shape {
public:
	Circle(int, int, int, int, HDC);

	virtual void repaint();
};

