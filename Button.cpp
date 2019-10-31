#include "Button.h"

Button::Button(int i, int t, int r, int b, HDC h, std::string title) :Rect(i,t,r,b,h) {
	title_ = title;
}

void Button::repaint() {
	Rect::repaint();

	TextOutA(hdc, left_ + 3, top_ + 20, title_.c_str(), strlen(title_.c_str()));
}

bool Button::belongs(int x, int y) { //자기 구역안에있으면 true


if ( ( left_ < x ) && (x <= right_) && (y < bottom_)) {
	return true;
} else {

	return false;
}
}


