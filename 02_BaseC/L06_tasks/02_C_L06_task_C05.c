#include <stdio.h>
/*
Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.
    Input format
Одно целое положительное число N
    Output format
Целое число - сумма чисел от 1 до N
    Examples
Input
    100
Output
    5050
*/
int func (int q) {
    int sum=0;
    for (int i=1; i <= q; i++) {
	    sum = sum + i;
    }
	return sum;
}

int main() {
    int n;
    scanf("%d",&n);
	printf("%d", func(n));
	return 0;
}