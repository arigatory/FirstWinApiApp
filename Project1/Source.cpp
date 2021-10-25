#include <Windows.h>

int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR szCmdLine, int nCmdShow)
{
	// CALLBACK - это просто stdcall
	// hInstance - указывает на адрес MZ исполняемого файла
	// HINSTANCE второй параметр не используется
	// PWSTR szCmdLine указатель на строку юникод символов, аргументы программы
	// int nCmdShow как будет пказываться окно: свернуто, развернуто, на весь экран и тд


	// структура, содержащая информацию о сообщениях
	MSG msg{  };

	// дескриптор нашего окна, т.е. хендел, указатель на объект ядра, в котором будет храниться информация
	HWND hwnd{};

	// структура отвечает за характеристики окна
	WNDCLASSEX wc{ sizeof(WNDCLASSEX) };

	// эти 2 поля отвечают за дополнительное выделение памяти в классе нашего окна. Бывает нужно передать информкцию в класс окна, чтобы потом ее достать. Для этого нужно в поля запихнуть размер спец объекта
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	
	// поле принимает дескрипток кисти. GetStockObject возвращает gdi объект, приводим к HBRUSH
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

	// регистрируем класс
	if (!RegisterClassEx(&wc))
		return EXIT_FAILURE;

	if (hwnd = CreateWindow(wc.lpszClassName, ""))

		// 18:22
}