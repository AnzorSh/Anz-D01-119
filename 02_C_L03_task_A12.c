#include <stdio.h>

/*
На вход подается произвольное трехзначное число, напечать сумму цифр
    Input format
Трехзначное целое положительное число
    Output format
Одно целое число
*/

int main() {
    int a, b, c, d, sum;
    scanf("%d", &d);
    a = d / 100;
    b = d / 10 % 10;
    c = d % 10;
    // printf("%d %d %d", a, b, c);
    sum = a + b + c;
    printf("%d", sum);
    return 0;
}
