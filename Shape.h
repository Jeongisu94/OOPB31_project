#pragma once
#include "framework.h"
class Shape {
public:
	int x1, y1, x2, y2; // 시작점과 끝점 좌표
	HDC hdc;

	Shape(int, int, int, int, HDC);
	virtual void repaint() = 0;
};

