#include "MyMessage.h"
#include "Frame.h"
#include "Rect.h"
#include <iostream>
Frame::Frame(HWND h) {
	OutputDebugString(L"프레임이 생성됨.\n");
	hWnd = h;
	hdc = GetDC(h);
	//rect[0] = new Rect();
	

}

void Frame::repaint() {
	for (int i = 0; i < num; i++) {
		::Rectangle(hdc, rect[i]->x1, rect[i]->y1, rect[i]->x2, rect[i]->y2);
	}
}

void Frame::processMessage(MyMessage r) {

	
	OutputDebugString(L"process Message에서 호출됨\n");
	switch (r.message)
	{
	case WM_LBUTTONDOWN:
		rect[num] = new Rect();

		rect[num]->x1 = LOWORD(r.lParam);
		rect[num]->y1 = HIWORD(r.lParam);
			break;
	case WM_LBUTTONUP:
		rect[num]->x2 = LOWORD(r.lParam);
		rect[num]->y2 = HIWORD(r.lParam);
		num++;
		repaint();
			break;
	default:
		break;
	}

}
