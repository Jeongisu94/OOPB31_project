#pragma once;
#include "framework.h"

class MyMessage;
class Frame {
private:
	HWND hWnd;
	HDC hdc;
	//MyMessage* m;
public:

	Frame(HWND);  // ������. window �ڵ�� dc �ڵ��� ������ �ʱ�ȭ �Ѵ�.

	void repaint();  // �ʿ��� ��� �׸��� �׷��ش�.
	void processMessage(MyMessage);

};
