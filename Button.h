#pragma once
#include "Rect.h"
#include <string>
class Button : public Rect { 
public:
	std::string title_;
	Button(int i, int t, int r, int b, HDC h, std::string title);
	virtual void repaint();
	virtual bool belongs(int x, int y);
	
};

