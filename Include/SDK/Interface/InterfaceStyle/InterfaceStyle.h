#pragma once
#include<Windows.h>
#include"../../../Librarys/imgui/imgui.h"

class InterfaceStyle {
public:
	InterfaceStyle* pInterfaceStyle;
public:
	
	InterfaceStyle* InitStyle()
	{
        ImGuiStyle* style = &ImGui::GetStyle();

        style->WindowTitleAlign = ImVec2(0.5, 0.5);
        style->WindowRounding = 0.0f;
        style->ChildRounding = 0.0f;
        //style->Colors[ImGuiCol_Border] = ImColor(9, 151, 152, 255);

        //style->Colors[ImGuiCol_Text] = ImColor(195, 210, 224, 255);

        style->Colors[ImGuiCol_Text] = ImColor(255, 255, 255, 255);
        style->Colors[ImGuiCol_Border] = ImColor(15, 150, 150, 255);
        style->Colors[ImGuiCol_WindowBg] = ImColor(29, 47, 64, 255);
        style->Colors[ImGuiCol_TitleBgActive] = ImColor(29, 47, 64, 255);
        style->Colors[ImGuiCol_TitleBg] = ImColor(29, 47, 64, 255);

        // Tabs
        style->TabBorderSize = 2;
        style->Colors[ImGuiCol_Tab] = ImColor(29, 47, 64, 255);
        style->Colors[ImGuiCol_TabUnfocused] = ImColor(29, 47, 64, 255);
        style->Colors[ImGuiCol_TabUnfocusedActive] = ImColor(29, 47, 64, 255);
        style->Colors[ImGuiCol_TabActive] = ImColor(40, 98, 98, 235);
        style->Colors[ImGuiCol_TabHovered] = ImColor(40, 98, 98, 235);

        // Seperator
        style->Colors[ImGuiCol_Separator] = ImColor(9, 131, 131, 255);

        // etc
        style->Colors[ImGuiCol_MenuBarBg] = ImColor(0, 0, 0, 50);

        style->Colors[ImGuiCol_FrameBgActive] = ImColor(29, 47, 64, 255);
        style->Colors[ImGuiCol_FrameBgHovered] = ImColor(9, 151, 152, 235);
        style->Colors[ImGuiCol_FrameBg] = ImColor(9, 131, 131, 200);
        style->Colors[ImGuiCol_CheckMark] = ImColor(29, 47, 64, 255);

        style->Colors[ImGuiCol_DragDropTarget] = ImColor(29, 47, 64, 200);
        style->Colors[ImGuiCol_Button] = ImColor(29, 47, 64, 0.5);
        style->Colors[ImGuiCol_ButtonHovered] = ImColor(16, 65, 99, 0.5);
        style->Colors[ImGuiCol_ButtonActive] = ImColor(29, 47, 64, 255);

        style->Colors[ImGuiCol_Header] = ImColor(29, 47, 64, 200);
        style->Colors[ImGuiCol_HeaderActive] = ImColor(29, 47, 64, 200);
        style->Colors[ImGuiCol_HeaderHovered] = ImColor(16, 65, 99, 200);
        style->Colors[ImGuiCol_PopupBg] = ImColor(29, 47, 64, 255);


        style->Colors[ImGuiCol_ScrollbarBg] = ImColor(0, 0, 0, 0);
        style->Colors[ImGuiCol_ScrollbarGrab] = ImColor(0, 0, 0, 0);
        style->Colors[ImGuiCol_ScrollbarGrabActive] = ImColor(0, 0, 0, 0);
        style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(0, 0, 0, 0);

        style->Colors[ImGuiCol_SliderGrabActive] = ImColor(29, 47, 64, 200);
        style->Colors[ImGuiCol_SliderGrab] = ImColor(29, 47, 64, 255);


		return pInterfaceStyle;
	}

	InterfaceStyle* InitDarkStyle()
	{


		return pInterfaceStyle;
	}

	InterfaceStyle* InitLightStyle()
	{


		return pInterfaceStyle;
	}

}; InterfaceStyle* pInterfaceStyle;