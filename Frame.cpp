#include "MyMessage.h"
#include "Frame.h"
#include "Rect.h"
#include "Line.h" 
#include "Circle.h"
#include <stdio.h>
#include "Button.h"
Frame::Frame(HWND h) {
	OutputDebugString(L"프레임이 생성됨.\n");
	hWnd = h;
	hdc = GetDC(h);
	int btnDown = -1;
	init();
}

void Frame::init() {
	shape[0] = new Button(0, 0, 50, 50, hdc, "사각형");
	shape[1] = new Button(50, 0, 100, 50, hdc, "원");
	shape[2] = new Button(100, 0, 150, 50, hdc, "직선");
	num = 3;
	repaint();
}

void Frame::repaint() {
	
	if (shape[0] != NULL) {
		for (int i = 0; i < num ; i++) {
			shape[i]->repaint();
		}
	}
}

int Frame::findButton(int x, int y) {
	for (int i = 0; i < num; i++) {
		if (shape[i]->belongs(x, y)) {
			return i;
		}
	} return -1;
}



void Frame::processMessage(MyMessage r) {


	int n;
	char buf[256];
	sprintf_s(buf, "num :%d \n ", num);
	OutputDebugStringA(buf);


	switch (r.message)
	{
	case WM_LBUTTONDOWN:
	
	
		x1 = LOWORD(r.lParam);
		y1 = HIWORD(r.lParam); 
		
	/*	if (x1 < 50 && y1 < 50) {
			numShape = 0;
		}
		else if (50 <= x1 && x1 < 100 && y1 < 50) {
			numShape = 1;
		}
		else if (100 <= x1 && x1 < 150 && y1 < 50) {
			numShape = 2;
		} */

		n = findButton(r.x, r.y);
		if (n <= 2) {
			btnDown = n;
		}

		break; 
	
	case WM_LBUTTONUP:

		n = findButton(r.x, r.y);
		if (n >= 0 && n == btnDown) {
			shapeType = n;
		}
		else {
			btnDown = -1;
		}

	
		x2 = LOWORD(r.lParam);
		y2 = HIWORD(r.lParam);
		//버튼영역 눌렀을 때 그려짐을 방지합니다.
		if ((x1 < 150 && y1 < 50) || x2 < 150 && y2 < 50) {
			break;
		} 

		switch (shapeType)
		{
		case 0:

			shape[num] = new Rect(x1, y1, x2, y2, hdc);
			num++;
			break;
		case 1:
			shape[num] = new Circle(x1, y1, x2, y2, hdc);
			num++;
			break;
		case 2:
			shape[num] = new Line(x1, y1, x2, y2, hdc);
			num++;
			break;
		default:
			break;
		}

	
		repaint();
		break;

	case WM_PAINT:
		repaint();
		break;
	default:
		break;
	}

}
