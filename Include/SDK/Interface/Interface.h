#pragma once
#include<Windows.h>
#include"InterfaceStyle/InterfaceStyle.h"
#include "../../Librarys/imgui/imgui_internal.h"
#include<d3d11.h>
#include<dxgi.h>
#include "../../Librarys/imgui/imgui_impl_dx11.h"
#include "../../Librarys/imgui/imgui_impl_win32.h"
#include "../Vars/Vars.h"
#include"../../Librarys/minhook/include/MinHook.h"

int ScreenWidth = GetSystemMetrics(SM_CXSCREEN); int screenX = ScreenWidth / 2;
int ScreenHeight = GetSystemMetrics(SM_CYSCREEN); int screenY = ScreenHeight / 2;

typedef BOOL(WINAPI* hk_SetCursorPos)(int, int);
hk_SetCursorPos origSetCursorPos = NULL;

typedef BOOL(WINAPI* hk_ShowCursor)(bool);
hk_ShowCursor origShowCursor = NULL;


typedef BOOL(WINAPI* hk_GetCursorPos)(LPPOINT);
hk_GetCursorPos origGetCursorPos = NULL;


typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

WNDPROC oWndProc;

inline DWORD  parent_window_flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar;
inline DWORD  child_window_flags = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove;

class Interface
{
public:
	bool m_InitInterface{ };
	bool m_RenderInterface{};
	bool close_button = true;
	bool cap_cursor{};
	bool render_cursor{};
public:
	ImGuiWindow* pWindow;
	HWND m_pWindow;
	Present oPresent;
	WNDPROC m_OldWndProc{};

	HWND window = NULL;
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* mainRenderTargetView;

	HWND g_GameWindowHandle{};
	HWND g_GameWindow{};
	Interface* pInterface;
public:
	
	Interface* InitImGui()
	{
		ImGui::CreateContext();
		ImGuiIO& ImGuiIo = ImGui::GetIO();
		ImGuiIo.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;

		ImGui::StyleColorsDark();

		ImGui_ImplWin32_Init(window);
		ImGui_ImplDX11_Init(pDevice, pContext);
		return pInterface;
	}

	Interface* weapon_tab()
	{
		ImGui::BeginChild(xorstr_("##Weapons"), ImVec2(45, 67), true);

		ImGui::Checkbox(xorstr_("Enable Aim"), &features::enable_aimbot);
		ImGui::SliderInt(xorstr_("Fov"), &features::aim_fov, 0.f, 180.f);
		ImGui::Checkbox(xorstr_("No Recoil"), &features::no_recoil);

		ImGui::EndChild();

		return pInterface;
	}

	Interface* visuals_tab()
	{

		ImGui::BeginChild(xorstr_("##Visuals"), ImVec2(45, 76), true);
		ImGui::Checkbox(xorstr_("Enable Glow"), &features::enable_visuals);
		ImGui::EndChild();
	
		return pInterface;
	}

