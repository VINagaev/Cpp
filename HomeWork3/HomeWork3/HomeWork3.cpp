#include <iostream>
using namespace std;
int main()
{
	/*std::system("chcp 1251");
	double R1, R2, R3;
	cout << "Введите R1 и нажмите Enter : ";
	cin >> R1;
	cout << "Введите R2 и нажмите Enter : ";
	cin >> R2;
	cout << "Введите R3 и нажмите Enter : ";
	cin >> R3;
	double R0 = 1 / R1 + 1 / R2 + 1 / R3;
	cout << "R0 = " << R0;*/



	//std::system("chcp 1251");
	//const double pi = 3.14;
	//double S, L, R;
	//cout << "Длина круга (L) = ";
	//cin >> L;
	//R = L / (2 * pi);
	//S = pi * R * R;
	//cout << "Площадь круга (S) = " << S;



	std::system("chcp 1251");
	double V, T, A;
	cout << "Скорость (V) = ";
	cin >> V;
	cout << "Время (T) = ";
	cin >> T;
	cout << "Ускорение (A) = ";
	cin >> A;
	double S = V * T + (A * T * T) / 2;
	cout << "Расстояние (S) = " << S;
}

