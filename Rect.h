#pragma once
#include "framework.h"
class Rect {
public:
	int x1, y1, x2, y2; // �������� ���� ��ǥ
	HDC hdc;
	Rect(int,int,int,int,HDC);
	void repaint();

};