	Interface* RenderInterface(const char* interface_title)
	{
		ImGui::Begin(interface_title, &close_button, parent_window_flags);
		ImGui::SetWindowSize(ImVec2(250, 250), 0);
		ImGui::Separator();

		ImGui::BeginTabBar("##MenuTabs");

		//ImGui::SetCursorPosX(350);

		if (ImGui::BeginTabItem("General"))
		{
			weapon_tab();
			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Visuals"))
		{
			visuals_tab();
			ImGui::EndTabItem();
		}
		
		ImGui::EndTabBar();

		ImGui::End();

		return pInterface;
	}

}; Interface* pInterface;

BOOL WINAPI HOOK_SetCursorPos(int X, int Y)
{
	if (pInterface->m_RenderInterface);
	return FALSE;

	return origSetCursorPos(X, Y);
}

BOOL WINAPI ShowCursor_hook(bool show)
{
	if (pInterface->m_RenderInterface)
		return FALSE;
	return origShowCursor(show);
}

BOOL WINAPI GetCursorPos_Hook(LPPOINT lpPoint)
{
	if (pInterface->m_RenderInterface)
		return 1L;
	return TRUE;
}

bool GetCursorInGame()
{
	if (MH_CreateHook(&GetCursorPos, &GetCursorPos_Hook, reinterpret_cast<LPVOID*>(&origGetCursorPos)) != MH_OK)
		return FALSE;

	if (MH_EnableHook(&GetCursorPos) != MH_OK)
		return FALSE;

	return TRUE;
}

bool HookCursor()
{
	if (MH_CreateHook(&SetCursorPos, &HOOK_SetCursorPos, reinterpret_cast<LPVOID*>(&origSetCursorPos)) != MH_OK)
		return FALSE;

	if (MH_EnableHook(&SetCursorPos) != MH_OK)
		return FALSE;

	return TRUE;
}

bool ShowCursorInGame()
{
	if (MH_CreateHook(&ShowCursor, &ShowCursor_hook, reinterpret_cast<LPVOID*>(&origSetCursorPos)) != MH_OK)
		return FALSE;
	if (MH_EnableHook(&ShowCursor) != MH_OK)
		return FALSE;
	return TRUE;
}

bool UnHookCursor()
{

	MH_DisableHook(&SetCursorPos);
	MH_RemoveHook(&SetCursorPos);

	return TRUE;
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (pInterface->m_RenderInterface) {
		ImGui_ImplWin32_WndProcHandler((HWND)oWndProc, uMsg, wParam, lParam);
		return TRUE;
	}
	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!pInterface->m_InitInterface)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pInterface->pDevice)))
		{
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO(); (void)io;
			ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard;

			io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
			io.IniFilename = NULL;

			pInterface->pDevice->GetImmediateContext(&pInterface->pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			pInterface->window = sd.OutputWindow;

			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			D3D11_RENDER_TARGET_VIEW_DESC desc = {};
			memset(&desc, 0, sizeof(desc));
			desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM; // most important change!
			desc.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;

			pInterface->pDevice->CreateRenderTargetView(pBackBuffer, &desc, &pInterface->mainRenderTargetView);

			pBackBuffer->Release();
			ImGui::GetIO().ImeWindowHandle = pInterface->window;
			oWndProc = (WNDPROC)SetWindowLongPtr(pInterface->window, GWLP_WNDPROC, (LONG_PTR)WndProc);

			pInterface->InitImGui();
			//pInterfaceStyle->InitStyle();
			pInterface->m_InitInterface = true;
		}
		else
			return pInterface->oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImGui::GetIO().MouseDrawCursor = pInterface->m_RenderInterface;
	ImGui::GetIO().WantCaptureMouse = pInterface->m_RenderInterface;
	ImGui::GetIO().WantCaptureKeyboard = pInterface->m_RenderInterface;


	pInterface->render_cursor = ImGui::GetIO().MouseDrawCursor;
	pInterface->cap_cursor = ImGui::GetIO().WantCaptureMouse;

	if (GetAsyncKeyState(VK_INSERT) & 1) {
		pInterface->m_RenderInterface = !pInterface->m_RenderInterface;
	}

	if (GetAsyncKeyState(VK_END) & 1) {
		//kiero::unbind(8);
		//kiero::shutdown();
	}

	if (pInterface->m_RenderInterface)
	{
		pInterface->RenderInterface(xorstr_("Settings"));
	}

	if (pInterface->render_cursor && pInterface->cap_cursor)
	{
		HookCursor();
	}
	else {
		MH_DisableHook(&SetCursorPos);
		MH_RemoveHook(&SetCursorPos);
	}
	
	//ImGui::EndFrame();
	ImGui::Render();

	pInterface->pContext->OMSetRenderTargets(1, &pInterface->mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return pInterface->oPresent(pSwapChain, SyncInterval, Flags);
}