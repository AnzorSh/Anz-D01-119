#include <stdio.h>

/*
На вход подается произвольное трехзначное число, напечать произведение цифр
    Input format
Трехзначное целое положительное число
    Output format
Одно целое число
*/

int main() {
	int a, b, c, d, res;
	scanf("%d", &d);
	a = d / 100;
	b = d / 10 % 10;
	c = d % 10;
	// printf("%d %d %d", a, b, c);
	res = a*b*c;
	printf("%d", res);
	return 0;
}
