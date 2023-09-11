#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      P       2,32166
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, m;//1
	puts("Введите два целых числа");
	scanf("%d%d", &n, &m);
	puts("Введены числа\n");
	printf("Сумма = %d\n", n + m);
	printf("Разность = %d\n", m - n);
	printf("Проихведение = %d\n", m * n);
	printf("Частное = %d\n", m / n);
	printf("Остаток от деления = %d\n", m % n);
	int dym; //2
	float result;
	puts("Введите дюймы для перевода в сантиметры\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюйм(ов) – это %.1f см\n", dym, result);
	int pdym;
	float presult;
	puts("Введите испанские дюймы для перевода в сантиметры\n");
	scanf("%d", &pdym);
	presult = P * pdym;
	printf("%d испанск. дюйм(ов) – это %.1f см\n", pdym, presult);
	int a, b;//3
	puts("Введите два числа\n");
	scanf("%d%d", &a, &b);
	puts("\t______________________________\n");
	puts("\t|  a * b  | a + b  |  a - b  |\n");
	puts("\t------------------------------\n");
	printf("\t| %d * %d | %d + %d | %d - %d|\n", a, b, a, b, a, b);
	puts("\t------------------------------\n");
	printf("\t|   %d    |   %d   |    %d   |\n", (a * b), (a + b), (a - b));
}
