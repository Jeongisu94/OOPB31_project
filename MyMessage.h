#pragma once
#include "framework.h"
class MyMessage {
public:
	UINT message;
	WPARAM wParam;
	LPARAM lParam;
	int x, y;
	
	MyMessage(UINT, WPARAM, LPARAM);
};

