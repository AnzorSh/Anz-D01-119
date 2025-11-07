#include <stdio.h>

/*
Посчитать количество четных и нечетных цифр числа.
	Input format
Одно целое неотрицательное число.
	Output format
Два числа через пробел. Количество четных и нечетных цифр в числе.
*/

int main() {
	int in, a=0, b=0, even=0, odd=0;
	scanf("%d", &in);
	while (in > 0) {
		a = in % 10;
		if ((a%2) == 0)
		    even++;
		else
		    odd++;
		in = in / 10;
	}
	printf("%d %d", even, odd);
	return 0;
}