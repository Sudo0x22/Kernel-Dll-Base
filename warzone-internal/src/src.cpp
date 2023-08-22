#include"../includes/sdk/sdk.h"

DWORD64 WINAPI OverlayThread(LPVOID Buffer)
{
	static bool hook_present = false;
	while (!hook_present) { hook_present = true; }
	return TRUE;
}

DWORD64 WINAPI FeaturesThread(LPVOID Buffer)
{
	while (!pMain->Unload)
	{
		pMain->ModuleBase = (DWORD)module->GetModuleHandleExWA("cod.exe");
		pMain->LocalEntity = pReadWrite->ReadProcMemory<DWORD64>(pMain->ModuleBase, pOffsets->localentity);

		if (!pMain->ModuleBase)
			return FALSE;
		
		if (!pMain->LocalEntity)
			return FALSE;

		for (int index = 0; index < 250; index++)
		{
			pMain->Entity = *(DWORD64*)(pMain->ModuleBase + pOffsets->cl_entitylist + (index * 32));

			if (!pMain->Entity)
				continue;

			pMain->GlowEnabled = *(BOOL*)(pMain->ModuleBase + pOffsets->glow_enable) = TRUE;
		}
	}
	return TRUE;
}

DWORD64 WINAPI ConsoleThread(LPVOID Buffer)
{
	pConsole->CreateConsole("warzone internal");
	
	uintptr_t module_base = (uintptr_t)module->GetModuleHandleExWA(NULL);
	uintptr_t module_size = (uintptr_t)memory->GetModuleSize((DWORD64)module_base);

	if (module_base || module_size)
	{
		std::cout << "[ - LOGS - ] -> Module Base: " << std::hex << module_base << "\n";
		std::cout << "[ - LOGS - ] -> Module Size: " << std::hex << module_size << "\n";
	}

	return TRUE;
}

DWORD64 WINAPI MainThread(LPVOID Buffer)
{
	while (!module->GetModuleHandleExWA("cod.exe"))
		std::this_thread::sleep_for(std::chrono::milliseconds(420));

	//OverlayThread(Buffer);
	//FeaturesThread(Buffer);
	ConsoleThread(Buffer);

	return TRUE;
}

DWORD64 WINAPI DllMain(HMODULE hModule, DWORD64 Reasons, LPVOID Buffer)
{
	if (Reasons == DLL_PROCESS_ATTACH) 
	{
		pCreateThread->DisableThreadLibraryCallsEx(hModule);
		pCreateThread->CreateThreadEx((LPTHREAD_START_ROUTINE)MainThread, 0, 0);
	}
	return TRUE;
}