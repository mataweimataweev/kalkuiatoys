#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus");
	int choise;
	int a, b;

	cout << "Здарова это твой калькулятор\n";
	cout << "Выберите операцию:\n";
	cout << "1-Сложение\n";
	cout << "2-Вычитание\n";
	cout << "3-Умножение\n";
	cout << "4-Деление\n";
	cout << "5-Воздедение в степень\n";
	cout << "6-Найти квадратный корень из числа\n";
	cout << "7-Найти 1 % от числа\n";
	cout << "8-Найти факториал числа\n";
	cout << "9-ВСЁ Я УСТАЛ СЧИТАТЬ\n";
	cin >> choise;
	while (true)
	{
		if (choise == 1)
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			int c = a + b;
			cout << "Сумма = " << c << endl;
			return 0;
		}
		if (choise == 2)
		{
			cout << "Введите первое число:";
			cin >> a;
			cout << "Введите второе число:";
			cin >> b;
			int c = a - b;
			cout << "Разность = " << c << endl;
			return 0;
		}
		if (choise == 3)
		{
			cout << "Введите первое число:";
			cin >> a;
			cout << "Введите второе число:";
			cin >> b;
			int c = a * b;
			cout << "Произведение = " << c << endl;
			return 0;
		}
		if (choise == 4)
		{
			cout << "Введите первое число:";
			cin >> a;
			cout << "Введите второе число:";
			cin >> b;
			int c = a / b;
			cout << "Частное = " << c << endl;
			return 0;
		}
		if (choise == 5)
		{
			cout << "Введите первое число:";
			cin >> a;
			cout << "Введите второе число:";
			cin >> b;
			cout << "Cтепень = " << pow(a, b) << endl;
			return 0;
		}
		if (choise == 6)
		{
			cout << "Введите число:";
			cin >> a;
			cout << "Корень = " <<  sqrt(a)<< endl;
			return 0;
		}
		if (choise == 7)
		{
			cout << "Введите число:";
			cin >> a;
			double onePercent = a * 0.01; 
			cout << "1% от числа: " << onePercent << endl;
			return 0;
		}
		if (choise == 8)
		{
			{
				int n, factorial = 1;

				cout << "Введите число: ";
				cin >> n;
				for (int i = 1; i <= n; ++i) {
					factorial *= i;
				}

				cout << "Факториал числа " << n << " равен " << factorial << endl;

				return 0;
			}
		}

		if (choise == 9)
		{
			cout << "ДАВАЙ ПАКА!!";
			return 0;
		}
			
	
		if (choise != 9)
		{
			cout << "ты это вводи число от 1 до 10";
			return 0;
		}
		

	}
	











}
