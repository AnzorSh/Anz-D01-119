#include <stdio.h>
/*
Ввести три числа, найти их среднее арифметическое.
	Input format
Три целых числа
	Output format
Вещественное число в формате %.2f
*/

int main() {
	int a, b, c;
	float d;
	scanf("%d %d %d", &a, &b, &c);
	d = (float) (a+b+c)/3;
	printf("%.2f", d);
	return 0;
}