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
	puts("ââåäèòå ïåðâîå ÷èñëî");
	scanf("%d", &num1);
	printf("ââåäåíî ÷èñëî %d\n", num1);
	puts("ââåäèòå âòîðîå ÷èñëî");
	scanf("%d", &num2);
	printf("ââåäåíî ÷èñëî %d\n", num2);
	printf("ñóììà ÷èñåë %d è %d ðàâíà %d\n", num1, num2, num1 + num2);
	printf("ðàçíîñòü ÷èñåë %d è %d ðàâíà %d\n", num2, num1, num2 - num1);
	printf("ïðîçâåäåíèå ÷èñåë %d è %d ðàâíî %d\n", num2, num1, num2 * num1);
	printf("÷àñòíîå îò äåëåíèÿ %d íà %d ðàâíî %d\n", num2, num1, num2 / num1);
	printf("îñòàòîê îò äåëåíèÿ %d íà %d ðàâåí %d\n", num2, num1, num2 % num1);
}

int task2()
{
	int dym;
	float result1;
	float result2;
	puts("ââåäèòå ÷èñëî äþéìîâ äëÿ ðàñ÷åòà");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = I * dym;
	printf("%d àíãëèéñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result1);
	printf("%d èñïàíñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result2);
}

int task3()
{
	int a, b;
	puts("ââåäèòå ïåðâîå ÷èñëî");
	scanf("%d", &a);
	puts("ââåäèòå âòîðîå ÷èñëî");
	scanf("%d", &b);
	puts("  _______________________________________________________________________________");
    puts("  |           a*b           |           a+b           |           a-b           |");
    puts("  _______________________________________________________________________________");
    printf("  |%12g*%12g|%12g+%12g|%12g-%12g|\n", a, b, a, b, a, b);
    puts("  _______________________________________________________________________________");
    printf("  | %23g | %23g | %23g |", a * b, a + b, a - b);

}
