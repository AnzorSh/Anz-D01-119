#include <stdio.h>

/*
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.
    Input format
Одно целое число
    Output format
Одно слово: YES или NO
*/

int main() {
    int a, b, c, d, res=0;
    scanf("%d",&c);
    do {
        a = c % 10;
        c = c / 10;
        d = c;
        // printf("a=%d c=%d d=%d",a,c,d);
        while (d > 0) {
            b = d % 10;
            d = d / 10;
            // printf(" b=%d d=%d\n",b,d);
            if (a == b) {
                printf("YES");
                res = 1;
                break;
            }
        }
        if (res == 1)
            break;
    } while (c != 0);
    if (res != 1)
        printf("NO");
    return 0;
}