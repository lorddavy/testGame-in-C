#include <windows.h>

void foo(void)	//Function signature or prototype
{
	OutputDebugStringA("this is the first thing that we actually printed.\n");
}

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
){
	foo();
}