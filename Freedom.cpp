/*

Расписание отказа от курения
© Copyright 2012-2020, Skylon Software


ИНФОРМАЦИЯ О ВЕРСИЯХ

Версия 2.0.3.4 (2 июля 2020 года)
- Редактирование русского текста - убрано про "время Ч".

Версия 2.0.3.3 (3 апреля 2018 года)
- Удалена информация для пожертвований.
- Удалена лишняя строка в процедуре fmsynth().

Версия 2.0.3.2 (21 ноября 2017 года)
- Размещена информация для пожертвований.

Версия 2.0.3.1 (18 ноября 2017 года)
- Оптимизация.
- Редактирование данных в ресурсе.

Версия 2.0.3.0 (18 ноября 2017 года)
- Программа экспортирована в Microsoft Visual C++ 2017 Community Edition. Ранее средой разработки была Microsoft Visual C++ 2008 Express Edition.
Размер исполняемого файла уменьшился.

Версия 2.0.2.3 (11 ноября 2017 года)
- Переменная SampleSynthDelay.

Версия 2.0.2.2 (11 ноября 2017 года)
- Окно программы появляется теперь без задержки на вычисление семпла.

Версия 2.0.2.1 (29 сентября 2017 года)
- Компьютер теперь не переходит в спящий режим после нажатия кнопки "Задать расписание" и до выхода из программы.

Версия 2.0.2.0 (25 сентября 2017 года)
- Оптимизация fmsynth().

Версия 2.0.1.9 (19 ноября 2016 года)
- Метрика SM_CXVSCROLL.

Версия 2.0.1.8 (16 октября 2016 года)
- Исправлено неправильное вычисление размера главного окна (параметр dwStyle функций AdjustWindowRect() и CreateWindowEx() не совпадал).

Версия 2.0.1.7 (19 апреля 2016 года)
- Исправлена ошибка в английском тексте.

Версия 2.0.1.6 (7 марта 2016 года)
- Самодельная иконка.
- Изменены отступы и размеры компонентов окна.

Версия 2.0.1.5 (22 февраля 2016 года)
- Кнопка теперь неактивна, если интервал между сигаретами не введен или введено нулевое значение.
Больше не нужна строка String11, "Необходимо ввести интервал времени!".

Версия 2.0.1.4 (1 сентября 2015 года)
- Реализовано переключение между элементами окна нажатием клавиши TAB (стиль WS_TABSTOP и функция IsDialogMessage()).

Версия 2.0.1.3 (13 июля 2015 года)
- Высота окна программы уменьшена. Расстояние от списка до краев клиентской области 10 пикселей.

Версия 2.0.1.2 (28 июня 2015 года)
- Ширина столбца времени в ListView подобрана так, чтобы не появлялся горизонтальный бегунок (Scrollbar).

Версия 2.0.1.1 (4 мая 2015 года)
- CheckBoxes теперь обновляются по таймеру все, я не только тот, который соответствует последней сигарете.
- Период сообщения WM_TIMER уменьшен с 1000 до 100 ms.

Версия 2.0.1.0 (12 августа 2013 года)
- Исправлены ошибки в итальянском варианте.

Версия 2.0.0.9 (1 августа 2013 года)
- Добавлена поддержка итальянского языка. Перевод сделала моя сестра Кирсанова Татьяна.

Версия 2.0.0.8 (22 июля 2013 года)
- Добавлены английский и итальянский языки в структуру "VarFileInfo" ресурса.
- Программа теперь называется "Quit Smoking Schedule".

Версия 2.0.0.7 (22 июля 2013 года)
- Добавлена поддержка итальянского языка.

Версия 2.0.0.6 (25 июня 2013 года)
- Подтвреждения на выход теперь нет, если расписание не задано.

Версия 2.0.0.5 (25 июня 2013 года)
- Введено ограничение интервала времени.

Версия 2.0.0.4 (25 июня 2013 года)
- Исправлена ошибка переполнения количества сигарет.

Версия 2.0.0.3 (25 июня 2013 года)
- Исправлена ошибка в английском тексте. Форматирование исходного кода.

Версия 2.0.0.2 (24 июня 2013 года)
- Экспонента теперь вычисляется правильно. Семпл генерируется поэтому тоже правильно.

Версия 2.0.0.1 (24 июня 2013 года)
- Генератор семпла теперь написан на языке ассемблера. Есть ошибка в процедуре fmsynth: звук спадает не до тишины.

Версия 2.0.0.0 (24 июня 2013 года)
- Отключены default библиотеки. Размер программы уменьшился с 182272 до 112128 байт.

Версия 1.0.0.9 (23 июня 2013 года)
- Локализация. Английский перевод выполнен Анастасией.

Версия 1.0.0.8 (22 июня 2013 года)
- Работа с Edit Control.

Версия 1.0.0.7 (20 июня 2013 года)
- Добавлены CheckBoxes.

Версия 1.0.0.6 (20 июня 2013 года)
- Добавлен звук колокола.
- Добавлена иконка.

Версия 1.0.0.5 (20 июня 2013 года)
- Реализован таймер.

Версия 1.0.0.4 (20 июня 2013 года)
- Реализована функция ConvertTime. Реализована работа с системным временем.

Версия 1.0.0.3 (20 июня 2013 года)
- Реализовано подтверждение выхода из программы.

Версия 1.0.0.2 (20 июня 2013 года)
- Реализована функция ConvertNumber.

Версия 1.0.0.1 (20 июня 2013 года)
- Добавлен компонент ListView.

Версия 1.0.0.0 (17 июня 2013 года)
- Расписание отказа от курения переписывается на языке VisualC++. Предыдущие версии были написаны на Delphi.

*/

