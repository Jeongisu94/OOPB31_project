#pragma once
#include "Button.h"


class Toolbar {
public:
	Button* button_[10];
	int numButton_ = 0; //��ư �ε���;
	
	Toolbar();
	void addButton(Button *b);
};

