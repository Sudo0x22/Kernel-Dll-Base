#pragma once
#include"../utils/utils.h"
#include"minhook/include/MinHook.h"

class SpoofHook
{
public:
	MH_STATUS CreateHook(LPVOID SourceAddress, LPVOID DetourAddress, LPVOID* OriginalAddress) {
		return SpoofReturn(MH_CreateHook, SourceAddress, DetourAddress, OriginalAddress);
	}
	MH_STATUS EnableHook(LPVOID SourceAddress) {
		return SpoofReturn(MH_EnableHook, SourceAddress);
	}
public:
	MH_STATUS WINAPI DisableHook(LPVOID DetourAddress) {
		return SpoofReturn(MH_DisableHook, DetourAddress);
	}
	MH_STATUS WINAPI RemoveHook(LPVOID DetourAddress) {
		return SpoofReturn(MH_RemoveHook, DetourAddress);
	}
};

class Hook : public SpoofHook
{
public:
	
};