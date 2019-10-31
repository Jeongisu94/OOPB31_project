#include "Shape.h"

Shape::Shape(int l , int t, int r, int b, HDC h) : left_(l), top_(t), right_(r), bottom_(b), hdc(h) {
	//empty
}

bool Shape::belongs(int x, int y) {
	//empty
	return false;
}

void Shape::repaint() {
	
}
