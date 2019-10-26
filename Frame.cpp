#include "MyMessage.h"
#include "Frame.h"

Frame::Frame(HWND h) {
	OutputDebugString(L"프레임이 생성됨.\n");
	hWnd = h;
	hdc = GetDC(h);
}

void Frame::repaint() {

	::Rectangle(hdc, 100, 100, 200, 300);
}

void Frame::processMessage(MyMessage r) {

//	m = new MyMessage(r);
	OutputDebugString(L"process Message에서 호출됨\n");

}
