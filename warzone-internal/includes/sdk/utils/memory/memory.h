#pragma once
#include<Windows.h>
#include<memory>
#include"../spoofer/spoofer.hpp"

typedef struct _SYSTEM_MEMORY
{
	DWORD64 dwEP;
	LPVOID dwParam;
} SYSTEM_MEMORY, * PSYSTEM_MEMORY;
typedef DWORD(*INIT_MEM)(LPVOID Param);

class Memory {
public:
	BOOL WINAPI VirtualProtectExW(LPVOID SourceAddress, SIZE_T Size, DWORD OldProtect, PDWORD NewProtect) {
		return SpoofReturn(__safecall(VirtualProtect).get(), SourceAddress, Size, OldProtect, NewProtect);
	}
	LPVOID WINAPI VirtualAllocExW(LPVOID SourceAddress, SIZE_T Size, DWORD AllocType, DWORD Protect) {
		return SpoofReturn(__safecall(VirtualAlloc).get(), SourceAddress, Size, AllocType, Protect);
	}
};

class MemoryEx : public Memory {
public:
	LPVOID WINAPI SafeCopy(LPVOID SourceAddress, const void* Address, size_t size) {
		return SpoofReturn(__safecall(memcpy).get(), SourceAddress, Address, size);
	}
	DWORD64 WINAPI GetModuleSize(DWORD64 hModule) {
		IMAGE_DOS_HEADER dos_header = *(IMAGE_DOS_HEADER*)hModule;
		IMAGE_NT_HEADERS nt_headers = *(IMAGE_NT_HEADERS*)(hModule + dos_header.e_lfanew);
		return (DWORD64)nt_headers.OptionalHeader.SizeOfImage;
	}
	PBYTE WINAPI GetModuleBytes(HMODULE hModule, DWORD64 Addr, DWORD64 Size) {
		return (PBYTE)hModule + Addr - Size;
	}
}; MemoryEx* memory = new MemoryEx();

class Module {
public:
	HINSTANCE WINAPI GetModuleHandleExWA(LPCSTR ModuleName) {
		return SpoofReturn(__safecall(GetModuleHandleA).get(), ModuleName);
	}
	FARPROC WINAPI GetProcAddressEx(HINSTANCE hInstance, LPCSTR ModuleProc) {
		return SpoofReturn(__safecall(GetProcAddress).get(), hInstance, ModuleProc);
	}
}; Module* module = new Module();

