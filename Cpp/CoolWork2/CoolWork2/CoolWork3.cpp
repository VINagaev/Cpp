#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole2 = GetStdHandle(STD_OUTPUT_HANDLE);
int main_2()
{
	system("chcp 1251");
	SetConsoleTextAttribute(hConsole2, 10);
	float diag_in_inches;
	cout << "��������� ����������(inch) -> ";
	cin >> diag_in_inches;
	string line(20, '-');
	cout << "    " << line << "\n";
	cout << "    �������� ������ : \n";
	cout << "��������� ���������� : " << diag_in_inches * 2.54 << " ��.\n";
	return 0;
}