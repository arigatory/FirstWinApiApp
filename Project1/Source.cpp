#include <Windows.h>

int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR szCmdLine, int nCmdShow)
{
	// CALLBACK - ��� ������ stdcall
	// hInstance - ��������� �� ����� MZ ������������ �����
	// HINSTANCE ������ �������� �� ������������
	// PWSTR szCmdLine ��������� �� ������ ������ ��������, ��������� ���������
	// int nCmdShow ��� ����� ����������� ����: ��������, ����������, �� ���� ����� � ��


	// ���������, ���������� ���������� � ����������
	MSG msg{  };

	// ���������� ������ ����, �.�. ������, ��������� �� ������ ����, � ������� ����� ��������� ����������
	HWND hwnd{};

	// ��������� �������� �� �������������� ����
	WNDCLASSEX wc{ sizeof(WNDCLASSEX) };

	// ��� 2 ���� �������� �� �������������� ��������� ������ � ������ ������ ����. ������ ����� �������� ���������� � ����� ����, ����� ����� �� �������. ��� ����� ����� � ���� ��������� ������ ���� �������
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	
	// ���� ��������� ���������� �����. GetStockObject ���������� gdi ������, �������� � HBRUSH
	wc.hbrBackground = reinterpret_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
	wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wc.hIcon = LoadIcon(nullptr, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(nullptr, IDI_APPLICATION);
	wc.hInstance = hInstance;
	wc.lpfnWndProc = []()->LRESULT
	{

	};
	wc.lpszClassName = L"MyAppClass";
	wc.lpszMenuName = nullptr;
	wc.style = CS_VREDRAW | CS_HREDRAW;

	// ������������ �����
	if (!RegisterClassEx(&wc))
		return EXIT_FAILURE;

	if (hwnd = CreateWindow(wc.lpszClassName, ""))

		// 18:22
}