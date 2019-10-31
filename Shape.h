#pragma once
#include "framework.h"
class Shape {
public:
	int left_, top_, right_, bottom_; // �������� ���� ��ǥ
	HDC hdc;

	Shape(int l, int t, int r, int b , HDC h);
	virtual bool belongs(int x, int y);
	virtual void repaint() = 0;// ���� ���� �Լ� ;
};

