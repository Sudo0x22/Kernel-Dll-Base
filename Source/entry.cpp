#include"../include/common.h"
#include <cstdint>

void WINAPI InitFeatures(LPVOID Buffer)
{
	NTWindowsHookEx::hk_InitFeatures(pDllData.base);
}

void WINAPI hk_Overlay(LPVOID Buffer)
{
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&pInterface->oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
}

void Initialize()
{
	NTWindowsHookEx::NTWindowsCreateThreadEx((LPTHREAD_START_ROUTINE)hk_Overlay, NULL, NULL);
	//NTWindowsHookEx::NTWindowsCreateThreadEx((LPTHREAD_START_ROUTINE)hk_ConsoleWindow, NULL, NULL);
	NTWindowsHookEx::NTWindowsCreateThreadEx((LPTHREAD_START_ROUTINE)InitFeatures, NULL, NULL);
}

BOOL APIENTRY DllMain(HINSTANCE hInstance, DWORD lpReasons, LPVOID Buffer)
{
	if (lpReasons == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hInstance);
		Initialize();
	}

	return TRUE;
}