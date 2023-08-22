#pragma once
#include"../security/global.h"
#include"../memory/memory.h"

NTSTATUS WINAPI InitThread(PSYSTEM_MEMORY pMemory) 
{
	if (pMemory != NULL && pMemory->dwEP != NULL) {
		INIT_MEM CALL_MEM = (INIT_MEM)pMemory->dwEP;
		CALL_MEM(pMemory->dwParam);
	}
	return TRUE;
}

class Thread {
public:
	BOOL WINAPI DisableThreadLibraryCallsEx(HMODULE hModule) {
		return SpoofReturn(__safecall(DisableThreadLibraryCalls).get(), hModule);
	}
public:
	LPVOID WINAPI CreateRemoteThreadEx(HANDLE hProcess, LPSECURITY_ATTRIBUTES Attr, SIZE_T Size,
		LPTHREAD_START_ROUTINE Routine, LPVOID Buffer, DWORD Flags, LPDWORD ThreadId) {
		return SpoofReturn(__safecall(CreateRemoteThread).get(), hProcess, Attr, Size, Routine, Buffer, Flags, ThreadId);
	}
public:
	HANDLE WINAPI CurrentProcess() {
		return SpoofReturn(__safecall(GetCurrentProcess).get());
	}
};

class NtCreateThread : public Thread {
public:
	NTSTATUS WINAPI CreateThreadEx(LPTHREAD_START_ROUTINE EntryPoint, LPVOID Buffer, LPDWORD ThreadId)
	{
		HMODULE hModule = module->GetModuleHandleExWA("ntdll.dll");
		DWORD64 hModuleSize = memory->GetModuleSize((DWORD64)hModule);
		PBYTE hModuleBytes = memory->GetModuleBytes(hModule, hModuleSize, 0x400);

		DWORD hProtect;
		memory->VirtualProtectExW(hModuleBytes, 0x100, PAGE_EXECUTE_READWRITE, &hProtect);
		PSYSTEM_MEMORY pMemory = (PSYSTEM_MEMORY)memory->VirtualAllocExW(0, 0x100, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

		pMemory->dwEP = (DWORD64)(EntryPoint);
		pMemory->dwParam = Buffer;
		memory->SafeCopy((LPVOID)hModuleBytes, (LPVOID)InitThread, 0x100);

		this->CreateRemoteThreadEx(this->CurrentProcess(), 0, 0x100, (LPTHREAD_START_ROUTINE)hModuleBytes, pMemory, 0, 0);
		return TRUE;
	}
}; NtCreateThread* pCreateThread = new NtCreateThread();