#include <windows.h>
#include <CommCtrl.h>
#include <mmsystem.h>

// length of bell sample:
#define LENGTH 44100*15

#define MAX_STRING_LENGTH 16384
char EnteredText[MAX_STRING_LENGTH];

#define CENTER_VERTICAL_SPACE (12 + 180 - 15 + 20)

HWAVEOUT hDevice;
WAVEFORMATEX formatex;
WAVEHDR header;
MMRESULT error;
signed short sample[LENGTH];

HINSTANCE hInstance;
HWND hMainWnd;
HWND hList;
HWND IntervalBox;
HWND NumberBox;
HWND hInsButton;

char itext[] = "00";	// conversion
char itime[] = "00:00:00";	// conversion

int Interval = 0;	// Интервал времени между перекурами
int CigCount = 20;		// Количество перекуров

LARGE_INTEGER Sigarette[100];	// Массив размером CigCount времени курения
BOOL Smoked[100];	// Флаги

BOOL ConfirmQuit = FALSE;	// Если расписания нет - выход сразу
BOOL SampleSynthesized = FALSE;
unsigned int SampleSynthDelay = 20;

TCHAR *String1;
TCHAR *String2;
TCHAR *String3;
TCHAR *String4;
TCHAR *String5;
TCHAR *String6;
TCHAR *String7;
TCHAR *String8;
TCHAR *String9;
TCHAR *String10;
//TCHAR *String11;
TCHAR *String12;
TCHAR *String13;
TCHAR *String14;
TCHAR *String15;

// Sampler
unsigned int i;
signed short const400 = 400;
signed short const560 = 560;
signed int const44100 = 44100;
signed int const32767 = 32767;
signed int const90000 = 90000;

LRESULT CALLBACK MainWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
char *ConvertNumber(int number);
int ConvertString(HWND Box);
signed short fmsynth();

char *ConvertNumber(int number)
{
	itext[0] = '0';
	itext[1] = '0';

	while (number > 9)
	{
		itext[0]++;
		number = number - 10;
	};

	while (number > 0)
	{
		itext[1]++;
		number--;
	};

	return(itext);
}

