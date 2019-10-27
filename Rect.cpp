#include "Rect.h"

Rect::Rect(int tx1, int ty1, int tx2 , int ty2, HDC h)
{
	x1 = tx1;
	y1 = ty1;
	x2 = tx2;
	y2 = ty2;
	hdc = h;

}

void Rect::repaint() {
	::Rectangle(hdc, x1, y1, x2, y2);
	OutputDebugString(L"1231231\n");
}
