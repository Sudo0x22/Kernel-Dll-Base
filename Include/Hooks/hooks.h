#pragma once
#include<Windows.h>
#include <thread>
#include"../Protection/xorstr.hpp"
#include "../SDK/Offsets/Offsets.h"
#include"../SDK/Interface/Interface.h"
#include "../Librarys/kiero/kiero.h"

typedef struct DllData
{
	HMODULE hKernelModule{};
	HMODULE hUsermodeModule{};
	HMODULE hNTWindowsDll{};

	LPVOID lpParam{};
	LPVOID lpAddress{};
	
	PIMAGE_NT_HEADERS p_nt_Headers{};
	PROCESS_INFORMATION* pProcInfo{};
	STARTUPINFO* pStartProcInfo{};

	BOOL Unload = false;
	uintptr_t base;

}; DllData pDllData{};

typedef struct
{
	DWORD64 dwEP;
	void* pParam;
}CALL_MYFUNCTION, * PCALL_MYFUNCTION;
typedef DWORD(*_Function)(VOID* p);

void WINAPI MyFunctionThread(PCALL_MYFUNCTION pCMF)
{
	if (pCMF != NULL && pCMF->dwEP != NULL)
	{
		_Function Function = (_Function)pCMF->dwEP;
		Function(pCMF->pParam);
	}
}

namespace NTWindowsHookEx
{
	DWORD GetModuleSize(DWORD64 Base)
	{
		IMAGE_DOS_HEADER dos_header = { 0 };
		IMAGE_NT_HEADERS nt_headers = { 0 };
		if (!Base)return-1;
		dos_header = *(IMAGE_DOS_HEADER*)Base;
		nt_headers = *(IMAGE_NT_HEADERS*)(Base + dos_header.e_lfanew);
		return nt_headers.OptionalHeader.SizeOfImage;
	}

	HANDLE NTWindowsCreateThreadEx(LPTHREAD_START_ROUTINE lpStartAddr, LPVOID lpParm, LPDWORD lpThread)
	{
		pDllData.hNTWindowsDll = GetModuleHandleA(xorstr_("ntdll.dll"));
		
		if (pDllData.hNTWindowsDll != NULL)
		{
			DWORD dwImageSize = GetModuleSize((DWORD64)pDllData.hNTWindowsDll);
			BYTE* pMemoryData = (BYTE*)pDllData.hNTWindowsDll + dwImageSize - 0x400;

			if (pMemoryData != NULL)
			{
				DWORD dwProtect;
				VirtualProtect(pMemoryData, 0x100, PAGE_EXECUTE_READWRITE, &dwProtect);
				CALL_MYFUNCTION* pCMF = (CALL_MYFUNCTION*)VirtualAlloc(NULL, 0x100, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
				pCMF->dwEP = (DWORD64)(lpStartAddr);
				pCMF->pParam = lpParm;
				memcpy((LPVOID)pMemoryData, (LPVOID)MyFunctionThread, 0x100);
				HANDLE hHandle = CreateRemoteThread(GetCurrentProcess(), NULL, 0, (LPTHREAD_START_ROUTINE)pMemoryData, pCMF, NULL, lpThread);
				return hHandle;
			}
		}

		return 0;
	}

	PVOID hk_InitFeatures(uintptr_t dw_base)
	{
		while (!pDllData.Unload)
		{
			dw_base = (uintptr_t)GetModuleHandleA(xorstr_("r5apex.exe"));
			uintptr_t dwLocalPlayer = (uintptr_t)(dw_base + Offsets::local_player);

			if (dwLocalPlayer)
			{
				
			}
		}

		return(PVOID)dw_base;
	}
}

