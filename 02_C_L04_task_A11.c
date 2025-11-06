#include <stdio.h>

/*
Напечатать сумму максимума и минимума.
	Input format
Пять целых чисел через пробел
	Output format
Одно целое число - сумма максимума и минимума
*/

int main() {
    int a, b, c, d, e, min, max, sum;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    // поиск минимума
    min = a;
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    if (min > d) {
        min = d;
    }
    if (min > c) {
        min = c;
    }
    if (min > e) {
        min = e;
    }
    // поиск максимума
    max = a;
    if (max < b) {
        max = b;
    }
    if (max < d) {
        max = d;
    }
    if (max < d) {
        max = d;
    }
    if (max < c) {
        max = c;
    }
    if (max < e) {
        max = e;
    }
    sum = min + max;
    printf("%d", sum);
    return 0;
}