#include "Circle.h"

Circle::Circle(int l, int t, int r, int b, HDC h) : Shape(l, t, r, b, h)
{
	//empty
}

void Circle::repaint() {
	::Ellipse(hdc, left_, top_, right_, bottom_);
}
