#pragma once;
#include "framework.h"

class Toolbar;
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
	Toolbar *toolbar_;
	int num = 0; //shape�� index
	int x1, y1, x2, y2;
	int shapeType = 1; // ����� ��Ÿ���� ������� 0.�簢�� 1 �� 2 ����
public:

	int btnDown;

	Frame(HWND);  // ������. window �ڵ�� dc �ڵ��� ������ �ʱ�ȭ �Ѵ�.

	void addToolbar(Toolbar*&);
	void init();
	void repaint();  // �ʿ��� ��� �׸��� �׷��ش�.
	void processMessage(MyMessage);
	int findButton(int x, int y);

};
