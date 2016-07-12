#include <windows.h>

void foo(void)	//Function signature or prototype
{
	char *Foo = "this is the first thing that we actually printed.\n";
	OutputDebugStringA(Foo);
}

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow
){
	/*char SmallS; // 8 bits - 256 diff values: [-128,127]
	char unsigned SmallU;  // 8 bits unsigned - 256 diff values: [0,255]

	short MediumS; // 16 bits - 65536 diff values
	short MediumU;  // 16 bits unsigned - 65536 diff values

	int LargeS; // 32 bits - 4 billion diff values
	int unsigned LargeU; // 32 bits unsigned - 4 billion diff values*/

	
	char unsigned Test;
	char unsigned *TestPointer;

	TestPointer = &Test;

	/*
	//Overflow
	Test = 255;
	Test = Test + 1;
	*/

	foo();
}