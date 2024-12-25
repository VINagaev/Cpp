#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole4 = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
	system("chcp 1251");
	SetConsoleTextAttribute(hConsole4, 10);
	float Korm;
	cout << "Входными данными являются : \n";
	cout << "Расход корма за 1 день (г.) – > ";
	cin >> Korm;
	string line(20, '-');
	cout << "" << line << "\n";
	cout << "Выходные данные : \n";
	cout << "Объем корма на 30 дней:  " << Korm * 0.03 << " кг.";
	return 0;
}