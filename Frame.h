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
	int num = 0; //shape의 index
	int x1, y1, x2, y2;
	int shapeType = 1; // 모양을 나타내줄 멤버변수 0.사각형 1 원 2 선분
public:

	int btnDown;

	Frame(HWND);  // 생성자. window 핸들과 dc 핸들을 적절히 초기화 한다.

	void addToolbar(Toolbar*&);
	void init();
	void repaint();  // 필요한 모든 그림을 그려준다.
	void processMessage(MyMessage);
	int findButton(int x, int y);

};
