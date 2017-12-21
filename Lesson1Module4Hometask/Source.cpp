#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "������� ����� ������� - ";
	int task;
	cin >> task;

	switch (task)
	{
#pragma region TASK1

		case 1:
		{
			cout << "������� \"���������\" ��������� �����: 2,1, 2,2, 2,3, ..., 2,8.\n";
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
			cout << "���������� ������� ��������� 100, 200, 300, ..., 2000 � ������ (��������� 1 �� ������ �������� � ����������).";
			cout << "������� ��������� 1�� ������ - ";
			float a;
			cin >> a;
			for (int i = 100; i <= 2000;)
			{
				cout << "��������� �� " << i << " ����� �������� " << (a * i) / 1000 << endl;
				i += 100;
			} 

		} break;
#pragma endregion

#pragma region TASK3

		case 3:
		{
		task3:
			cout << "�����:\n";
			cout << "a.����� ���� ����� ����� �� 100 �� 500;\n";
			cout << "b.����� ���� ����� ����� �� a �� 500 (�������� a �������� � ����������; a <= 500);\n";
			cout << "c.����� ���� ����� ����� �� �10 �� b(�������� b �������� � ����������; b >= 10);\n";
			cout << "d.����� ���� ����� ����� �� a �� b(�������� a � b �������� � ����������; b >= a).\n";
			cout << "�������� ������� - ";
			char task3 = 0;
			cin >> task3;
			switch (task3)
			{
			case 'a':
			{
				system("cls");
				cout << "a.����� ����� ���� ����� ����� �� 100 �� 500;\n";
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
				cout << "b.����� ����� ���� ����� ����� �� a �� 500 (�������� a �������� � ����������; a <= 500);\n";
				cout << "������� �������� � - ";
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
				cout << "c.����� ����� ���� ����� ����� �� �10 �� b(�������� b �������� � ����������; b >= 10);\n";
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
				cout << "d.����� ����� ���� ����� ����� �� a �� b(�������� a � b �������� � ����������; b >= a).\n";
				float a, b;
				cout << "������� �������� � - ";
				cin >> a;
				cout << "\n������� �������� b - ";
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
			cout << "�������� ���\n ���� �� ������, ������� ��������� 3000 � �� ����\n";
			cout << "����� �� ������ ������ ��������� �����, ����� ���������� ����\n";
			cout << "������ ������� ������������ ����� � ������\n";
			cout << "������ 130 ������ �� ����������� ������ ������ ����� ��������� � ����\n";
			cout << "������ 140 ������ �� ����������� ���� ������ ����� ��������� � ������\n";
			cout << "��� �� ���������� ��������, � ����� N �����, ������ 1 / N ��, ����� ������ �������.\n";
			cout << "����������:\n";
			cout << "�) �� ����� ���������� �� ���� ����� ���������� ������� ����� n - �� �����(���� ���������, ��� ����� ��������); \n";
			cout << "b) ����� ����� ���� �� ��� ���� �������.\n";
			float n, s = 0, alls = 0;
			cout << "������� ���-�� ������ - ";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{	
				alls += 130 + 140; 
				s += 130 - 140;
				cout << alls << endl;
				cout << s << endl;
			}

			cout << "����� ����������, ������� �� ������� �������� - " << alls + 3000 + 1500 << " ��." << endl;
			cout << "���������� �� ���� �� ����� ���������� �� ����� " << n << "�������� - " << 3000 - 1500 - abs(s) << endl;


		} break;
#pragma endregion

#pragma region TASK5

		case 5:
		{
			cout << "���� ������������������ ����� ����� �1, �2, �, �n. \n";
			cout << "��������, �������� �� ��� ������������ ������������������� ������� �����\n";
			int a = 2, n;
			
			do
			{
				cout << "������� ����� n, �� ������ ���� - ";
				cin >> n;
			} while (n == 0);

			if (n > 0)
			{
				for (int i = 0; i <= n; i++)
				{
					cout << a * i << endl;
				}
				cout << "������������������ ����� ������������" << endl;
			}
			else
			{
				for (int i = 0; i >= n; i--)
				{
					cout << a * i << endl;
				}
				cout << "������������������ ����� ���������" << endl;
			}
		} break;
#pragma endregion

} 


	



	system("pause");
}