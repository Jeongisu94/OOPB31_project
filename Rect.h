#pragma once
#include "framework.h"
class Rect {
public:
	int x1, y1, x2, y2; // 시작점과 끝점 좌표
	HDC hdc;
	Rect(int,int,int,int,HDC);
	void repaint();

};

