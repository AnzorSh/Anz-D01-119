#include <stdio.h>

/*
Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.
	Input format
Два целых числа по модулю не больше 100
	Output format
Квадраты чисел от a до b.
*/

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	if(a > b) {
		printf("Неверно, %d > %d", a, b);
		return 0;
	}
	else
	while (a <= b) {
		c=a*a;
		printf("%d ", c);
		a++;
	}
	return 0;
}