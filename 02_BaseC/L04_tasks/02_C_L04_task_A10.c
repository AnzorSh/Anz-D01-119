#include <stdio.h>

/*
Ввести пять чисел и найти  наименьшее из них.
	Input format
Пять целых чисел
	Output format
Одно целое число
*/

int main () {
    int a,b,c,d,e;
    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a > b) {
        a = b;
    }
    if (c > d) {
        c = d;
    }
    if (a > c) {
        a = c;
    }
    if (a > e) {
        a = e;
    }
    printf ("%d\n", a);
    return 0;
}