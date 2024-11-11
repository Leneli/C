/**
 * Задание: Пользователь задает интервал от-до и загадывает число.
 * Скрипт, задавая вопросы "равно или меньше", должен отгадать число и вывести количество попыток
 *
 * Для решения используется бинарный поиск
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
// #include <corecrt_malloc.h>

int binarySearch(int, int);

int main(void) {
  setlocale(LC_ALL, "Rus");

  int startNumber; // первое число интервала
  int endNumber; // последнее число интервала

  printf("Введите начальное число интервала: ");
  scanf("%d", &startNumber);

  printf("Введите конечное число интервала: ");
  scanf("%d", &endNumber);

  // если пользователь указал конечное число меньше, чем начальное
  while (startNumber > endNumber)
    {
      printf("Начальное число не может быть больше конечного. Введите конечное число интервала: ");
      scanf("%d", &endNumber);
    }

  printf("\nЗагадайте число от %d до %d, а я попробую его угадать, задавая наводящие вопросы...\n\n", startNumber, endNumber);

  binarySearch(startNumber, endNumber);

  // system("pause"); for Windows
  system("read -p 'Press Enter to continue...' var");
  return 0;
}

int binarySearch(int start, int end) {
  int startSearchArea = start;
  int endSearchArea = end;

  int answer;
  int counter = 0;

  while (startSearchArea <= endSearchArea)
  {
    counter++;

    int mid = (startSearchArea + endSearchArea) / 2;

    printf("\nВы загадали число %d? (да - 1, нет - 0): ", mid);
    scanf("%d", &answer);

    if (answer == 1) {
      printf("Ура! Я угадал число за %d попыток.\n", counter);
      return 0;
    }

    printf("Ваше число меньше? (да - 1, нет - 0): ");
    scanf("%d", &answer);

    if (answer == 1) {
      endSearchArea = mid - 1;
    } else {
      startSearchArea = mid + 1;
    }
  }

  printf("\nТакого числа нет, нехорошо обманывать бедных ботов :( Потратил %d попыток \n\n", counter);
  return 0;
}
