#include "MyMessage.h"
#include "Frame.h"
#include "Rect.h"

Frame::Frame(HWND h) {
	OutputDebugString(L"�������� ������.\n");
	hWnd = h;
	hdc = GetDC(h);
	rect = new Rect();

}

void Frame::repaint() {

	::Rectangle(hdc,rect->x1,rect->y1,rect->x2,rect->y2);
}

void Frame::processMessage(MyMessage r) {

	
	OutputDebugString(L"process Message���� ȣ���\n");
	switch (r.message)
	{
	case WM_LBUTTONDOWN:
		rect->x1 = LOWORD(r.lParam);
		rect->y1 = HIWORD(r.lParam);
			break;
	case WM_LBUTTONUP:
		rect->x2 = LOWORD(r.lParam);
		rect->y2 = HIWORD(r.lParam);
		repaint();
			break;
	default:
		break;
	}

}
