#include "Circle.h"

Circle::Circle(int tx1, int ty1, int tx2, int ty2, HDC h) : Shape(tx1, ty1, tx2, ty2, h)
{
	//empty
}

void Circle::repaint() {
	::Ellipse(hdc, x1, y1, x2, y2);
}
