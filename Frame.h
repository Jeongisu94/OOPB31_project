#pragma once;
#include "framework.h"

class Rect;
class MyMessage;
class Frame {
private:
	HWND hWnd;
	HDC hdc;
	MyMessage* m;
	Rect *rect;
public:


	Frame(HWND);  // 생성자. window 핸들과 dc 핸들을 적절히 초기화 한다.

	void repaint();  // 필요한 모든 그림을 그려준다.
	void processMessage(MyMessage);

};