char *ConvertTime(WORD wHour, WORD wMinute, WORD wSecond)
{
	itime[0] = '0';
	itime[1] = '0';
	itime[3] = '0';
	itime[4] = '0';
	itime[6] = '0';
	itime[7] = '0';

	while (wHour > 9)
	{
		itime[0]++;
		wHour = wHour - 10;
	};

	while (wHour > 0)
	{
		itime[1]++;
		wHour--;
	};

	while (wMinute > 9)
	{
		itime[3]++;
		wMinute = wMinute - 10;
	};

	while (wMinute > 0)
	{
		itime[4]++;
		wMinute--;
	};

	while (wSecond > 9)
	{
		itime[6]++;
		wSecond = wSecond - 10;
	};

	while (wSecond > 0)
	{
		itime[7]++;
		wSecond--;
	};

	return(itime);
}

int WinMainCRTStartup()
{
	// Initializations
	hInstance = GetModuleHandle(0);
	for (int init = 0; init < 100; init++) Smoked[init] = FALSE;

	String1 = TEXT("Quit Smoking Schedule - Skylon Software <skylon@inbox.ru>");
	String2 = TEXT("1. Set a time period for another cigarette:");
	String3 = TEXT("2. Set a maximum of cigarettes for today (optional):");
	String4 = TEXT("3. Press \"Set a schedule\".");
	String5 = TEXT("4. A beep means you can smoke a cigarette.");
	String6 = TEXT("Time period in minutes");
	String7 = TEXT("Maximum amount in numbers");
	String8 = TEXT("Set a schedule");
	String9 = TEXT("Cigarette");
	String10 = TEXT("Time");
	//	String11 = TEXT("Please, set a time period");
	String12 = TEXT("Error!");
	String13 = TEXT("Are you sure you want to exit now? Warning! The schedule will be lost!");
	String14 = TEXT("Confirmation");
	String15 = TEXT("Time interval is too big!");

	LANGID language = GetUserDefaultLangID();
	//if (language == 0x0419)
	if (language == MAKELANGID(LANG_RUSSIAN, SUBLANG_RUSSIAN_RUSSIA))
	{
		String1 = TEXT("Расписание отказа от курения - Skylon Software <skylon@inbox.ru>");
		String2 = TEXT("1. Введите интервал времени, через который Вы собираетесь выкуривать очередную сигарету:");
		String3 = TEXT("2. Введите максимальное число сигарет, которое Вы позволите себе сегодня (необязательный параметр):");
		String4 = TEXT("3. Нажмите кнопку \"Задать расписание\". В списке добавятся строки начиная от текущего момента.");
		String5 = TEXT("4. Когда можно будет закурить, программа просигнализирует через акустическую систему.");
		String6 = TEXT("Интервал в минутах");
		String7 = TEXT("Максимальное количество в штуках");
		String8 = TEXT("Задать расписание");
		String9 = TEXT("Сигарета");
		String10 = TEXT("Время");
		//		String11 = TEXT("Необходимо ввести интервал времени!");
		String12 = TEXT("Ошибка!");
		String13 = TEXT("Вы действительно хотите выйти из программы расписания?\nВНИМАНИЕ!!! Текущее расписание будет ПОТЕРЯНО!");
		String14 = TEXT("Подтверждение");
		String15 = TEXT("Задан слишком большой интервал времени");
	}

	if ((language == MAKELANGID(LANG_ITALIAN, SUBLANG_ITALIAN)) || ((language == MAKELANGID(LANG_ITALIAN, SUBLANG_ITALIAN_SWISS))))
	{
		String1 = TEXT("Programma Per Smettere Di Fumare - Skylon Software <skylon@inbox.ru>");
		String2 = TEXT("1. Inserire l'intervallo del tempo tra una sigaretta e l'altra:");
		String3 = TEXT("2. Inserire la quantità massimale di sigarette che vuoi fumare oggi (parametro facoltativo):");
		String4 = TEXT("3. Premere il pulsante \"stabilire l'orario scelto\". Nell' elenco si inseriscono le righe cominciando da questo momento.");
		String5 = TEXT("4. Quando si può fumare il programma dà un segnale acustico.");
		String6 = TEXT("Intervallo in minuti");
		String7 = TEXT("Quantità massima delle sigarette");
		String8 = TEXT("Stabilire orario scelto");
		String9 = TEXT("Sigaretta");
		String10 = TEXT("Tempo");
		//		String11 = TEXT("Necessario inserire l'intervallo del tempo!");
		String12 = TEXT("Errore!");
		String13 = TEXT("Vuoi davvero eliminare orario?\nAttenzione!!! Attuale l'orario sarà perso!");
		String14 = TEXT("Conferma");
		String15 = TEXT("C'è troppo intervallo di tempo tra una sigaretta e l'altra");
	}


	// Generate sample:
	formatex.wFormatTag = WAVE_FORMAT_PCM;
	formatex.nChannels = 1; // mono
	formatex.wBitsPerSample = 16;
	formatex.nSamplesPerSec = 44100;
	formatex.nBlockAlign = formatex.nChannels * formatex.wBitsPerSample / 8;
	formatex.nAvgBytesPerSec = formatex.nSamplesPerSec * formatex.nBlockAlign;
	formatex.cbSize = NULL;

	header.lpData = (LPSTR)sample;
	header.dwBufferLength = sizeof(sample);
	header.dwBytesRecorded = sizeof(sample);
	header.dwUser = 0;
	header.dwFlags = 0;
	header.dwLoops = 1;

	error = waveOutOpen(
		&hDevice,
		WAVE_MAPPER,
		&formatex,
		NULL,
		NULL,
		WAVE_FORMAT_DIRECT
	);

	waveOutPrepareHeader(
		hDevice,
		&header,
		sizeof(header)
	);

	const INITCOMMONCONTROLSEX picce = { sizeof(INITCOMMONCONTROLSEX), ICC_LISTVIEW_CLASSES };
	InitCommonControlsEx(&picce);	// we add XP Manifest

	WNDCLASS cls;
	cls.lpszClassName = TEXT("FreedomMainWindowClass");
	cls.cbClsExtra = 0;
	cls.cbWndExtra = 0;
	cls.hInstance = hInstance;
	cls.style = 0;
	cls.hIcon = LoadIcon(hInstance, TEXT("MAINICON"));
	cls.hCursor = LoadCursor(NULL, IDC_ARROW);
	cls.lpfnWndProc = MainWndProc;
	cls.lpszMenuName = NULL;
	cls.hbrBackground = (HBRUSH)(COLOR_BTNFACE + 1);
	if (!RegisterClass(&cls)) return FALSE;

	// Calculate main window coordinates:
	HDC hDCScreen = GetDC(NULL);
	unsigned int ScreenWidth = GetDeviceCaps(hDCScreen, HORZRES);
	unsigned int ScreenHeight = GetDeviceCaps(hDCScreen, VERTRES);
	ReleaseDC(NULL, hDCScreen);

	RECT MainWndRect;
	MainWndRect.left = (ScreenWidth - CENTER_VERTICAL_SPACE - 340 - 20) / 2;
	MainWndRect.top = (ScreenHeight - 295) / 2;
	MainWndRect.right = MainWndRect.left + CENTER_VERTICAL_SPACE + 340 + 20;
	MainWndRect.bottom = MainWndRect.top + 295;
	AdjustWindowRect(
		&MainWndRect,			// pointer to client-rectangle structure
		WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,	// window styles
		FALSE					// menu-present flag
	);

	hMainWnd = CreateWindowEx(
		0,
		TEXT("FreedomMainWindowClass"),
		String1,
		WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
		MainWndRect.left,
		MainWndRect.top,
		MainWndRect.right - MainWndRect.left,
		MainWndRect.bottom - MainWndRect.top,
		NULL,
		NULL,
		hInstance,
		NULL
	);
	if (!hMainWnd) return FALSE;

	SendMessage(hMainWnd, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	ShowWindow(hMainWnd, SW_SHOWNORMAL);
	UpdateWindow(hMainWnd);

	HWND hLabel1 = CreateWindow(
		TEXT("STATIC"),	// pointer to registered class name
		String2,	// pointer to window name
		WS_CHILD | SS_LEFT,	// window style
		CENTER_VERTICAL_SPACE,	// horizontal position of window
		20,	// vertical position of window
		340,	// window width
		30,	// window height
		hMainWnd,	// handle to parent or owner window
		(HMENU)1,	// handle to menu or child-window identifier
		hInstance,	// handle to application instance
		NULL 	// pointer to window-creation data
	);

	ShowWindow(hLabel1, SW_SHOWNORMAL);
	SendMessage(hLabel1, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	HWND hLabel2 = CreateWindow(
		TEXT("STATIC"),	// pointer to registered class name
		String3,	// pointer to window name
		WS_CHILD | SS_LEFT,	// window style
		CENTER_VERTICAL_SPACE,	// horizontal position of window
		110 - 15,	// vertical position of window
		340,	// window width
		30,	// window height
		hMainWnd,	// handle to parent or owner window
		(HMENU)2,	// handle to menu or child-window identifier
		hInstance,	// handle to application instance
		NULL 	// pointer to window-creation data
	);

	ShowWindow(hLabel2, SW_SHOWNORMAL);
	SendMessage(hLabel2, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	HWND hLabel3 = CreateWindow(
		TEXT("STATIC"),	// pointer to registered class name
		String4,	// pointer to window name
		WS_CHILD | SS_LEFT,	// window style
		CENTER_VERTICAL_SPACE,	// horizontal position of window
		200 - 15 - 15,	// vertical position of window
		340,	// window width
		30,	// window height
		hMainWnd,	// handle to parent or owner window
		(HMENU)3,	// handle to menu or child-window identifier
		hInstance,	// handle to application instance
		NULL 	// pointer to window-creation data
	);

	ShowWindow(hLabel3, SW_SHOWNORMAL);
	SendMessage(hLabel3, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	HWND hLabel4 = CreateWindow(
		TEXT("STATIC"),	// pointer to registered class name
		String5,	// pointer to window name
		WS_CHILD | SS_LEFT,	// window style
		CENTER_VERTICAL_SPACE,	// horizontal position of window
		290 - 15 - 15 - 15 + 5,	// vertical position of window
		340,	// window width
		30,	// window height
		hMainWnd,	// handle to parent or owner window
		(HMENU)4,	// handle to menu or child-window identifier
		hInstance,	// handle to application instance
		NULL 	// pointer to window-creation data
	);

	ShowWindow(hLabel4, SW_SHOWNORMAL);
	SendMessage(hLabel4, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	IntervalBox = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		TEXT("EDIT"),
		String6,
		WS_CHILD | WS_VISIBLE | ES_LEFT | ES_AUTOHSCROLL | WS_TABSTOP | ES_NUMBER,
		CENTER_VERTICAL_SPACE,
		60,
		150,
		20,
		hMainWnd,
		HMENU(5),
		hInstance,
		NULL
	);

	SendMessage(IntervalBox, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	NumberBox = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		TEXT("EDIT"),
		String7,
		WS_CHILD | WS_VISIBLE | ES_LEFT | ES_AUTOHSCROLL | WS_TABSTOP | ES_NUMBER,
		CENTER_VERTICAL_SPACE,
		150 - 15,
		250,
		20,
		hMainWnd,
		HMENU(5),
		hInstance,
		NULL
	);

	SendMessage(NumberBox, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	hInsButton = CreateWindow(
		TEXT("BUTTON"),
		String8,
		WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON | WS_TABSTOP | WS_DISABLED,
		CENTER_VERTICAL_SPACE,
		240 - 15 - 15,
		150,
		25,
		hMainWnd,
		HMENU(6),
		hInstance,
		NULL
	);

	SendMessage(hInsButton, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), 0);

	hList = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		WC_LISTVIEW,
		NULL,
		WS_CHILD | WS_VISIBLE | LVS_REPORT | LVS_NOSORTHEADER | LVS_SINGLESEL,
		10, 10, 180 - 15, 295 - 10 - 10,
		hMainWnd,
		HMENU(7),
		hInstance,
		NULL
	);

	const LV_COLUMN pcolSigarette = {
		LVCF_TEXT | LVCF_WIDTH,
		LVCFMT_LEFT,
		70,
		String9,
		0,
		1
	};
	ListView_InsertColumn(hList, 0, &pcolSigarette);

	const LV_COLUMN pcolTime = {
		LVCF_TEXT | LVCF_WIDTH,
		LVCFMT_LEFT,
		180 - 15 - GetSystemMetrics(SM_CXVSCROLL) - 4 - 70,	// 4 = константа?
		String10,
		0,
		1
	};
	ListView_InsertColumn(hList, 1, &pcolTime);

	ListView_SetExtendedListViewStyle(hList, LVS_EX_CHECKBOXES | LVS_EX_FULLROWSELECT);

	MSG msg;
	while (GetMessage(&msg, NULL, NULL, NULL))
	{
		if (IsDialogMessage(hMainWnd, &msg)) continue;
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	waveOutReset(hDevice);
	waveOutClose(hDevice);

	ExitProcess(0);
}

LRESULT CALLBACK MainWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	short *level;
	switch (message)
	{
	case WM_TIMER:
		if (!SampleSynthesized)
			if (SampleSynthDelay)
				SampleSynthDelay--;
			else
			{
				level = &sample[LENGTH];
				i = LENGTH;
				do
					*(--level) = fmsynth();
				while (i--);
				SampleSynthesized = TRUE;
			}

		SYSTEMTIME CurrentTime;
		FILETIME CurrentFileTime; // FILETIME analog
		GetLocalTime(&CurrentTime);
		SystemTimeToFileTime(&CurrentTime, &CurrentFileTime);
		LARGE_INTEGER CurrentLI;
		CurrentLI.HighPart = CurrentFileTime.dwHighDateTime;
		CurrentLI.LowPart = CurrentFileTime.dwLowDateTime;
		for (int i = 0; i < CigCount; i++)
		{
			if (Smoked[i] == FALSE)
				if (Sigarette[i].HighPart <= CurrentLI.HighPart)
					if (Sigarette[i].LowPart <= CurrentLI.LowPart)
					{
						Smoked[i] = TRUE;
						waveOutWrite(
							hDevice,
							&header,
							sizeof(WAVEHDR)
						);
					}
			ListView_SetCheckState(hList, i, Smoked[i]);
		}

		break;
	case WM_COMMAND:
		if (HIWORD(wParam) == EN_CHANGE)
			if (lParam == (LPARAM)IntervalBox)
				EnableWindow(hInsButton, (ConvertString(IntervalBox) > 0));

		if (HIWORD(wParam) == EN_SETFOCUS)
		{
			SetWindowText((HWND)lParam, TEXT(""));
			break;
		}
		if (HIWORD(wParam) == EN_KILLFOCUS)
		{
			if (lParam == (LPARAM)IntervalBox)
			{
				Interval = ConvertString(IntervalBox);
				if (Interval < -1) break;
				if (Interval < 1)
					SetWindowText(IntervalBox, String6);
			}
			if (lParam == (LPARAM)NumberBox)
			{
				CigCount = ConvertString(NumberBox);
				if (CigCount >= 100)
				{
					CigCount = 99;
					SetWindowText(NumberBox, TEXT("99"));
				}
				if (CigCount < -1)
				{
					CigCount = 99;
					SetWindowText(NumberBox, TEXT("99"));
				}
				if (CigCount < 1) SetWindowText(NumberBox, String7);
			}
		}
		if (LOWORD(wParam) == 6)
		{
			Interval = ConvertString(IntervalBox);
			CigCount = ConvertString(NumberBox);

			if (CigCount < 1) CigCount = 20;

			if (Interval > 60 * 24 * 7)
			{
				MessageBox(hMainWnd, String15, String12, MB_OK);
				break;
			}

			SYSTEMTIME StartTime;
			FILETIME StartFileTime; // FILETIME analog
			GetLocalTime(&StartTime);
			SystemTimeToFileTime(&StartTime, &StartFileTime);
			LARGE_INTEGER StartLI;

			StartLI.HighPart = StartFileTime.dwHighDateTime;
			StartLI.LowPart = StartFileTime.dwLowDateTime;

			for (int SigN = 0; SigN < CigCount; SigN++) {

				const LV_ITEMA pitem = {
					LVIF_TEXT,
					SigN,
					0,
					0,
					0,
					ConvertNumber(SigN + 1),
					0,
					0,       // index of the list view item's icon 
					0       // 32-bit value to associate with item 
				};
				SendMessageA((hList), LVM_INSERTITEMA, 0, (LPARAM)(const LV_ITEMA *)(&pitem));	// ListView_InsertItem(hList, &pitem);

				// Calculate smoking time
				for (int i = 0; i < Interval; i++) StartLI.QuadPart += 600000000;
				Sigarette[SigN].HighPart = StartLI.HighPart;
				Sigarette[SigN].LowPart = StartLI.LowPart;
				SYSTEMTIME SmokingTime;
				FILETIME SmokingFileTime;
				SmokingFileTime.dwLowDateTime = StartLI.LowPart;
				SmokingFileTime.dwHighDateTime = StartLI.HighPart;
				FileTimeToSystemTime(&SmokingFileTime, &SmokingTime);

				const LV_ITEMA pitem2 = {
					LVIF_TEXT,
					SigN,
					1,
					0,
					0,
					ConvertTime(SmokingTime.wHour,SmokingTime.wMinute,SmokingTime.wSecond),
					0,
					0,       // index of the list view item's icon 
					0       // 32-bit value to associate with item 
				};
				SendMessageA((hList), LVM_SETITEMA, 0, (LPARAM)(const LV_ITEMA *)(&pitem2));	// ListView_SetItem(hList, &pitem2);
			}

			EnableWindow(hInsButton, FALSE);
			EnableWindow(IntervalBox, FALSE);
			EnableWindow(NumberBox, FALSE);

			SetThreadExecutionState(ES_CONTINUOUS | ES_SYSTEM_REQUIRED);

			SetTimer(
				hMainWnd,	// handle of window for timer messages
				8,	// timer identifier
				500,	// time-out value
				NULL	// address of timer procedure (NULL = WM_TIMER message)
			);

			ConfirmQuit = TRUE;
		}
		break;
	case WM_CLOSE:
		if (ConfirmQuit)
		{
			if (MessageBox(hMainWnd, String13, String14, MB_OKCANCEL) != IDOK)
				break;
			SetThreadExecutionState(ES_CONTINUOUS);
		}
		PostQuitMessage(0);
		break;
	default:
		return(DefWindowProc(hWnd, message, wParam, lParam));
	}
	return(NULL);
}

int ConvertString(HWND Box)
{
	int Converted;
	if (!GetWindowTextA(Box, EnteredText, MAX_STRING_LENGTH)) return(-1); // Empty string
	Converted = 0;
	int position = 0;
	while (EnteredText[position] != 0) {
		if (EnteredText[position] > 0x39) return(-1);
		if (EnteredText[position] < 0x30) return(-1);
		Converted *= 10;
		Converted += (EnteredText[position] - 0x30);
		if (Converted < 0) return(MAXINT);
		position++;
	}
	return(Converted);
}

signed short fmsynth()	// 92 bytes
{
	signed short temp;
	__asm
	{
		finit; initialize FPU
		fldpi
		fimul	dword ptr i
		fimul	word ptr[const400]
		fidiv	dword ptr[const44100]
		fldpi
		fimul	dword ptr i
		fimul	word ptr[const560]
		fidiv	dword ptr[const44100]
		fsin; sin(560 * PI*i / 44100)
		faddp	st(1), st(0)
		fsin
		fimul	dword ptr[const32767]
		fild	dword ptr i
		fidiv	dword ptr[const90000]

		// Exponent:
		fldl2e;->log2(e)
		fmul;->log2(e)*Src

		; the FPU can compute the antilog only with the mantissa
		; the characteristic of the logarithm must thus be removed

		fld   st(0); copy the logarithm
		frndint; keep only the characteristic
		fsub  st(1), st; keeps only the mantissa
		fxch; get the mantissa on top
		f2xm1; ->2 ^ (mantissa)-1
		fld1
		fadd; add 1 back

		; the number must now be readjusted for the characteristic of the logarithm

		fscale; scale it with the characteristic

		fwait
		fstp  st(1); get rid of the characteristic
		; exp(i / 90000)

		fdivp st(1), st(0)

		fist word ptr temp
	}
	return(temp);
}

