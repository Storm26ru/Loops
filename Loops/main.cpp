#include <iostream>
using namespace std;
//#define DEGREE
//#define ASCII
//#define PRIME_NUMBERS
#define FIBONACCI_1
//#define FIBONACCI_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEGREE
	double base;
	int exponent;
	double answer;
	cout << "���������� � �������\n";
	cout << "������� ��������� - "; cin >> base;
	answer = base;
	cout << "������� ���������� ������� - "; cin >> exponent;
	for (int i = 1; i < exponent; i++)
	{
		answer *= base;
	}
	cout << answer;

#endif // DEGREE

#ifdef ASCII
	cout << "\tChar  |  Dec\n";
	for (int i = 33; i < 127; i++)
	{
		cout << "\t-------------\n";
		cout << "\t " << char(i) << "    |   " << i << endl;
	}
#endif // ASCII

#ifdef PRIME_NUMBERS
	char exit;
	cout << "\t\t������� �����";
	do
	{
		int limit;

		do
		{
			cout << "\n������� ������ ��� ���� ������� �����: "; cin >> limit;
			if (limit == 0 || limit == 1) cout << "��������� ����� " << limit << " �� �������� ������� ������. ������� ����� ����� ";
		} while (limit < 2);

		cout << "\n������� ����� - ";
		for (int i = 2; i <= limit; i++)
		{
			for (int j = 2; j <= i; j++)
			{
				if (i == j) cout << i << " ";
				if (i % j == 0) break;
			}
		}
		cout << "\n\t\t����� ?  y(��) n(���) "; cin >> exit;
	} while (exit == 'n');
#endif // PRIME_NUMBERS

#ifdef FIBONACCI_1,
	char answer;
	cout << "��� ���������." << endl;

	do
	{
		int num1 = 0;
		int num2 = 1;
		int num3 = 0;
		int limit;
		cout << "\n������� ����� �� �������� ����� ������� ��� - "; cin >> limit;
		cout << num1 << ", " << num2;
		while (num3 < limit)
		{
			num3 = num1 + num2;
			if (num3 <= limit) cout << ", " << num3;
			num1 = num2;
			num2 = num3;
		}
		cout << "\n���������� ?  y(��) n(���) :"; cin >> answer;
	} while (answer == 'y');
#endif // FIBONACCI_1,

#ifdef FIBONACCI_2
	int num1 = 0;
	int num2 = 1;
	int num3 = 0;
	int member;
	cout << "����������� ��������� ���������� ������ �� ���� ���������\n";
	cout << "������� ����������� ����� ������ : "; cin >> member;

	for (int i = 0; i < member; i++)
	{
		if (i == 0) cout << num1;
		else if (i == 1) cout << ", " << num2;
		else
		{
			num3 = num1 + num2;
			cout << ", " << num3;
			num1 = num2;
			num2 = num3;
		}
	}
#endif // FIBONACCI_2


}