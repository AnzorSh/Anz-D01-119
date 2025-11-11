#include <stdio.h>
/*
Ввести два числа и найти их разность.
    Input format
Два целых числа
    Output format
Ответ - одно целое число
*/

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a - b;
	printf("%d", c);
	return 0;
}