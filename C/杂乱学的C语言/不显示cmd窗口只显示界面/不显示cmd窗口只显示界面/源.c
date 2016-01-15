#include "windows.h"
int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPreInstance,
	LPSTR lpCmdLine,
	int nShowCmd)
{
	MessageBox(NULL, "WinMain创建的窗口程序", "WinMain", MB_OK);
	return 0;
}
