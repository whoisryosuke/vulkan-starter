#include "Renderer.h"

bool Renderer::Init(HWND hWnd)
{
	return true;
}

void Renderer::CreateRenderTarget()
{
}

void Renderer::CleanupDevice()
{
	CleanupRenderTarget();
}

void Renderer::CleanupRenderTarget()
{
	WaitForLastSubmittedFrame();
}

void Renderer::WaitForLastSubmittedFrame()
{
}

void Renderer::RenderUI(DX12Playground::UI *ui)
{
}

void Renderer::HandleResize(int width, int height)
{
}

void Renderer::HandleResizeCallback(Renderer *renderer, int width, int height)
{
	return reinterpret_cast<Renderer *>(renderer)->HandleResize(width, height);
}