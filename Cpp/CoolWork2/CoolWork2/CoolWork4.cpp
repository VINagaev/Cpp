#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole3 = GetStdHandle(STD_OUTPUT_HANDLE);
int main_3()
{
	system("chcp 1251");
	SetConsoleTextAttribute(hConsole3, 10);
	float MACH;
	cout << "������� ������ : \n";
	cout << "������� ������������ ���������(���.) � > ";
	cin >> MACH;
	string line(20, '-');
	cout << "" << line << "\n";
	cout << "�������� ������ : \n";
	cout << "����������� �������:  " << MACH * 3 << " ���";
	return 0;
}
