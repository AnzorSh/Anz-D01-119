#include <stdio.h>
/*
E2-Найти минимум
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.

Формат входных данных
5 целых чисел через пробел
Формат результата
Одно единственное целое число

Примеры
Входные         Результат
4 15 3 10 14    3
1 2 3 4 -5      -5
*/

int main()
{
    int n=5, arrMin, arr[n];
    for (int  i=0; i < n; i++)
        scanf ("%d", &arr[i]);
    arrMin=arr[0];
    for (int i=0; i < n; i++) {
        if (arrMin > arr[i])
            arrMin = arr[i];
    }
    printf ("%d \n", arrMin);
    return 0;
}