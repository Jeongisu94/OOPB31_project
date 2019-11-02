#include "Toolbar.h"

Toolbar::Toolbar() {
	//empty
}

void Toolbar::addButton(Button *b) {
	button_[numButton_++] = b;
}
