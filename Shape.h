#pragma once
#include "framework.h"
class Shape {
public:
	int left_, top_, right_, bottom_; // 시작점과 끝점 좌표
	HDC hdc;

	Shape(int l, int t, int r, int b , HDC h);
	virtual bool belongs(int x, int y);
	virtual void repaint() = 0;// 순수 가상 함수 ;
};

