#include <stdio.h>
#include <locale.h>
#define D 2.54
#define I 2.32166

int task1();
int task2();
int task3();

void main()
{
	setlocale(LC_ALL, "RUS");
	task1();
}

int task1()
{
	int num1;
	int num2;
	puts("������� ������ �����");
	scanf("%d", &num1);
	printf("������� ����� %d\n", num1);
	puts("������� ������ �����");
	scanf("%d", &num2);
	printf("������� ����� %d\n", num2);
	printf("����� ����� %d � %d ����� %d\n", num1, num2, num1 + num2);
	printf("�������� ����� %d � %d ����� %d\n", num2, num1, num2 - num1);
	printf("����������� ����� %d � %d ����� %d\n", num2, num1, num2 * num1);
	printf("������� �� ������� %d �� %d ����� %d\n", num2, num1, num2 / num1);
	printf("������� �� ������� %d �� %d ����� %d\n", num2, num1, num2 % num1);
}

int task2()
{
	int dym;
	float result1;
	float result2;
	puts("������� ����� ������ ��� �������");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = I * dym;
	printf("%d ���������� ������ - ��� %.2f ��\n", dym, result1);
	printf("%d ��������� ������ - ��� %.2f ��\n", dym, result2);
}

int task3()
{
	int a, b;
	puts("������� ������ �����");
	scanf("%d", &a);
	puts("������� ������ �����");
	scanf("%d", &b);
	puts("  _____________");
	puts("  |a*b|a+b|a-b|");
	puts("  _____________");
	printf("  |%d*%d|%d+%d|%d-%d|\n", a, b, a, b, a, b);
	puts("  _____________");
	printf("  | %1d | %1d | %1d |", a * b, a + b, a - b);
}