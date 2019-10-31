#include "Rect.h"

Rect::Rect(int l , int t, int r, int b, HDC h) : Shape(l,t,r,b, h) {
	//empty
}

void Rect::repaint() {
	::Rectangle(hdc, left_, top_, right_, bottom_);
}
