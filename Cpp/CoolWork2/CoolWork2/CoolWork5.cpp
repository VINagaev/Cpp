#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole4 = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
	system("chcp 1251");
	SetConsoleTextAttribute(hConsole4, 10);
	float Korm;
	cout << "�������� ������� �������� : \n";
	cout << "������ ����� �� 1 ���� (�.) � > ";
	cin >> Korm;
	string line(20, '-');
	cout << "" << line << "\n";
	cout << "�������� ������ : \n";
	cout << "����� ����� �� 30 ����:  " << Korm * 0.03 << " ��.";
	return 0;
}