#pragma once
#include"thread/thread.h"

class Globals
{
public:
	FILE* Input = {};
	DWORD64 ProcessID;
	HANDLE hTargetProc = NULL;
};

class Utils : public Globals
{
public:
	BOOL WINAPI AllocConsoleEx() {
		return SpoofReturn(__safecall(AllocConsole).get());
	}
	BOOL WINAPI SetConsoleTitleExWA(LPCSTR WndTitle) {
		return SpoofReturn(__safecall(SetConsoleTitleA).get(), WndTitle);
	}
	errno_t WINAPI freopen_ex(FILE** Input, LPCSTR Offset, LPCSTR offset, FILE* Stream) {
		return SpoofReturn(__safecall(freopen_s).get(), Input, Offset, offset, Stream);
	}
	BOOL WINAPI ReadProcMem(HANDLE hTargetProc, LPCVOID SourceAddr, LPVOID BufferAddr, SIZE_T Size, SIZE_T* Bytes) {
		return SpoofReturn(__safecall(ReadProcessMemory).get(), hTargetProc, SourceAddr, BufferAddr, Size, Bytes);
	}
	BOOL WINAPI WriteProcMem(HANDLE hTargetProc, LPVOID Buffer, LPCVOID Source, SIZE_T Size, SIZE_T* Bytes) {
		return SpoofReturn(__safecall(WriteProcessMemory).get(), hTargetProc, Buffer, Source, Size, Bytes);
	}
}; Utils* pUtils = new Utils();

class Console : public Utils {
public:
	BOOL WINAPI CreateConsole(LPCSTR WndTitle)
	{
		this->AllocConsoleEx();
		this->SetConsoleTitleExWA(WndTitle);
		this->freopen_ex(&this->Input, "CONOUT", "w", stdout);
		return TRUE;
	}
}; Console* pConsole = new Console();

class ReadWrite : public Utils
{
public:
	template<typename type>
	__inline type ReadProcMemory(type module_base, type offset_address) {
		return *(type*)(module_base + offset_address);
	}
public:
	template<typename type>
	__inline type WriteProcMemory(type module_base, type offset_address, type value) {
		return *(type*)(module_base + offset_address) = value;
	}
}; ReadWrite* pReadWrite = new ReadWrite();

class Scanner : public ReadWrite
{
public:
	uint8_t* PatternScanner(void* module, const char* pattern) {
		return nullptr;
	}
};

class Main : public Scanner
{
public:
	BOOL Unload = false;
	INT ModuleSize = 0;
	DWORD ModuleBase = 0;
public:
	DWORD64 LocalEntity = 0;
	DWORD64 Entity = 0;
	BOOL GlowEnabled = FALSE;
}; Main* pMain = new Main();

class Offsets : public Main
{
public:
	DWORD64 localentity = 0x0;
	DWORD64 cl_entitylist = 0x0;
	DWORD64 glow_enable = 0x0;
}; Offsets* pOffsets = new Offsets();