#pragma once
#include "framework.h"
class MyMessage {
	UINT message;
	WPARAM wParam;
	LPARAM lParam;

public:

	MyMessage(UINT, WPARAM, LPARAM);
};

