
#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main_1()
{

	//ДЗ:
	string line(82, '=');
	SetConsoleTextAttribute(hConsole, 10);
	cout << line << "\n";
	cout << "| \tX\t | \tY\t | \tX and Y\t | \t X or Y\t | \tNOT X\t |\n";
	cout << line << "\n";
	SetConsoleTextAttribute(hConsole, 10);
	cout << "| \t0\t | \t0\t | \t0\t | \t0\t | \t1\t |\n";
	cout << "| \t0\t | \t1\t | \t0\t | \t1\t | \t1\t |\n";
	cout << "| \t1\t | \t0\t | \t0\t | \t1\t | \t0\t |\n";
	cout << "| \t1\t | \t1\t | \t1\t | \t1\t | \t0\t |\n";
	cout << line << "\n";


	return 0;
}
