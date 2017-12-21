#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Введите номер задания - ";
	int task;
	cin >> task;

	switch (task)
	{
#pragma region TASK1

		case 1:
		{
			cout << "Вывести \"столбиком\" следующие числа: 2,1, 2,2, 2,3, ..., 2,8.\n";
			for (float i = 2.1; i <= 2.8;)
			{
				cout << i << endl;
				i += 0.1;
			}
		} break;

#pragma endregion

#pragma region TASK2

		case 2:
		{
			cout << "Напечатать таблицу стоимости 100, 200, 300, ..., 2000 г конфет (стоимость 1 кг конфет вводится с клавиатуры).";
			cout << "Введите стоимость 1кг конфет - ";
			float a;
			cin >> a;
			for (int i = 100; i <= 2000;)
			{
				cout << "стоимость за " << i << " грамм составит " << (a * i) / 1000 << endl;
				i += 100;
			} 

		} break;
#pragma endregion

#pragma region TASK3

		case 3:
		{
		task3:
			cout << "Найти:\n";
			cout << "a.сумму всех целых чисел от 100 до 500;\n";
			cout << "b.сумму всех целых чисел от a до 500 (значение a вводится с клавиатуры; a <= 500);\n";
			cout << "c.сумму всех целых чисел от –10 до b(значение b вводится с клавиатуры; b >= 10);\n";
			cout << "d.сумму всех целых чисел от a до b(значения a и b вводятся с клавиатуры; b >= a).\n";
			cout << "Выберите задание - ";
			char task3 = 0;
			cin >> task3;
			switch (task3)
			{
			case 'a':
			{
				system("cls");
				cout << "a.Найти сумму всех целых чисел от 100 до 500;\n";
				int a = 0;
				for (int i = 100; i <= 500; i++)
				{
					a += i;
				}
				cout << a << endl;
			} break;

			case 'b':
			{
				system("cls");
			task3b:
				cout << "b.Найти сумму всех целых чисел от a до 500 (значение a вводится с клавиатуры; a <= 500);\n";
				cout << "Введите значение а - ";
				float a;
				cin >> a;
				if (a <= 500)
				{
					for (float i = a; i <= 500; i++)
					{
						a += i;
					}
					cout << a << endl;
				}
				else
				{
					cout << "ERROR!!\n";
					goto task3b;
				}
			} break;

			case 'c':
			{
				system("cls");
			task3c:
				cout << "c.Найти сумму всех целых чисел от –10 до b(значение b вводится с клавиатуры; b >= 10);\n";
				float b;
				cin >> b;
				if (b >= 10)
				{
					for (float i = -10; i <= b; i++)
					{
						b += i;
					}
					cout << b << endl;
				}
				else
				{
					cout << "ERROR!!\n";
					goto task3c;
				}
			} break;

			case 'd':
			{
				system("cls");
			task3d:
				cout << "d.Найти сумму всех целых чисел от a до b(значения a и b вводятся с клавиатуры; b >= a).\n";
				float a, b;
				cout << "Введите значение а - ";
				cin >> a;
				cout << "\nВВедите значение b - ";
				cin >> b;
				if (b >= a)
				{
					float c = 0;
					for (float i = a; i <= b; i++)
					{
						c += i;
					}
				}
				else
				{
					cout << "ERROR!!\n";
					goto task3d;
				}
			}
			default:
			{
				cout << "ERROR!!\n";
				goto task3;
			}

			} break;
		} break;
#pragma endregion

#pragma region TASK4

		case 4:
		{
			cout << "Странный муж\n Идет на работу, которая находится 3000 м от дома\n";
			cout << "Придя на работу решает вернуться назад, чтобы поцеловать жену\n";
			cout << "Пройдя полпути поворачивает назад к работе\n";
			cout << "Пройдя 130 метров по направлению работы решает вновь повернуть к дому\n";
			cout << "Пройдя 140 метров по направлению дома решает вновь повернуть к работе\n";
			cout << "Так он продолжает метаться, и после N этапа, пройдя 1 / N км, снова меняет решение.\n";
			cout << "Определить:\n";
			cout << "а) на каком расстоянии от дома будет находиться мужчина после n - го этапа(если допустить, что такое возможно); \n";
			cout << "b) какой общий путь он при этом пройдет.\n";
			float n, s = 0, alls = 0;
			cout << "Введите кол-во этапов - ";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{	
				alls += 130 + 140; 
				s += 130 - 140;
				cout << alls << endl;
				cout << s << endl;
			}

			cout << "Общее расстояние, которое он пройдет составит - " << alls + 3000 + 1500 << " км." << endl;
			cout << "Расстояние от дома до места нахождения на этапе " << n << "составит - " << 3000 - 1500 - abs(s) << endl;


		} break;
#pragma endregion

#pragma region TASK5

		case 5:
		{
			cout << "Дана последовательность целых чисел а1, а2, …, аn. \n";
			cout << "Выяснить, является ли она возрастающей последовательностью простых чисел\n";
			int a = 2, n;
			
			do
			{
				cout << "Введите число n, не равное нулю - ";
				cin >> n;
			} while (n == 0);

			if (n > 0)
			{
				for (int i = 0; i <= n; i++)
				{
					cout << a * i << endl;
				}
				cout << "Последовательность чисел возрастающая" << endl;
			}
			else
			{
				for (int i = 0; i >= n; i--)
				{
					cout << a * i << endl;
				}
				cout << "Последовательность числе убывающая" << endl;
			}
		} break;
#pragma endregion

} 


	



	system("pause");
}