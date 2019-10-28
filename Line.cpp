#include "Line.h"

Line::Line(int tx1, int ty1, int tx2, int ty2, HDC h ) : Shape(tx1, ty1, tx2, ty2, h)
{
	//empty
}

void Line::repaint() {
	::MoveToEx(hdc,x1, y1, NULL);
	::LineTo(hdc, x2,y2);
}

