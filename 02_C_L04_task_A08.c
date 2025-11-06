#include <stdio.h>

/*
Ввести три числа и найти наибольшее из них
    Input format
Три целых числа через пробел
    Output format
Одно наибольшее целое число
*/

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
		if (a>c)
			printf("%d", a);
		else
			printf("%d", c);
	else
		if (b>c)
			printf("%d", b);
		else
			printf("%d", c);
	return 0;
}