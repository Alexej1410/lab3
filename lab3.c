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
	puts("введите первое число");
	scanf("%d", &num1);
	printf("введено число %d\n", num1);
	puts("введите второе число");
	scanf("%d", &num2);
	printf("введено число %d\n", num2);
	printf("сумма чисел %d и %d равна %d\n", num1, num2, num1 + num2);
	printf("разность чисел %d и %d равна %d\n", num2, num1, num2 - num1);
	printf("прозведение чисел %d и %d равно %d\n", num2, num1, num2 * num1);
	printf("частное от деления %d на %d равно %d\n", num2, num1, num2 / num1);
	printf("остаток от деления %d на %d равен %d\n", num2, num1, num2 % num1);
}

int task2()
{
	int dym;
	float result1;
	float result2;
	puts("введите число дюймов для расчета");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = I * dym;
	printf("%d английских дюймов - это %.2f см\n", dym, result1);
	printf("%d испанских дюймов - это %.2f см\n", dym, result2);
}

int task3()
{
	int a, b;
	puts("введите первое число");
	scanf("%d", &a);
	puts("введите второе число");
	scanf("%d", &b);
	puts("  _____________");
	puts("  |a*b|a+b|a-b|");
	puts("  _____________");
	printf("  |%d*%d|%d+%d|%d-%d|\n", a, b, a, b, a, b);
	puts("  _____________");
	printf("  | %1d | %1d | %1d |", a * b, a + b, a - b);
}