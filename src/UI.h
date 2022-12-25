#pragma once
#include "imgui.h"
#include "imgui_impl_glfw.h"
// #include "imgui_impl_vulkan.h"
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>

namespace DX12Playground
{

	class UI
	{
	public:
		bool Init(GLFWwindow *window);
		void Update();
		void Render();
		void RenderDrawData();
		void Terminate();

		ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
	};

}