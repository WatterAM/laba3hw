#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      P       2,32166
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, m;//1
	puts("������� ��� ����� �����");
	scanf("%d%d", &n, &m);
	puts("������� �����\n");
	printf("����� = %d\n", n + m);
	printf("�������� = %d\n", m - n);
	printf("������������ = %d\n", m * n);
	printf("������� = %d\n", m / n);
	printf("������� �� ������� = %d\n", m % n);
	int dym; //2
	float result;
	puts("������� ����� ��� �������� � ����������\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d ����(��) � ��� %.1f ��\n", dym, result);
	int pdym;
	float presult;
	puts("������� ��������� ����� ��� �������� � ����������\n");
	scanf("%d", &pdym);
	presult = P * pdym;
	printf("%d �������. ����(��) � ��� %.1f ��\n", pdym, presult);
	int a, b;//3
	puts("������� ��� �����\n");
	scanf("%d%d", &a, &b);
	puts("\t______________________________\n");
	puts("\t|  a * b  | a + b  |  a - b  |\n");
	puts("\t------------------------------\n");
	printf("\t| %d * %d | %d + %d | %d - %d|\n", a, b, a, b, a, b);
	puts("\t------------------------------\n");
	printf("\t|   %d    |   %d   |    %d   |\n", (a * b), (a + b), (a - b));
}