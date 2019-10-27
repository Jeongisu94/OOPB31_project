#include "MyMessage.h"
#include "Frame.h"
#include "Rect.h"

Frame::Frame(HWND h) {
	OutputDebugString(L"프레임이 생성됨.\n");
	hWnd = h;
	hdc = GetDC(h);
}

void Frame::repaint() {
	
	if (rect[0] != NULL) {
		for (int i = 0; i < num; i++) {
			rect[i]->repaint();
		}
	}
	
}

void Frame::processMessage(MyMessage r) {
	
	
	OutputDebugString(L"process Message에서 호출됨\n");
	
	switch (r.message)
	{
	case WM_LBUTTONDOWN:
	
		
		x1 = LOWORD(r.lParam);
		y1 = HIWORD(r.lParam); 
		
		break; 
	
	case WM_LBUTTONUP:
	
		x2 = LOWORD(r.lParam);
		y2 = HIWORD(r.lParam);
		rect[num] = new Rect(x1,y1,x2,y2,hdc);
		num++;
		repaint();
			
		break;
	default:
		break;
	}

}
