#pragma once
#include "Button.h"


class Toolbar {
public:
	Button* button_[10];
	int numButton_ = 0; //버튼 인덱스;
	
	Toolbar();
	void addButton(Button *b);
};

