#include "MyMessage.h"
#include "Frame.h"
#include "Rect.h"
#include "Line.h" 
#include "Circle.h"
#include <stdio.h>

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

	::Rectangle(hdc, 0, 0, 50, 50);
	TextOut(hdc, 1, 15, TEXT("사각형"), 3);

	::Rectangle(hdc, 50, 0, 100, 50);
	TextOut(hdc, 65, 15, TEXT("원"), 1);

	::Rectangle(hdc, 100, 0, 150, 50);
	TextOut(hdc, 110, 15, TEXT("직선"), 2);

	
}

void Frame::processMessage(MyMessage r) {
	
	
	//OutputDebugString(L"process Message에서 호출됨\n");
	
	switch (r.message)
	{
	case WM_LBUTTONDOWN:
	
		
		x1 = LOWORD(r.lParam);
		y1 = HIWORD(r.lParam); 
		
		if (x1 < 50 && y1 < 50) {
			numShape = 1;
		}
		else if (50 <= x1 && x1 < 100 && y1 < 50) {
			numShape = 2;
		}
		else if (100 <= x1 && x1 < 150 && y1 < 50) {
			numShape = 3;
		}



		break; 
	
	case WM_LBUTTONUP:
	


		x2 = LOWORD(r.lParam);
		y2 = HIWORD(r.lParam);
		//버튼영역 눌렀을 때 그려짐을 방지합니다.
		if ((x1 < 150 && y1 < 50) || x2 < 150 && y2 < 50) {
			break;
		}

		/*if ( r.wParam & MK_SHIFT) {
			OutputDebugString(L"Shift 눌림\n");
			shape[num] = new Line(x1, y1, x2, y2, hdc);
		}
		else {
			shape[num] = new Rect(x1, y1, x2, y2, hdc);
		} */

		switch (numShape)
		{
		case 1:
			shape[num] = new Rect(x1, y1, x2, y2, hdc);
			break;
		case 2:
			shape[num] = new Circle(x1, y1, x2, y2, hdc);
			break;
		case 3:
			shape[num] = new Line(x1, y1, x2, y2, hdc);
			break;
		default:
			break;
		}


		num++;
		repaint();
			
		break;

	case WM_PAINT:
		repaint();
		break;
	default:
		break;
	}

}
