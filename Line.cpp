#include "Line.h"

Line::Line(int tx1, int ty1, int tx2, int ty2, HDC h) {
	x1 = tx1;
	y1 = ty1;
	x2 = tx2;
	y2 = ty2;
	hdc = h;

}

void Line::repaint() {
	::MoveToEx(hdc,x1, y1, NULL);
	::LineTo(hdc, x2,y2);
}
