#include <stdio.h>
/*
Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.
	Input format
Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0
	Output format
Одно целое число

	Examples
Input
	8 3
Output
	512
*/

int power (int n, int p) {
	int res=1;
	for (int i=0; i < p; i++) {
		res = res * n;
	}
	return res;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", power(a,b));
	return 0;
}
