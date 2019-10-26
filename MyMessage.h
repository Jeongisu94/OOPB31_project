#pragma once
#include "framework.h"
class MyMessage {
public:
	UINT message;
	WPARAM wParam;
	LPARAM lParam;
	MyMessage(UINT, WPARAM, LPARAM);
};

