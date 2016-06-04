#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <iostream>

int main(void) {
	setlocale(LC_ALL, "Rus");

	int minutes, hours;

	printf("Введите количество минут:\t");
	scanf_s("%d", &minutes);

	printf("------------------------------\n");
	printf("ЗАДАННОЕ ВРЕМЯ\n");

	if (minutes < 60) {
		hours = 0;
	}
	else {
		hours = (minutes - (minutes % 60)) / 60;
		minutes = minutes % 60;
	}

	if (hours < 10 || minutes < 10) {
		if (hours < 10 && minutes < 10) {
			printf("0%d:0%d\n", hours, minutes);
		}
		else {
			if (hours < 10) {
				printf("0%d:%d\n", hours, minutes);
			}
			if (minutes < 10) {
				printf("%d:0%d\n", hours, minutes);
			}
		}
	}
	else {
		printf("%d:%d\n", hours, minutes);
	}

	printf("------------------------------\n");

	system("pause");
	return 0;
}

