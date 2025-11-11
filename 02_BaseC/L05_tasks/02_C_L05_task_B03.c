#include <stdio.h>

/*
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
	Input format
Два целых числа по модулю не больше 100
	Output format
Сумма квадратов от первого введенного числа до второго
*/

int main() {
	int a, b, c, d=0;
	scanf("%d %d", &a, &b);
	if(a > b) {
		printf("Неверно, %d > %d", a, b);
		return 0;
	}
	else
	if((a > 100) || (b > 100)) {
		printf("Одно из чисел > 100");
		return 0;
	}
	else
	while (a <= b) {
		c=a*a;
		d = d + c;
		a++;
	}
	printf("%d ", d);
	return 0;
}