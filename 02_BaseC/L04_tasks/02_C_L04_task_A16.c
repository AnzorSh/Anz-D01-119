#include <stdio.h>

/*
В порядке возрастания
Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
    Input format
Три целых числа
    Output format
Одно слово YES или NO
*/

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && b < c)
        printf("YES");
    else
        printf("NO");
    return 0;
}