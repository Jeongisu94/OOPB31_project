#include "MyMessage.h"
#include "Frame.h"

Frame::Frame(HWND h) {
	OutputDebugString(L"�������� ������.\n");
	hWnd = h;
	hdc = GetDC(h);
}

void Frame::repaint() {

	::Rectangle(hdc, 100, 100, 200, 300);
}

void Frame::processMessage(MyMessage r) {

//	m = new MyMessage(r);
	OutputDebugString(L"process Message���� ȣ���\n");

}
