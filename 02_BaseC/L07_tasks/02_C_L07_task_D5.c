#include <stdio.h>
/*
Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.
    Input format
Целое не отрицательное число в десятичной системе счисления
    Output format
Целое число в двоичной системе счисления
    Examples
Input
    5
Output
    101
*/

void to_bin(unsigned int n) {
    if(n<=1) {
        putchar('0'+n);
        return;
    }
    to_bin(n>>1);
    putchar('0' + (0x1&n));
}

int main(void) {
    unsigned int i;
    scanf("%u", &i);
    to_bin(i);
    return 0;
}