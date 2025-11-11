#include <stdio.h>

/*
Ввести целое число и найти сумму его цифр.
	Input format
Одно целое число большее или равное нулю.
	Output format
Одно число - сумма цифр
*/

int main() {
	int a, b, c=0;
	scanf("%d", &a);
	if(a < 0) {
		printf("Число, %d < 0", a);
		return 0;
	}
	else
	while (a > 0) {
		b = a % 10;
		c = c+b;
		a = a / 10;
	}
	printf("%d", c);
	return 0;
}