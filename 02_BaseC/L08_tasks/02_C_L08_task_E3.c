#include <stdio.h>
/*
E3-Максимум и минимум
Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.

Формат входных данных
10 целых чисел через пробел
Формат результата
4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум.

Примеры
Входные                         Результат
4 -5 3 10 -4 -6 8 -10 1 0       4 10 8 -10
1 2 3 4 5 6 7 8 9 10            10 10 1 1
*/

int main()
{
    int n=10, numMin=0, numMax=0, arrMin, arrMax, arr[n];
    for (int  i=0; i < n; i++)
        scanf ("%d", &arr[i]);
    arrMin=arr[0];
    arrMax=arr[0];
    for (int i=0; i < n; i++) {
        if (arrMin > arr[i]) {
            arrMin = arr[i];
            numMin = i;
        }
        if (arrMax < arr[i]) {
            arrMax = arr[i];
            numMax = i;
        }
    }
    printf ("%d %d %d %d\n", numMax+1, arrMax, numMin+1, arrMin);
    return 0;
}