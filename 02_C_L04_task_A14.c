#include <stdio.h>

/*
Дано трехзначное число, напечатать максимальную цифру
	Input format
Целое положительное трехзначное число
	Output format
Одна цифра
*/

int main() {
    int a, b, c, d, max;
    scanf("%d", &d);
    a = d / 100;
    b = d / 10 % 10;
    c = d % 10;
    if (a < b) {
        a = b;
    }
    if (a < c) {
        a = c;
    }
    printf("%d", a);
    return 0;
}