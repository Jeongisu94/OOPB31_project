#include "Line.h"

Line::Line(int l , int t, int r, int b, HDC h) : Shape(l,t,r,b, h)
{
	//empty
}

void Line::repaint() {
	::MoveToEx(hdc,left_, top_, NULL);
	::LineTo(hdc, right_,bottom_);
}

