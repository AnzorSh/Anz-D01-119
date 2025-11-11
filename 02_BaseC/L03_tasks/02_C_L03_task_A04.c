#include <stdio.h>
/*
Сумма и произведение трех чисел
Ввести три числа, найти их сумму и произведение.
	Input format
Три целых числа через пробел.
	Output format
Строка вида
%d+%d+%d=%d
%d*%d*%d=%d
*/

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	e = a * b * c;
	printf("%d+%d+%d=%d\n", a, b, c, d);
	printf("%d*%d*%d=%d", a, b, c, e);
	return 0;
}
