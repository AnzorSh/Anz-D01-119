#include <stdio.h>
/*
Составить рекурсивную функцию, печать всех чисел от N до 1.
    Input format
Одно натуральное число
    Output format
Последовательность целых чисел от введенного числа до 1, через пробел.
    Examples
Input
    5
Output
    5 4 3 2 1
*/

void recur(int i, int n) {
    if(i==n+1)
        return;
    recur(i+1, n);
    printf("%d ", i);
}

int main() {
	int y=1, z;
	scanf("%d", &z);
	recur(y,z);
	return 0;
}