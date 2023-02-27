#pragma once
#include<Windows.h>
#include "../../Protection/xorstr.hpp"

struct ConsoleColors
{
	int dark_blue = 1;
	int dark_green = 2;
	int dark_teal = 3;
	int dark_red = 4;
	int dark_pink = 5;
	int dark_yellow = 6;
	int dark_white = 7;
	int dark_gray = 8;
	int blue = 9;
	int green = 10;
	int teal = 11;
	int red = 12;
	int pink = 13;
	int yellow = 14;
	int white = 15;
	int DEFAULT = 15;
};

class Console
{
public:
	FILE* stream_in;
	FILE* stream_out;
	FILE* stream_error;
	HANDLE g_Handle{};
	HWND g_hWnd{};
	bool verbose{};
	Console* pConsole;
	PROCESS_INFORMATION* pInfo;
	ConsoleColors* pColors;
public:

	// shit menu
	Console* InitConsoleWindow(const char* console_title, const char* format, int ConsoleColors = {}, ...)
	{
		AllocConsole();
		g_Handle = GetStdHandle(STD_OUTPUT_HANDLE);
		g_hWnd = GetConsoleWindow();
		freopen_s(&stream_in, "CONIN$", "r", stdin);
		freopen_s(&stream_out, "CONOUT$", "w", stdout);
		freopen_s(&stream_error, "CONOUT$", "w", stderr);
		SetConsoleTitleA(xorstr_(console_title));
		ShowWindow(g_hWnd, SW_HIDE);



		SetConsoleTextAttribute(g_Handle, ConsoleColors);
		va_list arg;
		va_start(arg, ConsoleColors);
		vfprintf(stream_out, format, arg);
		va_end(arg);
		SetConsoleTextAttribute(g_Handle, pColors->DEFAULT);


		return pConsole;
	}

	// shit menu
	Console* RenderText(const char* format, int ConsoleColors = {}, ...)
	{
		SetConsoleTextAttribute(g_Handle, ConsoleColors);
		va_list arg;
		va_start(arg, ConsoleColors);
		vfprintf(stream_out, format, arg);
		va_end(arg);
		SetConsoleTextAttribute(g_Handle, pColors->DEFAULT);
		return pConsole;
	}

	Console* ScanConsole(const char* format, ...)
	{
		va_list arg;
		va_start(arg, format);
		vfscanf(stream_in, format, arg);
		va_end(arg);
		return pConsole;
	}

}; Console* pConsole;