#pragma once;
#include "framework.h"

class Shape;
class Rect;
class Line;
class MyMessage;
class Frame {
private:
	HWND hWnd;
	HDC hdc;
	MyMessage* m;
	Shape *shape[1000];
	int num = 0;
	int x1, y1, x2, y2;
	int shapeType = 1; // ����� ��Ÿ���� ������� 1.�簢�� 2 �� 3 ����
public:

	int btnDown;

	Frame(HWND);  // ������. window �ڵ�� dc �ڵ��� ������ �ʱ�ȭ �Ѵ�.

	void init();
	void repaint();  // �ʿ��� ��� �׸��� �׷��ش�.
	void processMessage(MyMessage);
	int findButton(int x, int y);

};
