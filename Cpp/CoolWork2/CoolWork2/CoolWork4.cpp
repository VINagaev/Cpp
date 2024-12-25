#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole3 = GetStdHandle(STD_OUTPUT_HANDLE);
int main_3()
{
	system("chcp 1251");
	SetConsoleTextAttribute(hConsole3, 10);
	float MACH;
	cout << "¬ходные данные : \n";
	cout << "≈мкость аккумул€тора смартфона(мјч.) Ц > ";
	cin >> MACH;
	string line(20, '-');
	cout << "" << line << "\n";
	cout << "¬ыходные данные : \n";
	cout << "ћинимальна€ емкость:  " << MACH * 3 << " мјч";
	return 0;
}
