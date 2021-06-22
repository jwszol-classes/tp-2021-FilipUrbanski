//Kamil Gromek AiR2 184527 Projekt 3
//Filip Urbañski AiR2 185956

#include <windows.h>
#include <gdiplus.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <cmath>

using namespace Gdiplus;

LPSTR WindowClass = "Projekt 3";
HINSTANCE hInst;

LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);
ATOM MyRegisterClass(HINSTANCE hInstance);

void draw(HDC hdc);
void FillData();
int OnCreate(HWND window);

std::vector<double> data;

RECT drawArea1 = { 0, 0, 150, 200 };

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPTSTR lpCmdLine,int nCmdShow){
    GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR gdiplusToken;
    GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

	MyRegisterClass(hInstance);

    MSG msg;

    if (!InitInstance(hInstance, nCmdShow))
	{
        return FALSE;
	}
	else InitInstance(hInstance, nCmdShow);
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	Gdiplus::GdiplusShutdown(gdiplusToken);
	return 0;
}

ATOM MyRegisterClass(HINSTANCE hInstance){

    WNDCLASSEX wc;

    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.hInstance = hInstance;
    wc.lpfnWndProc = WndProc;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = WindowClass;

    return RegisterClassEx(&wc);
}

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow){

    HWND hWnd;
	hInst = hInstance;

	hWnd = CreateWindow(WindowClass, "Projekt 3", WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,600, 400, NULL, NULL, hInstance, NULL);

	OnCreate(hWnd);
	if (!hWnd)
	{
		return FALSE;
	}
    ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

LRESULT CALLBACK	WndProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp) {
	HDC hdc;
	PAINTSTRUCT ps;

	switch (msg) {
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		draw(hdc);
		EndPaint(hWnd, &ps);
		return 0;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	default:
		return DefWindowProc(hWnd, msg, wp, lp);
	}
}
void draw(HDC hdc) {
    int przy;
	Graphics graphics(hdc);
	Pen pen(Color(255, 0, 0, 255));
	for (int i = 1; i < 300; i=4*i)
        graphics.DrawLine(&pen,10*i,100+data[i-1],10*i,100+data[i]);
}

void FillData(){
    std::ifstream plik;
    plik.open( "outputRobotForwardB01.log", std::ios::in);
    double cur;
    while (plik >> cur) {
        data.push_back(cur);
    }
    plik.close();
}

int OnCreate(HWND window){
   FillData();
   return 0;
}
