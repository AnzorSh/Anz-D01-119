#include <stdio.h>
/*
Составить рекурсивную функцию, печать всех чисел от 1 до N
	Input format
Одно натуральное число
	Output format
Последовательность чисел от 1 до введенного числа
	Examples
Input
	5
Output
	1 2 3 4 5
*/

void recur(int i, int n) {
    if(i==n+1)
        return;
    printf("%d ", i);
    recur(i+1, n);
}

int main() {
	int y=1, z;
	scanf("%d", &z);
	recur(y,z);
	return 0;
}