/*
Сравнение версий

Реализуйте функцию, которая сравнивает переданные версии version1 и version2. Если version1 > version2, то функция должна вернуть 1, если наоборот то -1, в противном случае 0.

Версия это строка в которой два числа (мажорная и минорные версии) разделены точкой, например: 12.11.

Пример порядка версий:
0.1 < 1.1 < 1.2 < 1.11 < 13.37
*/

#include <stdio.h>
#include <locale.h>

#define N 2


int addVersion(int *);
int printArr(int *);

int main(void) {
	setlocale(LC_ALL, "ru");

	int version_1[N], version_2[N];
	int i;

	printf("Укажите первую версию (мажорную и минорную часть через ПРОБЕЛ): ");
	addVersion(version_1);

	printf("\nУкажите вторую версию (мажорную и минорную часть через ПРОБЕЛ): ");
	addVersion(version_2);

	printf("\nНаибольшая версия: ");
	//Сравнение версий
	for (i = 0; i < N; i++) {
		if (version_1[i] > version_2[i]) {
			printArr(version_1);
			break;
		}
		if (version_2[i] > version_1[i]) {
			printArr(version_2);
			break;
		}

		if (i == N - 1) {
			printf("они равны\n");
		}
	}

	system("pause");
	return 0;
}

//Заполнение массива
int addVersion(int *arr)
{
	int i;

	for (i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}

	return 0;
}

int printArr(int *arr)
{
	int i;

	for (i = 0; i < N; i++) {
		if (i != (N - 1)) {
			printf("%d.", arr[i]);
		}
		else {
			printf("%d \n", arr[i]);
		}
	}

	return 0;
}

//Вывод массива на экран