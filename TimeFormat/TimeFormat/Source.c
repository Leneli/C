#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <iostream>

int main(void) {
	setlocale(LC_ALL, "Rus");

	int minutes;

	printf("Введите количество минут:\t");
	scanf_s("%d", &minutes);

	printf("------------------------------\n");
	printf("ЗАДАННОЕ ВРЕМЯ\n");
	printf("%d\n", minutes);
	printf("------------------------------\n");

	system("pause");
	return 0;
}