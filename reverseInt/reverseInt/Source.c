/*
 ������� - ������� ������������ �����, �.�. "123" -> "321"

 ��� ��� ��� ������ ������������ ���������� ����� ������ ��� �����, � ���������� ������ ���������� ��� �� ������, �� ��������� ������ ��������� ����������� ����� �� ����� � �� ����� �� ������� �� �����, �� ���� � ���������� �������� �� ����� �����, � ������ ������ �� ����. ���� ����������� ����� �������������, �� ��� ���������� �� -1, � ����� ������� ������ ��������� ������ "-"
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Rus");

	int X, Y;

	printf("������� ����� ����� �����: ");
	scanf_s("%d", &X);
	printf("������������ �����: ");

	if (X < 0) {
		printf("-");
		X *= -1;
	}

	while (X != 0) {
		Y = X % 10;
		printf("%d", Y);
		X = (X - Y) / 10;
	}

	printf("\n");

	system("pause");
	return 0;
}