#include "MyMessage.h"
#include "Frame.h"

MyMessage::MyMessage(UINT m, WPARAM w, LPARAM l) : message(m),wParam(w),lParam(l) {

	x = LOWORD(l);
	y = HIWORD(l);

}