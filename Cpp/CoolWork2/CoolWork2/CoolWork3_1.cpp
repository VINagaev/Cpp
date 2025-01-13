#include <iostream>
#include <windows.h>

using namespace std;
HANDLE hConsole5 = GetStdHandle(STD_OUTPUT_HANDLE);
void fun(int a = 10, int b = 20){
	int temp;
	a = 10;
	b = 20;
	temp = a;
	a = b;
	b = temp;
	cout << "a: " << a << ", b: " << b;
}
int main()
{
	/*int a, b, c, result;
	a = 10;
	b = 1;
	c = 2;
	result = a * b * c;
	cout << result;*/

	int a, b, temp;
	fun(10, 20);
}