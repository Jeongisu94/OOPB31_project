#include "Rect.h"

Rect::Rect(int xx1 ,int yy1 ,int xx2,int yy2,HDC h){
	x1 = xx1;
	y1 = yy1;
	x2 = xx2;
	y2 = yy2;
	hdc = h;
}

void Rect::repaint(){
	::Rectangle(hdc, x1,y1,x2,y2);
}
