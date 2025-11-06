#include <stdio.h>

/*
Above, Less, Equal
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.
	Input format
Два целых числа
	Output format
Одно единственное слово: Above, Less, Equal
*/

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a>b)
		printf("Above");
	else
		if (a<b)
			printf("Less");
		else
			if (a==b)
				printf("Equal");
	return 0;
}