#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      P       2,32166
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, m;//1
	puts("¬ведите два целых числа");
	scanf("%d%d", &n, &m);
	puts("¬ведены числа\n");
	printf("—умма = %d\n", n + m);
	printf("–азность = %d\n", m - n);
	printf("ѕроихведение = %d\n", m * n);
	printf("„астное = %d\n", m / n);
	printf("ќстаток от делени€ = %d\n", m % n);
	int dym; //2
	float result;
	puts("¬ведите дюймы дл€ перевода в сантиметры\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюйм(ов) Ц это %.1f см\n", dym, result);
	int pdym;
	float presult;
	puts("¬ведите испанские дюймы дл€ перевода в сантиметры\n");
	scanf("%d", &pdym);
	presult = P * pdym;
	printf("%d испанск. дюйм(ов) Ц это %.1f см\n", pdym, presult);
	int a, b;//3
	puts("¬ведите два числа\n");
	scanf("%d%d", &a, &b);
	puts("\t______________________________\n");
	puts("\t|  a * b  | a + b  |  a - b  |\n");
	puts("\t------------------------------\n");
	printf("\t| %d * %d | %d + %d | %d - %d|\n", a, b, a, b, a, b);
	puts("\t------------------------------\n");
	printf("\t|   %d    |   %d   |    %d   |\n", (a * b), (a + b), (a - b));
}