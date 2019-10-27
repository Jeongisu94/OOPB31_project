#include "MyMessage.h"
#include "Frame.h"
#include "Rect.h"
#include "Line.h"

Frame::Frame(HWND h) {
	OutputDebugString(L"프레임이 생성됨.\n");
	hWnd = h;
	hdc = GetDC(h);
}

void Frame::repaint() {
	
	if (shape[0] != NULL) {
		for (int i = 0; i < num; i++) {
			shape[i]->repaint();
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

		if ( r.wParam & MK_SHIFT) {
			OutputDebugString(L"Shift 눌림\n");
			shape[num] = new Line(x1, y1, x2, y2, hdc);
		}
		else {
			shape[num] = new Rect(x1, y1, x2, y2, hdc);
		}
		num++;
		repaint();
			
		break;
	default:
		break;
	}

}
