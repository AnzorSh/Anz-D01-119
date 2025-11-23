#include <stdio.h>
/*
Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N.
    Input format
Одно натуральное число
    Output format
Сумма чисел от 1 до введенного числа
*/

int recurSum(int n) {
    if (n <= 1)
        return n;
    return n + recurSum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", recurSum(n));
    return 0;
}